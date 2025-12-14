/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] &= (max(((min((max(3148840122, var_11)), -1948336263))), (min((6898444574218191589 && var_5), (min(6268006237723474487, 46299))))));
                    var_15 = var_3;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [0] [i_2] [1] [i_3] = (min(((min(var_7, var_10))), -2610759825454917793));
                        var_16 = var_1;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_15 [i_2] = 8184;
                        arr_16 [i_2] [6] [7] [i_2] [2] [3] = (min(((65523 * (var_8 && var_14))), (min((910683643 && var_12), -var_10))));
                        var_17 = (max(var_17, var_9));
                        arr_17 [i_0] [6] [i_1] [i_2] [13] [i_2] = var_9;
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_20 [6] [2] [10] [i_2] [9] = (min((((8184 >= var_2) << (((min(var_2, 3384283652)) - 3384283642)))), (!-var_13)));
                        var_18 += -625636665;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_19 = (--625636665);

                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            arr_25 [i_0] [3] [10] [i_0] [13] [i_2] = (((-1 - var_9) << (((var_2 | 60) + 11744))));
                            arr_26 [13] [i_2] = 1033843062624817055;
                        }
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            var_20 = (var_9 >= 19237);
                            arr_29 [9] [i_2] = (var_2 && var_14);
                            arr_30 [i_2] [i_1] [i_2] = (!-66);
                        }
                        arr_31 [1] [9] [i_2] [1] [i_2] = -var_13;
                    }
                }
            }
        }
    }
    var_21 = (((min(-4662, (min(6898444574218191589, var_1)))) - var_9));
    var_22 = ((max(var_14, var_1)));

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_23 = 25135;
        arr_35 [i_9] = ((-((max(var_12, var_3)))));
        arr_36 [i_9] = 12672;
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        arr_39 [i_10] = 3082032390;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    var_24 = var_12;
                    var_25 = (min(((((17797 || 21169) | 19474))), var_1));
                    arr_46 [i_12] [i_10] [18] = ((!((max(873021866, var_7)))));
                    arr_47 [i_10] [i_11] [i_10] [i_12] = -var_6;
                }
            }
        }
        var_26 = (max(((max(var_14, var_8))), (min(17794, 8585740288))));
        var_27 ^= (min(18446744073701163008, var_10));

        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            arr_51 [i_10] [i_13] = (min(-65521, (min(26183, var_0))));
            var_28 = (min(18446744073709551591, 17928768997373338456));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_29 += (!1502836218);
            var_30 &= (-19234 == 18446744065123811324);
            arr_54 [i_14] [i_14] [i_14] |= (16840 >= 176);
            arr_55 [i_14] &= 31823;
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {

            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                var_31 = (((var_2 || 1099511627775) < -var_4));
                arr_60 [i_10] = (+-1);

                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    var_32 = -116;
                    arr_63 [i_10] [i_10] [i_16] [2] = (!var_5);
                }
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    var_33 = var_7;
                    arr_67 [i_15] [i_15] [i_16] [i_18] [2] [i_10] = 0;
                }
                arr_68 [i_10] [1] [i_10] [12] = -4658;
                var_34 += (~-1);
            }
            for (int i_19 = 1; i_19 < 21;i_19 += 1)
            {
                arr_72 [i_10] [i_10] [2] = -9223372036854775801;
                arr_73 [i_10] = 4016830685685698207;
                var_35 = var_7;
                arr_74 [2] [12] [i_10] = var_7;
            }
            for (int i_20 = 4; i_20 < 21;i_20 += 1)
            {
                var_36 = (var_4 - 8585740307);
                var_37 = var_12;
                var_38 = (max(var_38, (((-31007 < 238) == var_3))));
                arr_77 [18] [i_10] [20] = 4648;
                arr_78 [19] [3] [9] [i_10] = (!120);
            }
            arr_79 [i_10] = 60;
            var_39 = ((32767 == (var_3 - var_3)));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            arr_82 [i_10] [i_10] [11] = var_14;
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    {
                        var_40 += (4294967277 || 4);
                        var_41 = (min(var_41, (var_5 ^ var_1)));
                    }
                }
            }
            var_42 = var_14;
        }
    }
    #pragma endscop
}
