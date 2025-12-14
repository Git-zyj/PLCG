/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 = var_1;
                                var_11 = ((-(((((arr_3 [i_4] [i_3] [1]) ? (arr_0 [i_1] [i_3]) : 32753)) / var_6))));
                                arr_13 [i_0 - 3] [i_1] [i_1] [i_3] [0] [i_1 - 1] = (max(((max((((arr_0 [i_4] [i_4]) / var_7)), ((min(var_2, 1338131242)))))), var_8));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_12 = (((max((min(var_2, (arr_18 [i_1]))), (arr_18 [i_1])))) ? ((min(((-1338131270 ? 1 : 1392320429)), ((max((arr_7 [i_5] [i_0] [i_0]), var_2)))))) : var_9);
                            var_13 = 3961131696;
                            arr_19 [8] [8] [8] [i_5] [6] &= ((((max((arr_16 [i_0 - 2] [i_0 + 2] [i_1 - 1] [i_1 + 1]), var_3))) ? (!var_1) : (arr_3 [i_0 + 2] [i_1 + 1] [5])));
                            var_14 &= ((var_8 & ((10 ? (~var_0) : (arr_10 [14] [i_6] [i_5] [i_0] [14])))));
                            arr_20 [i_0 + 2] [i_1] [i_5] [10] = (((arr_4 [7] [i_1] [i_0 + 1]) * ((max((arr_14 [i_1] [i_0] [7]), (arr_9 [i_0 - 3] [i_0] [i_0 - 3] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_15 = 9223372036854775806;
                            var_16 = 333835608;
                            var_17 = ((~(min((((var_9 ^ (arr_21 [i_7] [i_8])))), (min(var_9, var_5))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_42 [i_7] [i_13] [i_13] [i_12] [i_13] = (max((max((arr_32 [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_7 - 1]), var_5)), var_9));
                                arr_43 [i_11] [i_11] [i_11] [i_13] [i_13] = (min(127, (max(((((arr_34 [i_7]) ? 124 : (arr_29 [i_8] [i_8])))), ((var_4 ? var_5 : var_5))))));
                                arr_44 [i_7] [i_8] [i_7] [i_7] [i_13] [i_13] = (((((arr_26 [i_7] [i_8]) ? (arr_26 [i_11] [i_8]) : (arr_26 [i_7] [i_7]))) ^ 114));
                                var_18 = (~3961131687);
                                arr_45 [0] [7] [12] [i_12 - 1] [i_12 - 1] [i_13] [i_12 + 1] = (((var_1 / 4004400630) ? (min((min(var_6, 6338662233103944987)), (min(-7636554346446874653, 19170)))) : (~-3347)));
                            }
                        }
                    }
                }
                arr_46 [i_8] [i_7 - 1] = var_1;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_19 = (((~(((arr_29 [i_14] [i_14]) ? (arr_49 [i_15] [i_14] [i_8] [i_15]) : var_2)))));
                            var_20 = (min(var_20, ((max((!-var_5), ((2190393394960227636 ? (1 * -9223372036854775799) : (arr_25 [i_7]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
