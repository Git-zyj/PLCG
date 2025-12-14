/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));
    var_13 |= (!var_7);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!var_0);
        var_14 += (!var_2);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [10] [i_3] [i_2] = -var_6;
                        var_15 = (min(var_15, var_1));
                    }
                }
            }
        }
        var_16 = -var_7;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_14 [i_4] = var_1;
        var_17 = (~var_8);

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_18 = (!var_7);
            var_19 -= -var_7;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_21 [i_4] &= (~(~-730941395));
            arr_22 [i_6] [3] = (!var_4);
            arr_23 [i_4] [i_4] [i_4] = (~-var_7);
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_33 [i_9] [i_7] [i_7] [i_4] = var_3;

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_36 [i_4] [7] [i_4] [11] [i_4] = (~var_0);
                            arr_37 [i_10] [i_8] [i_4] [i_8 + 1] [i_10] = var_3;
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_40 [i_9] [i_11] = (~573);
                            arr_41 [i_4] [i_11] [i_4] [i_4] [i_4] [i_4] = var_10;
                            var_20 = (!var_4);
                            var_21 = (!var_10);
                            var_22 = (!-var_0);
                        }
                        arr_42 [i_4] [i_4] [i_4] [i_4] = (~-var_8);
                        arr_43 [i_4] [i_4] [i_4] [i_4] = var_9;
                        arr_44 [i_4] [i_7] [i_8] [12] = var_7;
                    }
                }
            }
        }
        var_23 = var_2;
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 1; i_14 < 17;i_14 += 1)
            {
                arr_53 [i_14] [i_14] = (!var_5);
                var_24 = var_5;
            }
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        {
                            arr_61 [i_12] [i_15] [i_12] = -var_3;
                            arr_62 [i_12] [i_13] [i_15] [i_16] [i_12] = -var_6;
                            var_25 = (~-var_1);
                        }
                    }
                }
            }
            arr_63 [i_13] = var_2;
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            arr_74 [i_20] [i_20] [i_12] [i_18] [i_13] [i_12] &= ((~(~var_6)));
                            var_26 += var_11;
                            var_27 = (max(var_27, (!-var_10)));
                            var_28 = var_5;
                            arr_75 [i_13] [i_13] [i_13] [i_13] |= 572;
                        }
                    }
                }
            }
            arr_76 [i_12] [i_12] [i_12] = ((-(~var_9)));
        }
        for (int i_21 = 0; i_21 < 20;i_21 += 1)
        {
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 20;i_24 += 1)
                    {
                        {
                            arr_89 [6] [i_21] [i_22] [i_23] [i_23] [i_24] |= var_6;
                            arr_90 [i_24] [i_24] [i_21] [i_22] [i_21] [i_21] [1] = -var_8;
                        }
                    }
                }
            }
            arr_91 [i_12] [i_12] [i_12] = var_5;

            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {

                for (int i_26 = 2; i_26 < 19;i_26 += 1)
                {
                    arr_99 [i_12] [i_21] [10] [i_26] [i_26] [i_26] |= 548;
                    arr_100 [i_12] = -var_2;
                }

                /* vectorizable */
                for (int i_27 = 2; i_27 < 17;i_27 += 1)
                {
                    arr_103 [i_27] [i_25] [i_21] [i_12] &= -6123460605082181785;
                    arr_104 [i_12] [i_21] [i_21] [i_25] [i_25] [i_27] = -var_2;
                }
            }
        }
        for (int i_28 = 1; i_28 < 18;i_28 += 1)
        {

            for (int i_29 = 1; i_29 < 18;i_29 += 1)
            {

                for (int i_30 = 1; i_30 < 19;i_30 += 1)
                {
                    arr_113 [i_30 + 1] [i_29] [i_28] [i_29] [i_12] = var_8;
                    var_29 = (max(var_29, var_5));
                }
                arr_114 [i_29] [i_29] = (!var_7);
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 20;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 20;i_32 += 1)
                    {
                        {
                            var_30 ^= -var_8;
                            arr_120 [i_29] [i_28] [19] [i_28 + 1] [i_29] = var_11;
                        }
                    }
                }
                arr_121 [i_29] [i_29] = var_4;
            }

            for (int i_33 = 4; i_33 < 19;i_33 += 1)
            {
                var_31 = (min(var_31, (~var_6)));
                var_32 = (min(var_32, (~var_2)));
            }
            arr_124 [i_12] = var_5;
        }

        for (int i_34 = 4; i_34 < 19;i_34 += 1)
        {
            /* LoopNest 3 */
            for (int i_35 = 0; i_35 < 20;i_35 += 1)
            {
                for (int i_36 = 2; i_36 < 19;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 20;i_37 += 1)
                    {
                        {
                            var_33 = var_0;
                            var_34 = var_11;
                            var_35 = (~var_2);
                        }
                    }
                }
            }
            arr_134 [i_34 - 3] [0] [i_34 - 3] = -var_8;
        }
    }
    var_36 = -var_9;
    var_37 = (~var_7);
    #pragma endscop
}
