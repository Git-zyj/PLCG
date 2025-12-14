/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 *= (((((~var_8) / ((var_4 ? var_3 : (arr_1 [i_2]))))) % var_6));
                    arr_8 [1] [i_0] [i_2] = ((max(var_3, ((1 ? 1 : (arr_6 [i_0]))))) - (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]));
                    arr_9 [i_0] = (max((((!1) ? (var_6 % var_2) : (((!(arr_6 [i_0])))))), (((!(arr_0 [i_0]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            var_11 *= ((-1751 ? (min(1, ((18446744073709551615 ? var_1 : (arr_18 [i_3] [i_4] [8] [i_3]))))) : (((((127 ? 24576 : 115))) ? 1852777789 : (~1852777789)))));
                            arr_22 [5] [i_7] [3] [i_7 - 1] [i_4] [i_4] = var_8;
                            var_12 = ((((~(arr_17 [i_4 + 2] [i_3] [i_7 - 1] [i_6]))) | ((var_2 & (arr_17 [i_4 + 3] [i_4] [i_7 - 2] [i_4 + 3])))));
                            arr_23 [i_4] [i_4] = (arr_14 [i_4] [i_4]);
                        }
                        var_13 = ((((((arr_7 [i_3] [i_3] [15]) != var_9)) ? ((var_9 ? 6291885589122376155 : (arr_16 [i_3]))) : (arr_14 [i_4] [i_4 - 1]))));
                        arr_24 [i_3] [i_3] [i_4] [i_6] = 229;
                        var_14 = (max((arr_1 [i_4]), (max(((var_3 ? 111 : var_5)), -var_8))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_15 *= (min(57, var_3));
                                arr_30 [i_3] [i_4] = (((((4207610800411918836 / (arr_27 [i_9] [i_9] [i_5] [i_8] [i_9 + 1])))) / ((min(((-577864756 ? var_6 : 12425)), (arr_27 [i_3] [i_3] [i_5] [i_8] [i_9]))))));
                                arr_31 [i_3] [i_3] [1] [1] [3] [i_4] = (min(0, -2395));
                                var_16 = var_5;
                            }
                        }
                    }
                }
            }
        }
        arr_32 [i_3] = ((-(((arr_4 [i_3] [8] [i_3] [9]) ? (arr_4 [i_3] [13] [6] [i_3]) : (arr_4 [i_3] [i_3] [i_3] [i_3])))));
        var_17 = 1;
        var_18 = ((~(~var_9)));
    }
    #pragma endscop
}
