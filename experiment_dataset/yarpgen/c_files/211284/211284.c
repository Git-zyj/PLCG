/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((~(max(((max(var_12, var_11))), (var_0 & var_10)))));
        arr_4 [i_0] = ((max(15607, var_12)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [12] = (1152851135862669312 < var_1);
        var_17 = (~var_5);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [i_1] [i_4] [i_2] [i_2] [i_2] [i_1] = (~-1156661934);
                            var_18 ^= -8624854244930713568;
                            var_19 = var_3;
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_20 = 255;
                            var_21 = (32767 && var_10);
                            arr_21 [i_2] [i_2] [i_2] [i_4] [i_1] = (var_12 + 154);
                            var_22 = 272980266;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_23 = (min(var_23, 0));
                            var_24 += 49152;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_28 [i_2] [6] [i_3] [i_4] [i_8] [i_3] = (~19);
                            arr_29 [i_2] [i_2] [i_3] [i_4] [i_2] = 714762147;
                            arr_30 [i_1] [1] [i_2] [5] [i_8] = (var_10 - var_12);
                            var_25 = (min(var_25, 0));
                            var_26 = (max(var_26, var_10));
                        }

                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            arr_33 [i_9] [i_2] [i_2] [i_2] [i_1] = (-0 + 4542842507702871788);
                            arr_34 [i_1] [i_2] [i_2] = var_1;
                        }
                        var_27 = (4294967286 < var_2);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        var_28 = (((((((137 && 1) || var_13)))) < (4294967277 & 2147483647)));
                        arr_45 [i_10] [i_13] [i_10] [i_10] = (max(((((0 + 762576833205228607) < var_0))), -1));
                    }
                }
            }

            /* vectorizable */
            for (int i_14 = 2; i_14 < 15;i_14 += 1)
            {
                arr_48 [i_10] [i_11] [1] [i_11] = 31114;
                arr_49 [i_10] = (((~78) & 599659765));
                arr_50 [i_10] [i_11 - 1] [i_10] = (!var_0);
                var_29 = (!var_4);
            }
        }
        var_30 = var_0;
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_31 = (min(var_31, ((min(-1851080472, 36300549)))));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            var_32 = (var_0 + 714762149);
            var_33 -= (((0 | var_13) >> 9));
        }
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            arr_57 [i_15] = (max(3917053488, -122));
            arr_58 [i_15] [1] = ((~((max(28953, 247)))));
            var_34 = -409349491;
            var_35 = (max(var_35, (((min(-30559, 81))))));
        }
    }
    #pragma endscop
}
