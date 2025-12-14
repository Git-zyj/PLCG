/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_10 ^= (arr_0 [i_1 + 1] [i_1 - 2]);
                                arr_14 [3] [i_1 + 1] [1] [0] [i_0] = ((((((var_8 ? var_3 : (arr_12 [i_0]))))) - -13963));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_11 = (max(var_11, var_7));
                        var_12 = (min(var_12, var_3));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_6] &= ((((((max(var_3, var_5))) ? (((arr_1 [9] [i_2]) * 1048575)) : (268435456 * var_7)))) ? (((((520093696 ? 9167 : var_0))) ? (arr_12 [i_2]) : ((min(2050240493, 1099377410048))))) : (((arr_15 [i_2] [i_1 + 1] [i_1 - 1] [i_6] [i_2]) ? (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (arr_12 [i_2]))));
                        var_13 = (max(var_13, (((((((((var_2 ? (arr_2 [i_2]) : 0))) ? ((max(13, (arr_7 [i_0])))) : (arr_8 [i_0] [i_1] [i_2] [i_6])))) ? (arr_12 [i_2]) : var_7)))));
                        var_14 = (min(var_14, 1023));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_2] [5] [i_7] = ((((((max(var_3, -1629993108))) ? ((max((arr_2 [i_2]), 23054))) : 451027745)) - (max((max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_7]), 1)), (~var_1)))));
                        arr_23 [i_0] [i_7] = (min(((max((arr_15 [i_0] [i_1 - 1] [i_0] [i_1] [i_1 - 1]), (arr_21 [1] [i_0])))), (((arr_11 [i_1 - 1] [i_1 - 2] [i_1 + 1]) ? 50 : 5836466909571439410))));
                    }
                    var_15 = (max((arr_5 [i_0] [i_1 - 1]), (((-73 && (arr_20 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_0] [i_1] [i_1 - 1]))))));
                    var_16 = 1;
                }
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    var_17 = (arr_24 [i_1] [i_8 + 1]);
                    var_18 = ((~(((arr_16 [i_8 - 2] [i_1] [i_1] [i_1 - 1]) ? (arr_16 [1] [i_8] [i_8] [i_1 - 2]) : (arr_16 [i_1 - 1] [i_1] [i_1] [i_1 - 2])))));
                }
                arr_26 [i_0] [i_0] = var_6;
                var_19 = (min((arr_8 [i_0] [i_0] [i_1 - 2] [i_0]), ((((max((arr_1 [i_0] [i_1 - 2]), var_0))) ? (max(9, (arr_6 [i_0] [i_1]))) : ((((arr_9 [i_0] [0] [i_1] [i_1]) ? 4294967295 : -28)))))));
                var_20 = (((8762758971506856510 << (17540 - 17540))) <= (~3328153818));
            }
        }
    }
    var_21 += var_7;
    var_22 ^= ((((min((max(var_9, var_8)), var_5))) ? var_4 : ((var_5 ? var_8 : (max(var_7, var_2))))));
    #pragma endscop
}
