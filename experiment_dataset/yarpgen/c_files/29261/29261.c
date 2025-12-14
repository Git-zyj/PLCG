/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_5);
    var_20 = ((min(var_14, 1530741453)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (((((min(-1880165817, (arr_5 [i_1]))))) ? 1149450643411517935 : ((var_8 ? -29 : (arr_2 [i_0])))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_0] = ((~(arr_7 [i_2] [i_1] [12])));
                    var_22 ^= -1;
                    var_23 = ((var_15 ? ((127 ? -1268037771 : 1530741453)) : var_14));
                    arr_11 [i_2] |= (max(-1149450643411517964, (44392511 / var_3)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        arr_17 [i_1] [3] [i_1] [i_3 + 1] [9] [i_4] = 37;
                        var_24 = (min(var_24, (~-2)));
                        var_25 ^= var_12;
                        arr_18 [i_4] [i_1] = (arr_12 [i_0] [i_0] [i_0] [i_0]);
                        var_26 &= ((-(((arr_0 [i_4 - 1]) ? var_9 : (arr_12 [i_0] [i_1] [12] [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_21 [i_3 + 1] [i_5] [i_1] [i_1] [i_1] [i_0] = var_12;
                        arr_22 [i_0] [i_1] [14] [9] [i_1] = -5232;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_25 [16] [i_1] [i_1] [0] [4] [i_1] &= ((1150145684 ? 5226 : 1134907106097364992));
                            arr_26 [i_1] [i_5] [i_1] [i_3] [i_1] [i_1] = 176;
                        }
                    }
                    var_27 = (min(var_27, (((((((arr_1 [2]) ? -50383719 : (arr_0 [i_3]))) + 2147483647)) << ((((-111 ? (arr_24 [i_0] [i_1] [i_3 - 1]) : var_10)) - 16014818922989577435))))));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_30 [i_7] [i_1] [15] = (-50383718 | (arr_12 [8] [i_1] [i_0] [8]));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_36 [i_0] [4] [i_1] [i_7] [i_1] [i_7] = (arr_23 [2] [i_1] [2] [i_8]);
                                arr_37 [i_0] [i_8] [i_7] [i_8] [i_8] [i_7] &= ((-((-(((arr_0 [i_0]) * -28863))))));
                            }
                        }
                    }
                }
                var_28 = (((!1149450643411517935) || var_5));
            }
        }
    }
    var_29 = (((!var_18) ? ((((5231 ? var_12 : var_15)))) : var_2));
    #pragma endscop
}
