/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(((var_16 ? var_14 : var_3)), (!2))), var_12));
    var_18 = ((((var_16 * var_0) ? ((var_11 ? var_0 : -52)) : ((min(var_10, var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_19 = (max((11825703840689631089 > 21608), (((arr_8 [i_0 + 2] [i_2]) ? ((max(32767, -24208))) : ((max(24208, 7995)))))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_20 = ((!((min((min(var_8, (arr_2 [i_0]))), ((var_4 ? var_3 : (arr_7 [i_0] [i_2] [i_0] [1]))))))));
                            var_21 = (arr_6 [i_1] [i_2] [i_4]);
                        }
                        var_22 = (1158705494 >= 3907206564);
                    }
                    var_23 *= ((((!((max((arr_6 [14] [0] [14]), var_8))))) ? (((((arr_11 [i_0] [i_0 + 2] [10] [1] [i_2 - 2] [i_2] [i_2]) && var_6)))) : (min((min(var_1, var_16)), (((!(arr_0 [6]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 = ((-(((!(var_2 - var_4))))));
                                var_25 = ((var_4 ? ((((!var_16) ? (0 || -68) : (min(var_8, var_16))))) : ((max(var_2, (arr_4 [i_0]))))));
                                var_26 |= var_9;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_19 [i_7] = (((((var_7 == (arr_17 [i_0 + 1])))) * (((arr_18 [i_0] [i_0] [i_0]) ? var_4 : var_0))));
                    arr_20 [i_7] = ((arr_7 [i_0] [2] [i_0] [i_0]) || (arr_6 [18] [20] [i_7]));
                    var_27 = (max(var_27, (arr_16 [i_0] [1] [i_7] [7] [i_7 - 1] [i_1] [i_0 - 1])));
                    var_28 = (((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_0])));
                    var_29 &= (var_4 - var_2);
                }
                arr_21 [i_0] [i_1] [21] = (max((arr_5 [i_0 - 1]), (var_5 + var_11)));
                var_30 = (((((-(arr_9 [i_0] [i_0 + 3] [i_1] [i_0 + 3])))) / (min((arr_16 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]), (((arr_10 [4] [i_0 + 3] [4] [4] [4]) * var_14))))));
                arr_22 [i_1] [i_1] [i_0] = ((~(arr_1 [i_0 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                var_31 = (max(1, 24208));
                arr_28 [i_8] [i_9] [i_9] = ((((!((((arr_3 [i_9] [i_8]) + var_7))))) ? ((((arr_13 [i_8] [4] [i_8] [i_9] [i_8]) ? (arr_13 [i_8] [i_9] [i_9] [i_9] [i_9]) : (arr_13 [i_8] [i_9] [i_9] [i_8] [i_9])))) : (((arr_6 [i_8] [i_9] [i_9]) - (((var_7 ? 4049637430 : (arr_2 [i_8]))))))));
                arr_29 [i_8] [i_8] [i_9] = (max(((7709740274847738501 ? 1 : 426341119)), (arr_2 [i_8])));
                var_32 -= -38;
            }
        }
    }
    var_33 = var_1;
    #pragma endscop
}
