/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_1] = (min((((arr_3 [i_0] [i_2 - 2] [i_1 - 1]) - (arr_3 [i_2] [i_2 - 2] [i_1 + 1]))), (((arr_0 [i_0] [i_2 - 3]) - (arr_3 [i_0] [i_2 - 3] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2 - 2] [i_3] [i_2] [i_4] = (-((-(arr_8 [i_1 + 1] [i_3 - 2] [i_4 - 1]))));
                                arr_12 [0] [i_2] [i_2 - 1] [i_2 - 4] [i_2] = ((((((((arr_9 [i_0] [i_1 + 1] [i_0] [i_3 - 1] [0]) ? var_8 : 28366)) != (var_2 - var_5)))) | ((-((var_9 ? 3 : var_5))))));
                            }
                        }
                    }
                    var_11 |= ((1 | ((var_4 ? var_0 : ((var_1 + (arr_9 [i_0] [i_0] [i_1 + 1] [6] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_18 [i_6] [i_5] [i_2] [i_1] [i_0] = max((((593862338 >> (255 - 251)))), -19);
                                var_12 = (max(var_12, ((((var_10 >> var_6) ? var_10 : ((-(min(var_0, (arr_7 [i_0] [i_1] [i_2 - 3] [i_5] [i_6] [i_6]))))))))));
                                var_13 = ((var_7 ? (((var_5 % (((arr_16 [i_0]) ? 3566540301 : (arr_1 [i_1])))))) : (35228 - 17651599099593341771)));
                            }
                        }
                    }
                    arr_19 [0] [i_2] [i_2] [i_0] = arr_1 [i_1 - 1];
                }
            }
        }
        arr_20 [i_0] [i_0] = ((~18446744073709551615) == (arr_5 [i_0]));
        arr_21 [8] = (((((var_10 & (arr_1 [i_0])))) ? 1 : (max((min(2097151, var_5)), var_8))));
    }
    var_14 += var_7;
    var_15 = var_2;
    var_16 = ((((min((!var_0), var_9))) && (((var_8 << (((var_10 << var_1) - 92361163)))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                arr_27 [i_8] [i_8] [i_8] = (arr_24 [i_7] [i_7] [i_7]);
                arr_28 [i_7] [i_7] [i_7] &= (min((max((min(var_8, (arr_26 [i_8]))), var_8)), var_1));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_35 [i_8] = (+(min((arr_24 [i_9 + 1] [i_9 + 1] [i_9 - 1]), ((min(571, 28388))))));
                            arr_36 [i_8] [i_8] [10] [i_10 + 4] = 795144974116209830;
                            var_17 = (min(var_17, ((((arr_31 [1]) + (((max(var_6, 28376)))))))));
                            arr_37 [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] = ((((var_7 / (arr_25 [i_7] [i_7])))));
                            var_18 = (arr_26 [i_7]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
