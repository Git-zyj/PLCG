/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 = var_10;
        var_13 = ((-(max(0, 7528013319075129074))));
        arr_2 [i_0] = -var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            var_14 = var_0;
            arr_7 [i_2] = var_0;
            var_15 = (min(var_15, -55));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            var_16 = ((var_4 ? var_2 : var_10));

            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                arr_14 [i_1] [i_1] [i_3] = ((27198 ? 2416936119 : var_8));
                arr_15 [i_1] [i_3] [i_3] [i_3] = var_9;
                var_17 = 11811775051882045610;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
            {
                var_18 = var_5;
                arr_18 [i_3] [i_3] = ((1 ? var_6 : 14603490822918926780));
            }

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_21 [i_3] = ((var_4 ? var_9 : var_8));

                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    arr_25 [i_3] [i_3] [i_6] [i_6] [i_7] [i_7] = ((3877563494469642436 ? var_10 : var_3));

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_29 [i_3] [i_7] [i_6] [i_3] = -var_3;
                        var_19 ^= var_5;
                        arr_30 [18] [18] [20] [i_3] [i_3] [i_3] [i_3] = 317473880;
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_33 [i_3] [i_6] = (!101);
                    var_20 = -var_1;
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    arr_36 [i_6] [i_3] [i_3] = 1;
                    arr_37 [19] [i_3] [i_6] [19] = 0;

                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        var_21 -= (!var_2);
                        var_22 = (min(var_22, 10));
                        var_23 = var_9;
                    }
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        var_24 = 1388525197;
                        arr_45 [i_3] [1] [i_3] [i_3] = -184;
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_48 [i_10] [i_3] [i_1] [i_3] [i_1] = (62 ? 1 : var_5);
                        var_25 = -var_5;
                    }
                    arr_49 [i_3] [i_3] [i_10] = -var_7;
                }
                var_26 = ((958605183638882674 ? var_6 : 16414121630654018196));
                arr_50 [i_3] [i_3] [i_3] = -var_4;
            }
        }
        var_27 = (min(var_27, (!16383)));
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    {
                        var_28 *= 4537;

                        for (int i_18 = 1; i_18 < 1;i_18 += 1)
                        {
                            var_29 = (~var_4);
                            var_30 = var_7;
                            var_31 = ((-122448656439354819 ? (!var_9) : 0));
                            var_32 = 1;
                        }
                        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                        {
                            arr_66 [14] [17] [14] [3] [5] = var_1;
                            var_33 -= (!49);
                        }
                        for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
                        {
                            var_34 = (max(var_34, (((-83 ? var_5 : 1)))));
                            var_35 = (max(var_35, var_9));
                            var_36 = (max(var_36, (((var_7 ? 2147483647 : 402279210008735467)))));
                            arr_70 [i_20] [i_20] [0] [9] [i_15] [i_14] = var_2;
                        }
                        for (int i_21 = 0; i_21 < 20;i_21 += 1) /* same iter space */
                        {
                            var_37 += 17341497121682727366;
                            var_38 = 13570451286409271436;
                        }
                    }
                }
            }
        }
        var_39 = 0;
    }
    for (int i_22 = 0; i_22 < 25;i_22 += 1)
    {
        arr_75 [i_22] = var_4;
        var_40 -= (((var_9 ? -1298096054 : 6)));
        arr_76 [i_22] [i_22] = 1369416563;
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 15;i_23 += 1)
    {
        var_41 = (!var_0);
        arr_79 [i_23] [i_23] = 0;
    }
    #pragma endscop
}
