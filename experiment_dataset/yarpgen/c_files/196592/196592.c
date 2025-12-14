/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_0] = (!1150799508);
                        arr_12 [i_2] [i_1] [i_1] = ((!(1 <= -6149918151531563396)));
                        arr_13 [i_0] [i_2] [i_2] [i_0] = -29896;
                        arr_14 [i_3] [i_3] [i_2] [8] = (~23552);
                        var_16 += 4330080824398000188;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_17 = -68;
            var_18 = (max(var_18, (29887 > 57616)));
            var_19 = 51;
            var_20 = -29894;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_20 [i_0] [i_5] [i_5] = -0;
            var_21 = (!20598);
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_22 -= 523561996;

            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                arr_25 [i_7] [i_7] [9] [i_6] = (-1 > 820430072834562335);
                arr_26 [i_0] [i_0] [i_7] [4] = (43029 & 14084720784817141724);
                arr_27 [i_6] [i_6] [i_7] [6] = (11 * 0);
                var_23 = (min(var_23, 6149918151531563396));
                var_24 = (max(var_24, 29887));
            }
            arr_28 [i_0] [i_6] = (!13640);
            var_25 = (min(var_25, 4362023288892409879));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            arr_31 [9] [5] [i_0] = (((91 ^ -6338) | (~524287)));
            var_26 -= (-6149918151531563416 < -43);
            var_27 = (min(var_27, 1));
            arr_32 [i_0] = (-2147483647 - 1);
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        arr_36 [6] = 45419;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                {
                    arr_41 [19] [1] [i_11] |= -38880;
                    arr_42 [i_11] [1] = 1564571693;
                    var_28 += (!14733);
                }
            }
        }
        var_29 = (max(var_29, -4));
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] [i_12] = 29887;
        arr_46 [6] = 1;
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        arr_50 [i_13] = (-9223372036854775807 - 1);
        var_30 = (max(var_30, ((((!8191) * (!63565))))));

        /* vectorizable */
        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
        {
            arr_54 [i_14] [i_14] [i_14] = 565668361063510716;
            arr_55 [i_14] [i_14] [i_14] |= (1551669419396649355 / 1017680729);
            var_31 = (min(var_31, (!8571325594487886546)));
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            arr_66 [i_13] [i_15] [i_16] [i_17] [i_15] = (!-6746920302876863939);
                            arr_67 [i_13] [i_15] [i_18] = ((!((!(-2147483647 - 1)))));
                        }
                        for (int i_19 = 3; i_19 < 21;i_19 += 1)
                        {
                            var_32 = (!(!18446744073709551615));
                            var_33 = (max(var_33, 4362023288892409891));
                        }
                        for (int i_20 = 0; i_20 < 23;i_20 += 1)
                        {
                            var_34 ^= 9223372036854775795;
                            arr_72 [i_15] = 46023;
                            var_35 = (max(var_35, 0));
                            arr_73 [i_15] [i_15] [i_15] [13] [i_15] = (((!255) / 565659561));
                            arr_74 [i_13] [i_15] [i_16] [i_17] [i_13] |= (!9899);
                        }
                        arr_75 [i_13] [i_15] [i_16] [3] [i_15] = 763741303787784365;
                    }
                }
            }
            var_36 = (!-9899);
            arr_76 [i_15] [i_15] [i_15] = -5;
        }
        arr_77 [i_13] = (!6167356273610007550);
    }
    var_37 = 255;
    #pragma endscop
}
