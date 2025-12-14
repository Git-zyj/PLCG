/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_4] = var_14;
                                var_16 *= ((((-10037 ? (arr_4 [i_0]) : var_11)) << (16397204860977120219 - 16397204860977120214)));
                                var_17 -= var_7;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_18 = ((var_1 ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_21 [i_0] [i_5] = 1398770594;
                            var_19 = (-(arr_18 [18] [i_5]));
                            var_20 *= 0;
                            var_21 = ((1398770592 ? (arr_15 [i_6] [i_5]) : 121));
                            var_22 = (511 * var_4);
                        }
                        var_23 = var_12;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_24 = var_7;
                            var_25 = (max(var_25, var_14));
                        }

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_26 = 65535;
                            var_27 = ((var_3 ? var_2 : (~-26)));
                            var_28 = ((!(arr_5 [i_0] [6] [12] [i_0 - 1])));
                            arr_30 [17] [17] [17] [i_7] [4] = var_2;
                            arr_31 [i_7] [i_7] [19] [i_7] [i_7] = (18446744073709551100 ? (arr_18 [i_1] [i_7]) : (arr_18 [i_0 - 1] [i_1]));
                        }
                        var_29 += 6732847261171981844;
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_30 = ((~((-942567730 - (((min(1, -2048))))))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                {
                    var_31 -= (((arr_38 [i_11 + 2]) ? var_2 : (arr_38 [i_11 - 1])));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_32 = (((-127 - 1) ? ((-(max(var_0, (arr_36 [i_12]))))) : (((var_2 << (((-112 ^ 1) + 112)))))));
                                arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] = min((min(16235881096722681743, (44499 >= 4294967295))), (!var_5));
                                var_33 = max(0, 7655064375188719703);
                                arr_45 [i_10] [i_10] [1] [i_13] [i_13] [i_12] = (var_13 / ((((((8979895637255488855 ? 2047 : 1)) <= (~var_9))))));
                                var_34 = (((min(var_0, 88)) * (((((min(var_5, var_9))) ? (~var_9) : ((min(var_10, (arr_43 [i_14] [i_13] [i_12] [i_11] [i_10])))))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_15 = 4; i_15 < 22;i_15 += 1)
        {
            var_35 = (min(var_7, (arr_42 [i_15] [i_15] [i_15] [i_15] [3] [i_10] [i_10])));
            arr_49 [i_10] [i_10] = ((!((max(-var_7, var_5)))));
            var_36 = (var_4 != 13);
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            var_37 = (min(((min(4028381693, var_2))), var_5));
            var_38 = 27;
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            var_39 = (min(var_39, ((min(((min(var_6, 2355067602))), ((min(var_6, (arr_4 [i_19])))))))));
                            arr_61 [18] [i_19] [18] [i_20] = arr_22 [i_17] [i_19] [i_18] [i_17];
                            var_40 = (max(var_40, ((min(1, (((arr_1 [i_19]) ? (arr_1 [i_17]) : var_8)))))));
                        }
                    }
                }
                var_41 += ((-1073741824 ? var_7 : ((min(4274948391, (max(1, var_13)))))));
                var_42 = (arr_27 [i_17] [i_17] [i_17] [i_17] [i_17]);
            }
        }
    }
    #pragma endscop
}
