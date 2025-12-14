/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_9 ? (min(1105245350, 1006632960)) : (min(4294967291, var_14))))) ? (((((4294967295 ? var_16 : 1131946854))) ? 1576798258 : (max(3017659806, var_10)))) : 633281765);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_19 = 3861063963;
                            arr_15 [i_1] [i_3] [13] [i_3] [13] = arr_14 [i_4 + 1] [i_3] [i_2] [i_1] [17];
                            var_20 = var_10;
                            var_21 = (~(~3189721945));
                        }
                        arr_16 [i_0] [i_0] [i_3] [2] = var_13;
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_5] [12] [i_1] [12] |= (((max((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2]), (arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1])))) ? var_11 : (min(2147483648, 1452040166)));
                        var_22 = (max(var_22, ((((min(1835324778, var_12))) ? (min((arr_12 [i_5] [i_5] [i_2] [i_5] [i_0]), (max(436280893, 3962355288)))) : (min((arr_3 [i_5 + 2] [i_2 - 2]), (arr_3 [i_5 + 2] [i_2 + 1])))))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_22 [i_6] [i_2] [i_0] [i_1] [i_0] |= 1006632934;
                        var_23 = (max(var_23, 3644434635));
                    }
                    var_24 = (max(var_24, (max(var_4, (arr_10 [i_1])))));
                }
                arr_23 [i_0] [19] [i_1] = min(((22 >> (((arr_6 [i_0] [16] [16] [3]) - 710359910)))), 2088078025);
                arr_24 [i_1] = max((2540390226 - 158450614), (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_8 [i_0] [i_1] [i_1] [10] [2] [i_0]))));
                var_25 = (max(var_25, (((arr_0 [i_0]) ? (arr_18 [i_0] [i_1]) : (arr_2 [i_0])))));
            }
        }
    }
    var_26 = var_7;
    var_27 = max(601282015, 2364248633);
    #pragma endscop
}
