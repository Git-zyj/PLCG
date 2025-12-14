/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_19 ^ var_5);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_3] [i_3] [i_2 - 1] [i_3] [i_0] = var_7;
                        var_21 = (min(var_21, (((((min((((!(arr_10 [i_1 - 2] [i_1 - 2] [i_1] [11])))), ((var_0 ? var_9 : var_12))))) ? 22 : (arr_3 [i_3] [i_1 - 3]))))));
                        arr_12 [i_0] [i_3] [i_2 + 1] [i_0] = ((-23 >= (max((0 != -31109), ((~(arr_4 [i_0 - 2])))))));
                        var_22 = (max(var_22, (max((max((3 > var_6), ((22 ? 13204308635851509193 : var_14)))), (((((((arr_2 [i_1] [i_3 - 1]) != (arr_2 [i_0] [17])))) != var_2)))))));
                        arr_13 [i_3] = (max(1408788658, ((((arr_3 [i_0 - 2] [i_1 - 2]) || (arr_3 [i_0 + 3] [i_1 + 1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_23 &= var_0;
                            var_24 = (arr_3 [i_0 - 2] [i_2 + 1]);
                            var_25 = (((arr_14 [i_4] [i_4] [i_2] [21] [i_4]) ? (38831 * 13204308635851509182) : -32758));
                        }
                        var_26 = (arr_0 [12]);
                        arr_20 [i_0 - 1] [i_1 - 3] [i_4] [i_2] [i_4 + 4] = ((32740 ? var_8 : (arr_19 [i_0 + 1] [i_0 + 2] [i_1 - 1] [i_4] [i_2] [i_4 + 4])));
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_0] [i_6 + 3] [i_0] [i_6 + 3] [2] [i_0] &= ((-var_17 ? var_16 : 18446744073709551615));
                        arr_25 [i_0] [i_1] [i_2] [i_0] [6] [i_6] = ((((arr_22 [i_1] [i_1 + 2] [i_1] [i_6]) ? (arr_22 [i_0 - 1] [i_1 - 1] [i_2] [i_6]) : (arr_22 [i_0 + 3] [i_1] [i_2 + 2] [i_6]))));
                        var_27 &= ((!(max((arr_16 [i_1 + 1] [i_1] [i_0] [i_1] [i_1 - 2] [20]), (arr_8 [i_0 + 1] [i_0] [i_2 + 2] [i_6 - 1])))));
                    }
                    var_28 = (max(var_28, (max(1, 15))));
                }
            }
        }
    }
    var_29 = (min(var_29, (((-(max(-30, 6043424395251822730)))))));
    #pragma endscop
}
