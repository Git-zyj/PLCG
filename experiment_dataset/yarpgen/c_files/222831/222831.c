/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] = (((((arr_2 [i_0]) ? (arr_6 [i_1] [i_2] [i_2]) : ((min(1, (arr_5 [i_2])))))) ^ (arr_3 [i_0] [i_0])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_14 [i_1] [i_1] [i_3] = (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]);
                                arr_15 [13] [i_1] [i_2] [i_3 - 3] [i_4] = (arr_9 [i_3] [i_3] [i_3 + 2] [i_3]);
                                var_14 = 1;
                                var_15 = (min(var_15, var_11));
                            }
                            for (int i_5 = 1; i_5 < 13;i_5 += 1)
                            {
                                arr_18 [1] [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = 1;
                                var_16 = (min(var_16, (((((min(((1 ? 1 : -638668561375937801)), (1 || 281474976710652)))) ? 2216615441596416 : 4703871231488164966)))));
                                var_17 = (arr_13 [i_2] [i_2]);
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_18 = (min(var_18, (((((min((min(2216615441596438, (arr_3 [i_0] [i_1]))), (~1859438143)))) ? (arr_12 [i_0] [4] [i_2] [i_2] [i_2]) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                var_19 = (min(12389917857393002651, 1757592436));
                                arr_22 [i_0] [i_1] [i_1] [i_3] [8] = ((var_4 ? 1 : (arr_8 [i_1] [i_1])));
                            }
                            var_20 = (max(var_20, (((12288 ? -12275 : -222378274)))));
                        }
                    }
                }
                var_21 = (max(var_21, (((18444527458267955203 ? 536870912 : 45729)))));
                arr_23 [i_0] [i_0] [i_1] = 1;
                arr_24 [i_1] [i_1] [i_1] = (8372224 == 1);

                /* vectorizable */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    arr_28 [i_0] [i_0] [i_1] [i_7] = ((~((~(arr_8 [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_22 = (!1658406467);
                                arr_33 [i_8] [i_8] [i_8] [i_1] [i_8] = ((-(arr_7 [i_1 + 3] [i_1])));
                                arr_34 [i_0] [i_1] [i_7] [i_8] [i_1] = (((var_2 ? -20689 : (arr_7 [i_0] [i_1]))));
                                var_23 = arr_7 [i_1] [i_1];
                                arr_35 [i_0] [i_0] [i_1] [i_1] [i_7] [i_1] [i_1] = ((991732786244293143 ? (((arr_30 [i_0]) ? 4042210287398476789 : (arr_5 [i_1]))) : 128));
                            }
                        }
                    }
                    var_24 = (((1 ? 12288 : 65532)));
                    var_25 += var_5;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_26 = (((arr_7 [i_0] [i_1]) - -20689));
                    var_27 = ((((min(575334852396580864, 1))) ? ((min(1105012151, 0))) : (((arr_9 [i_1 + 3] [i_1] [i_1] [i_1 + 3]) ^ (arr_9 [i_1 + 3] [2] [i_1 + 1] [i_1 + 1])))));
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    arr_40 [i_0] [i_0] [i_11] |= (min(var_2, ((!(arr_26 [4] [i_0])))));
                    arr_41 [2] [i_1] [i_11] = (min((~4609434218613702656), 12274));
                    var_28 = (arr_26 [i_1] [i_1]);
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    arr_45 [i_0] [i_0] [i_1] [i_0] = var_5;
                    arr_46 [i_1] [2] [4] [i_12] = 4503599623176192;
                }
            }
        }
    }
    var_29 &= ((var_11 ? 1680 : (min(((4258682876 ? 12 : 15)), -31645))));
    #pragma endscop
}
