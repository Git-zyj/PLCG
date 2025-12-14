/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max((((var_2 ? var_0 : var_6))), var_0));
        arr_3 [i_0] [i_0] = (min(var_4, (min((var_10 - var_3), var_4))));
        var_12 = (min((((arr_1 [i_0] [i_0]) <= var_2)), (var_3 < var_4)));
        arr_4 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? ((min(((min(var_6, (arr_0 [i_0] [i_0])))), (arr_1 [i_0] [i_0])))) : (((((var_11 + (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (18446744073709551615 + 1476866154895812138)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 ^= (((var_9 && var_2) ? (((arr_7 [i_1] [i_1]) ? var_10 : (((var_8 ? var_6 : var_6))))) : (arr_7 [i_1] [i_1])));
        var_14 = ((((min(var_10, var_7))) ? (((((max(var_2, var_1)) >= (((arr_5 [i_1] [i_1]) ? var_6 : var_7)))))) : (min(var_4, (var_11 < var_10)))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_4] [i_4] = (max(18446744073709551614, -28763));
                    var_15 = (max(var_15, 3603554043));
                    var_16 = ((((min((arr_5 [i_2] [i_3]), var_7)) - var_6)));
                }
            }
        }
        arr_17 [i_2] = var_10;
    }
    var_17 = ((((max((var_2 || var_1), var_8))) && var_1));

    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_18 *= ((var_5 * (var_5 - var_3)));
                    arr_25 [i_6] = ((max(var_6, (max(var_3, var_0)))));
                    var_19 = ((var_0 ? (!var_4) : ((min((arr_21 [i_5] [i_6]), (arr_21 [i_5 + 3] [i_6]))))));
                    var_20 = var_11;
                    var_21 *= (((((max(var_11, var_10)))) ? ((-(arr_5 [i_5 + 1] [i_7]))) : ((var_10 - (max(var_4, var_11))))));
                }
            }
        }
        var_22 = (var_7 + (arr_6 [i_5 + 2]));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_23 = (~var_0);

        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            arr_31 [i_8] [i_9] [i_8] = (var_9 * ((var_8 ? var_3 : ((((!(arr_24 [i_8]))))))));
            arr_32 [i_8] [i_9 + 1] = var_0;
            var_24 = (arr_8 [i_8] [i_9 - 1]);
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            var_25 = var_2;
            arr_36 [i_8] = max(-var_1, ((((arr_6 [i_8]) != (arr_13 [i_8])))));
            var_26 -= (min((((1 ? 28762 : 1))), (((var_4 ? var_6 : var_5)))));

            for (int i_11 = 2; i_11 < 11;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    var_27 = (((((((var_1 ? var_5 : var_3)) * (min(var_8, (arr_39 [i_12] [i_11 + 4] [i_10 + 4] [i_8])))))) ? var_1 : ((((!(!var_11)))))));

                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        var_28 = var_10;
                        var_29 ^= ((min(var_4, (arr_27 [i_10 - 1]))));
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    arr_46 [i_8] [i_10] [i_11] [i_11] = var_4;
                    arr_47 [i_8] [i_8] [i_10] [i_11] [i_14] [i_14] = ((var_9 ? var_10 : var_9));
                    var_30 = var_5;
                    var_31 = var_1;
                    arr_48 [i_8] [i_10] [i_10] [i_11] [i_14] [i_8] &= (arr_38 [i_8] [i_10 + 2] [i_11]);
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    arr_53 [i_11] [i_10] [i_11] [i_15] = var_5;
                    var_32 = (max(var_32, ((((((~((var_11 ? var_9 : var_0))))) - (min((((var_0 ? (arr_43 [i_15] [i_10] [i_8]) : var_6))), (max((arr_42 [i_8]), var_3)))))))));
                    var_33 = (arr_37 [i_8] [i_10 + 1] [i_11] [i_15]);
                    var_34 *= ((((min((arr_30 [i_11]), var_3))) ? var_11 : var_8));
                    arr_54 [i_8] [i_11] [i_11] [i_15] = (max(var_7, var_1));
                }
                for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                {
                    var_35 = (min((min(var_4, var_10)), var_2));
                    var_36 = ((((min((arr_14 [i_8]), (arr_14 [i_8])))) && ((min((arr_14 [i_8]), var_5)))));
                }

                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    arr_60 [i_8] [i_11] [i_11] [i_11] = (((max(var_3, (arr_8 [i_10 + 2] [i_17]))) | 1974313729));
                    var_37 *= (max(var_1, (min((arr_49 [i_8] [i_8] [i_10 + 4] [i_17]), (arr_49 [i_11] [i_8] [i_10 + 2] [i_17])))));
                    var_38 &= ((((((((((arr_5 [i_10] [i_11]) < var_1)))) >= ((var_1 ? (arr_57 [i_11] [i_8]) : var_9))))) < (!var_6)));

                    /* vectorizable */
                    for (int i_18 = 1; i_18 < 14;i_18 += 1)
                    {
                        var_39 = (max(var_39, (((!var_7) & ((18446744073709551607 ? 2 : 3758096384))))));
                        var_40 = var_1;
                        var_41 = (min(var_41, (var_3 * var_8)));
                        var_42 = var_11;
                        arr_63 [i_8] [i_11] [i_10 - 1] [i_10 + 1] [i_11] [i_17] [i_18] = ((var_2 >= (arr_15 [i_8] [i_11 + 2])));
                    }
                    for (int i_19 = 1; i_19 < 14;i_19 += 1)
                    {
                        var_43 = var_9;
                        var_44 = ((((((((var_2 ? (arr_52 [i_8] [i_10] [i_11] [i_19]) : (arr_64 [i_11])))) ? (arr_23 [i_10 - 1] [i_11]) : var_8))) ? (max(var_5, var_6)) : ((var_10 ? var_2 : (519181402675887088 * 1)))));
                    }
                }
                arr_66 [i_11 - 2] [i_11] [i_11] = (min(var_8, ((min(1, -28763)))));
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 11;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_45 = (min((max(8570658755883575786, 27210)), 24653));
                            arr_71 [i_8] [i_10 - 1] [i_11 - 2] [i_20 + 3] [i_11] = (~(max(((var_3 ? var_2 : var_9)), (arr_27 [i_20 - 1]))));
                            var_46 = ((1878274274 ? ((var_4 ? (arr_56 [i_21] [i_8] [i_8] [i_8]) : (max(var_3, var_3)))) : (4369714725943373761 - 1554823496)));
                        }
                    }
                }
                var_47 = (max(var_47, (((var_3 ? (((((arr_67 [i_11] [i_10] [i_10 + 2] [i_8]) ? var_3 : (arr_15 [i_8] [i_10 + 2]))) + 17927562671033664527)) : (arr_68 [i_8] [i_8] [i_8] [i_10 + 4] [i_11] [i_11]))))));
            }
            arr_72 [i_8] [i_10 + 4] [i_10] = min(1, 1);
        }
        arr_73 [i_8] = ((var_11 ? (((!(arr_27 [i_8])))) : ((((arr_27 [i_8]) && var_7)))));
    }
    var_48 *= max((max(var_11, (((24089 ? 1 : 22))))), (max(((var_0 ? var_6 : var_5)), (var_0 || var_4))));
    #pragma endscop
}
