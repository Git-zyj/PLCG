/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 = var_9;
        var_14 = var_0;
    }
    var_15 *= (min((max((max(var_2, var_2)), var_0)), var_1));

    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        arr_5 [11] [11] = var_2;
        var_16 = (min((max(var_2, var_8)), (min(var_1, (min(var_2, var_2))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2 - 1] = var_8;

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_17 &= var_10;
                            var_18 = var_4;
                            var_19 = var_10;
                        }
                    }
                }
                arr_22 [i_2 - 1] [i_3] [i_3] [i_4 + 1] = var_7;
            }
            for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_20 *= var_3;

                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_21 *= var_5;
                    arr_28 [i_2] [i_3] [i_3] [i_7] [i_8 - 2] [i_8] = var_4;
                    var_22 = var_3;
                }
                var_23 *= var_9;
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_24 = var_12;
                            arr_33 [i_2] [i_10] [i_7] [i_9] [i_7] = var_11;
                            var_25 = var_6;
                            arr_34 [i_2] [i_2] [i_9 + 2] [i_7 - 2] [i_10] = var_7;
                        }
                    }
                }
            }
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                var_26 = var_0;
                arr_38 [i_11 - 1] = var_11;
                var_27 = var_0;
            }
            for (int i_12 = 3; i_12 < 12;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_47 [i_12] [i_12] [i_12 + 4] [i_12] [i_12] [i_12 + 3] = var_1;
                            var_28 = var_4;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_29 = var_5;
                            var_30 -= var_5;
                            var_31 -= var_11;
                            arr_52 [i_16] [i_12] [i_12] [i_2 - 1] = var_6;
                        }
                    }
                }
                var_32 += var_1;
                var_33 = var_7;
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            arr_58 [i_12] [i_12] = var_0;
                            var_34 -= var_11;
                            var_35 *= var_3;
                            var_36 -= var_4;
                        }
                    }
                }
            }
            var_37 = var_9;
            var_38 += var_1;
        }
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            arr_62 [i_2] [i_2] [i_19] = var_5;
            var_39 = var_6;
            var_40 = var_3;
        }
        for (int i_20 = 1; i_20 < 14;i_20 += 1)
        {
            var_41 -= var_1;
            var_42 = var_4;
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 13;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    {
                        var_43 -= var_6;
                        var_44 += var_10;
                    }
                }
            }
        }
        for (int i_23 = 1; i_23 < 15;i_23 += 1)
        {
            var_45 = var_7;
            arr_73 [i_23] [i_23] = var_12;
        }
        var_46 += var_10;
    }
    #pragma endscop
}
