/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 -= 4998018447934924016;
        arr_2 [i_0] &= ((1756428709 | ((-(!var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (((arr_1 [i_1]) < ((var_14 ? 27 : 27))));
        arr_6 [i_1] [6] &= 16;

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_21 -= 242;
                        var_22 = (min(var_22, (((15139 | (arr_8 [i_1] [i_2 - 2] [i_3]))))));
                    }
                }
            }
            var_23 = (min(var_23, 40));
        }
    }

    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] &= (arr_0 [i_5 + 1] [i_5 + 1]);
        var_24 = ((((((var_14 | (arr_19 [i_5])))) ? (((arr_19 [i_5]) ? 65535 : var_11)) : var_18)));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] &= arr_22 [i_6];
        var_25 = (max(var_25, (((((arr_21 [i_6] [4]) ? (arr_1 [i_6]) : 5050))))));
    }
    for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((min(31, 109)))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
            {
                arr_30 [i_9] &= 44;
                var_27 &= var_18;
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_28 = (min(var_28, (!14275245176373086633)));
                    var_29 -= (((arr_25 [i_7] [i_7 + 1]) ^ var_3));
                    arr_35 [i_11] [i_7 + 1] [i_7] &= (((-1 ? 241 : 9223372036854775807)));
                    var_30 = (max(var_30, (4294967295 + var_10)));
                    var_31 -= 183;
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_32 -= var_9;
                    var_33 = (min(var_33, (arr_18 [i_7])));

                    for (int i_13 = 2; i_13 < 12;i_13 += 1)
                    {
                        arr_41 [i_10] [i_10] &= ((((241 ? (arr_36 [1] [i_12] [2] [i_8]) : 656078857)) < (((~(arr_31 [11] [10]))))));
                        arr_42 [i_10] &= var_2;
                    }
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    arr_46 [i_10] &= (arr_26 [i_7 - 2]);
                    var_34 -= var_8;
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    arr_49 [i_7] [i_10] [i_10] [i_10] [0] [i_15] &= ((((((7099117187433243267 != (arr_47 [i_8] [i_15] [i_10] [i_8] [i_7]))))) & ((var_4 ? (arr_33 [i_15] [i_8]) : (arr_47 [i_7 + 1] [2] [i_7] [i_10] [2])))));
                    var_35 &= 29;
                }

                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    arr_52 [i_7] [i_7] [i_10] [i_8] [i_10] = (-9223372036854775807 - 1);
                    arr_53 [i_7 - 1] [i_8] [i_8] [i_8] = 1;
                    var_36 = (max(var_36, (arr_34 [i_7] [i_8] [i_7] [i_8] [10] [i_8])));
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    var_37 = (max(var_37, 5063));
                    var_38 -= (((((arr_39 [i_7] [i_8] [2] [i_7 - 2] [i_17]) % var_12)) * ((((arr_27 [i_7] [i_7]) > var_10)))));
                }
                for (int i_18 = 2; i_18 < 13;i_18 += 1)
                {

                    for (int i_19 = 2; i_19 < 13;i_19 += 1)
                    {
                        var_39 = (max(var_39, 65535));
                        var_40 -= (((((var_4 ? -5035 : (arr_21 [i_8] [i_8])))) ? ((((arr_36 [14] [i_8] [i_8] [i_8]) << (var_6 - 867218604043005414)))) : 7918408318921579610));
                        var_41 = (min(var_41, ((6494882307145894694 <= (arr_57 [i_7] [i_8] [i_8] [0] [i_8])))));
                        arr_61 [i_7 + 1] [i_19] [i_8] [i_10] [i_8] [i_8] [i_7 + 1] = 1967980148508381281;
                        var_42 = 1;
                    }
                    var_43 -= ((-2147483641 - ((-5875139036576909669 ? 1 : 8993336677026453520))));
                    var_44 = (min(var_44, var_9));
                    var_45 = (max(var_45, (-127 - 1)));
                }
            }
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                arr_65 [i_7] [i_8] [i_20] &= ((((((!(arr_36 [i_7] [i_8] [i_20] [i_20]))))) <= (arr_55 [i_7] [i_7])));
                var_46 &= ((var_8 ? var_8 : (arr_63 [0] [i_8] [i_20])));
                var_47 -= (arr_26 [i_7]);

                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    arr_69 [i_8] [i_8] [i_7] [6] &= (arr_67 [i_7] [i_8] [i_20]);
                    var_48 -= var_1;
                    var_49 = (min(var_49, ((((var_4 ^ 2711532271002554792) ? (arr_25 [i_7 - 2] [i_7]) : -101)))));
                    var_50 = (max(var_50, var_9));
                }
            }
            for (int i_22 = 2; i_22 < 11;i_22 += 1)
            {
                arr_72 [i_7 - 2] [i_7] [2] &= (((arr_25 [i_7 - 1] [i_7 - 1]) && (arr_59 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2] [i_7])));
                arr_73 [i_7] [i_22] [i_22] &= (arr_19 [i_22]);
                var_51 = (min(var_51, (arr_40 [i_8] [i_8] [i_22] [i_8] [i_8] [i_7] [i_7])));
            }
            var_52 = (max(var_52, ((((arr_45 [i_7] [i_7] [i_7]) == (arr_40 [i_7] [i_8] [i_8] [i_7] [i_8] [i_7 - 1] [i_8]))))));
            arr_74 [i_7 + 1] [6] [i_7] &= (arr_68 [i_8] [i_8] [i_7] [14] [1]);
        }
        var_53 = (min(var_53, var_13));
        var_54 -= (arr_64 [i_7]);
    }
    #pragma endscop
}
