/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 ? 0 : var_12));
    var_21 = var_19;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = ((var_10 ? var_15 : var_6));

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_23 = var_0;
                arr_8 [i_0] [10] [i_0] = var_17;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_24 = 18446744073709551610;
                var_25 = ((-3986063574524842418 ? var_14 : var_10));
            }
            arr_11 [4] [4] &= ((var_9 ? 5 : var_4));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_15 [i_0] = var_3;
            arr_16 [i_0] = var_11;
            var_26 -= (var_13 ? var_2 : var_6);
            var_27 = ((var_13 ? 1857668589 : ((var_14 ? -1857668580 : var_4))));
            arr_17 [i_0] = var_5;
        }

        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_28 = (max(7, 6));
            arr_20 [i_0] = 62618167;
            var_29 = (max(var_29, -1442031211));
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_30 *= max((min(3068153009, 3117109487)), ((max(var_0, var_17))));
            var_31 ^= var_5;
            var_32 *= ((max(1226814300, 38844)));

            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                var_33 -= var_18;
                arr_26 [i_0] [i_6 - 1] [i_0] [i_0] = ((var_14 ? var_7 : (min(var_11, 1857668589))));
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_9 = 4; i_9 < 10;i_9 += 1)
                {
                    arr_31 [i_0] [i_0] [i_8] [i_0] [i_0] = 20359;
                    var_34 = ((5 ? 3425206833 : 9274519949106294027));
                }

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_35 ^= ((((((((3117109487 ? -531339274 : 3068152979))) ? 18446744073709551610 : var_12))) ? var_12 : var_9));
                    arr_34 [i_0] [i_6 + 1] [i_0] [i_10] [i_10] = (((4159672752 ? 1686876300 : var_10)));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_36 *= 62618167;
                        var_37 += 21;
                        var_38 = var_7;
                        arr_40 [i_0] [i_0] [i_6] [i_0] [i_11] [i_12] = ((14336 ? 5 : var_14));
                    }
                    arr_41 [i_0] = (524287 ? 904317330 : 18446744073709551608);
                }
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    var_39 = var_0;
                    arr_44 [i_0] = (max(var_5, ((var_12 ? 45 : var_4))));
                }
                for (int i_14 = 1; i_14 < 8;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        var_40 -= var_7;
                        arr_51 [i_0] [i_0] [i_0] [i_0] [i_8] [2] [i_0] |= ((3915217142 ? (((max(0, 65530)))) : 1079301540));
                        var_41 = 6;
                        arr_52 [11] [i_8] [i_14] [i_0] = 6;
                    }
                    arr_53 [i_14] [i_6] [i_8] [2] [i_6 + 1] [i_0] = (max((((13604 ? 2490667490 : 26703))), ((var_18 ? 268435455 : 26697))));
                    arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] = -87;
                }
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
            {
                arr_59 [i_16] [i_0] [i_0] [i_0] = var_17;
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 9;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_42 = (max(((max(231, var_11))), (min(var_18, var_0))));
                            arr_66 [i_0] [i_6] [i_16] [7] [i_18] [i_0] = (min(((var_15 ? (((var_13 ? var_9 : 38839))) : (max(6063922881537713300, var_13)))), (((var_2 ? 7 : var_9)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
