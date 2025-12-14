/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = 41;
    var_16 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (-59 * var_1);
                            var_18 &= ((-(arr_3 [i_0 + 1] [2])));
                            var_19 += (~10353461789172375833);
                            var_20 = (((65535 % var_8) ^ (arr_2 [i_0 - 1] [i_0 - 1])));

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                var_21 |= var_6;
                                var_22 = (1 ^ 1);
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_23 = 1;
                                var_24 = var_2;
                                var_25 *= ((~(((arr_15 [i_0 - 1] [0] [2] [i_0 + 1] [i_5] [2]) >> (15025 - 15000)))));
                                var_26 = (arr_14 [15] [i_1] [i_0] [15]);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_27 = (arr_3 [i_0 - 1] [i_0]);
                    var_28 = (((arr_10 [11] [i_1] [15] [i_6] [13] [i_0 - 1] [i_6]) ^ (arr_10 [12] [2] [i_1] [i_1] [i_1] [i_6] [i_6])));
                }

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_29 = (arr_12 [i_8 - 3] [i_9] [i_9] [i_9] [5]);
                                var_30 = arr_26 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 1] [i_8 - 1];
                                arr_29 [i_0] [i_8 - 3] = var_12;
                                var_31 = ((+(((arr_3 [8] [i_0]) ^ var_12))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_35 [12] [i_0] [i_7] [i_7] [i_0] [i_0 + 1] = arr_17 [i_0 - 1];
                                arr_36 [i_0 - 1] [i_0 + 1] [i_0] [14] [i_0 + 1] [i_0 + 1] [16] = ((!(((-(arr_8 [i_0]))))));
                                var_32 = (1 || -908173065);
                            }
                        }
                    }
                    arr_37 [i_0 + 1] [i_0] [0] [i_0 + 1] = (((1 != var_1) | (((arr_23 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]) / (arr_32 [i_1] [i_1] [i_1] [i_0 + 1] [i_1])))));
                    var_33 = (arr_33 [i_0] [i_0]);
                    var_34 = (min(var_34, 112));
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    var_35 = (max(var_35, (arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [0])));
                    var_36 = -1989440543;
                    var_37 = -100;
                }
                var_38 &= (((-127 - 1) ^ 2730611284498406356));
            }
        }
    }
    #pragma endscop
}
