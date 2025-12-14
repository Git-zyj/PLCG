/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] = (max((min(2713813037199932563, 487488401)), ((max(32913, 94464103)))));
                            var_11 = (max(var_11, 1));
                            arr_11 [12] [12] [i_0] [i_3] = (~0);
                            var_12 -= (!1152921504539738112);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_13 = ((!(var_0 || 94464100)));
                            var_14 = (((((max(1, -59)))) <= (min(94464110, 1090715534753792))));
                            arr_19 [i_0] [i_0] = ((-5590 ? -662868614446386470 : -1));
                            arr_20 [i_0] [i_5] [5] [i_4] [i_1] [i_0] = ((0 ? 0 : -662868614446386470));
                            var_15 = 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_26 [12] [12] [i_0] = -6739728985758507760;
                            arr_27 [i_1] [i_1] [8] [2] [i_7] &= (min(-25462, 85));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_16 = (min(var_16, 94464103));
                                arr_39 [i_0 - 1] [i_0] [i_0] [0] [i_0] = (min(-662868614446386470, -22116));
                                var_17 = (max(10, 0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_18 = (min(-32, 0));
                            arr_51 [i_13] [i_12] [i_12] = 132120576;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        {
                            var_19 = (min(var_19, var_6));
                            arr_58 [i_11] [i_12] [i_15] [10] [i_16] = (6917529027641081856 << 1);
                            var_20 = 54990;
                            arr_59 [i_15] [11] = (arr_55 [i_15]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 15;i_19 += 1)
                        {
                            {
                                arr_68 [i_19] [i_18 - 1] [i_18 - 1] [i_17] [i_12] [1] = var_3;
                                var_21 = (min(var_21, ((29556 ? 16591023884714932898 : 1589844871))));
                                var_22 -= -28237;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 15;i_22 += 1)
                        {
                            {
                                arr_76 [i_21] [i_12] [i_12] [i_12] [i_12] = ((-94464096 ? 0 : 22329));
                                arr_77 [i_11] [i_21] [i_20] [i_21] [1] [i_20] = (~1);
                                var_23 ^= (max(18507, 4245075817));
                                arr_78 [i_11] [i_12] [i_21] [i_21] [i_21] = (max(6853328069354079629, -662868614446386454));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_23 = 1; i_23 < 11;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 11;i_24 += 1)
                    {
                        for (int i_25 = 1; i_25 < 14;i_25 += 1)
                        {
                            {
                                var_24 = ((16591023884714932916 ? 95 : -7026));
                                var_25 = var_2;
                                var_26 = -80;
                                arr_87 [i_24 + 4] [i_11] [i_24] |= (min(1855720188994618699, 8143));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_26 = 0; i_26 < 24;i_26 += 1)
    {
        for (int i_27 = 1; i_27 < 21;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 24;i_28 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_29 = 1; i_29 < 21;i_29 += 1)
                    {
                        for (int i_30 = 3; i_30 < 22;i_30 += 1)
                        {
                            {
                                arr_102 [i_26] [i_27 + 2] [i_27 + 2] [i_29 - 1] [i_30] = (-13854 <= 35985);
                                var_27 = -0;
                                var_28 = (max(var_28, 0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_31 = 0; i_31 < 24;i_31 += 1)
                    {
                        for (int i_32 = 1; i_32 < 21;i_32 += 1)
                        {
                            {
                                var_29 = (max(var_29, 5593));
                                var_30 = (max(var_30, ((min(255, 32622)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
