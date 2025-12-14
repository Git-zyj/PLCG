/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = ((((var_6 ? (arr_0 [i_0]) : var_7)) - ((-(arr_0 [i_0])))));
        var_18 = max((((!(arr_0 [i_0])))), var_14);

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] = (min(-var_6, var_0));
            var_19 = (min(var_19, ((min(14106, (max((arr_5 [i_1] [i_1]), var_13)))))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_20 = (max((arr_3 [i_2 + 3]), (min(var_12, var_5))));

            for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
            {
                var_21 -= ((~(var_3 & var_5)));
                var_22 = (max(var_22, (((~(max((((!(arr_0 [i_2])))), (max(var_10, var_0)))))))));
            }
            for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_23 ^= var_8;
                            arr_25 [i_0] [i_5] = ((min(-57, (max(9223372036854775807, 9223372036854775807)))));
                            var_24 = (max(((max(1, (max((arr_12 [i_5] [i_2] [i_0]), var_0))))), (max(((var_12 ? (arr_18 [i_4] [i_2] [i_2]) : -32757)), ((max(var_12, var_7)))))));
                        }
                    }
                }

                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    arr_29 [i_2] [i_2] [i_4] [i_7] [i_4] = ((((min(((max(var_0, var_2))), (min(var_13, 390))))) ? var_10 : ((min((arr_9 [i_4] [i_0]), var_8)))));
                    var_25 = (max(var_25, (((var_8 ? ((~(arr_11 [i_0]))) : (arr_22 [i_2 - 2] [i_7 - 1]))))));
                    arr_30 [i_0] [i_4] [i_4] [i_2] = (((-((var_2 ? 63 : var_11)))));
                    arr_31 [i_2] [i_4] = ((~(((~51429) ? var_6 : ((225 ? 383 : 9223372036854775807))))));
                    arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -2026429276;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_26 ^= ((((((arr_34 [i_8] [i_4] [i_0]) ? var_8 : var_13))) ? (~var_13) : 57));
                    var_27 ^= ((var_12 ? var_9 : (arr_12 [i_0] [i_2] [i_4])));
                }

                /* vectorizable */
                for (int i_9 = 4; i_9 < 16;i_9 += 1)
                {
                    var_28 = (max(var_28, (((var_8 << (((var_3 + 49) - 8)))))));
                    var_29 += var_1;
                    var_30 *= (~var_2);
                }

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_31 = (min((min((min(var_7, (arr_22 [i_2] [i_0]))), var_10)), (min((arr_40 [i_2] [i_2] [i_2] [i_2]), ((max(var_4, var_6)))))));
                    var_32 = ((((max(var_16, -73))) >= (max((((5882048856242448507 ? 72 : 26705))), (arr_6 [i_2 + 2] [i_2 + 1])))));
                    arr_43 [i_0] = (min(((var_10 ? var_8 : (arr_13 [i_0] [i_2] [i_4] [i_2]))), (((!(!var_4))))));
                    var_33 = (min(var_33, (-2520931460 % var_10)));
                    arr_44 [i_2] &= (((!(arr_15 [i_0] [i_4 + 2] [i_2 - 2]))));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {

                    for (int i_12 = 2; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        var_34 = (((var_0 >= ((max(var_12, var_6))))));
                        var_35 = (((var_8 & 2026429276) & 73));
                        var_36 = (((var_13 == var_4) ? ((22623 ? 51 : -var_9)) : (arr_1 [i_12])));
                        arr_49 [i_12] [i_11] [i_4] [i_2] &= (max((min(((~(arr_10 [i_0] [i_2] [i_4]))), ((max(var_4, var_4))))), ((var_11 ? ((((arr_3 [i_4]) < 1774035835))) : ((var_12 ? var_8 : var_2))))));
                    }
                    for (int i_13 = 2; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        var_37 = ((!(((~(!2))))));
                        var_38 = (((max((min(var_11, var_10)), (var_2 >> var_2))) == (max((max((-2147483647 - 1), var_12)), ((max(-22971, var_2)))))));
                        var_39 -= ((1 ? var_0 : ((411 ? 12146 : -53))));
                    }
                    arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((-(var_6 & -44))), ((((var_0 ? var_14 : (arr_16 [i_4] [i_2])))))));
                }
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    arr_56 [i_0] [i_2] [i_4] [i_14] = ((~(((arr_1 [i_4 - 1]) ? (arr_38 [i_14] [i_4 + 2] [i_0]) : var_9))));
                    var_40 = (max(var_40, (((min((arr_36 [i_4 + 2] [i_2 - 2] [i_2] [i_2] [i_2]), (~var_4)))))));
                    var_41 = (max(var_41, (((((min((arr_1 [i_0]), var_12))) && ((max((min(-15231, var_5)), (var_8 / var_3)))))))));
                }
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_42 = (max(var_42, (~0)));
                var_43 *= (max(var_4, 560934068));
            }
        }
        for (int i_16 = 2; i_16 < 16;i_16 += 1) /* same iter space */
        {
            var_44 = ((((max(var_14, var_2))) >> (((~var_2) + 6))));
            var_45 = (!12379);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            var_46 |= ((((var_16 ? var_12 : var_2)) % ((134217727 ? (arr_42 [i_17] [i_17] [i_0] [i_17]) : var_4))));

            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 16;i_20 += 1)
                    {
                        {
                            var_47 = (min(var_47, 503542278));
                            var_48 = (((arr_3 [i_20 - 1]) ? ((-7378355011130959879 ? var_4 : (arr_21 [i_20] [i_19] [i_18] [i_17] [i_0]))) : ((var_16 ? var_4 : 21))));
                        }
                    }
                }
                arr_73 [i_17] [i_17] [i_18] = -1565236929;
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 15;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 19;i_22 += 1)
                    {
                        {
                            var_49 = ((((((arr_14 [i_22] [i_21] [i_18] [i_17]) ? var_13 : var_16))) ? var_15 : (((arr_70 [i_22] [i_17] [i_18] [i_17] [i_0]) ? var_11 : var_14))));
                            var_50 *= ((var_1 && (65535 != var_3)));
                        }
                    }
                }
            }
            for (int i_23 = 3; i_23 < 15;i_23 += 1) /* same iter space */
            {
                var_51 ^= ((((((arr_51 [i_17] [i_17] [i_17] [i_17]) ? 59575 : 1073741823))) ? var_15 : var_4));
                var_52 = (min(var_52, var_8));
            }
            for (int i_24 = 3; i_24 < 15;i_24 += 1) /* same iter space */
            {
                var_53 = 89948839;
                var_54 = (((arr_67 [i_24] [i_24] [i_0] [i_24]) ? (arr_67 [i_24] [i_24] [i_0] [i_24]) : (arr_42 [i_24] [i_24] [i_24 + 4] [i_24])));
            }
            var_55 = ((var_6 ? (((arr_41 [i_17] [i_17] [i_0] [i_0] [i_0]) & var_14)) : (2796086389 & 6935)));
            arr_83 [i_17] = (~var_9);
        }

        /* vectorizable */
        for (int i_25 = 0; i_25 < 19;i_25 += 1)
        {
            arr_86 [i_25] [i_25] [i_0] = var_15;
            arr_87 [i_0] = ((-2496333720808347574 != (((-(arr_81 [i_25] [i_25]))))));

            for (int i_26 = 2; i_26 < 18;i_26 += 1)
            {
                var_56 = (min(var_56, -4250590654));
                var_57 ^= (((arr_17 [i_26 + 1] [i_26] [i_26]) ^ (~var_4)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_27 = 0; i_27 < 18;i_27 += 1)
    {
        for (int i_28 = 0; i_28 < 18;i_28 += 1)
        {
            {
                arr_96 [i_28] [i_27] = (~16320);

                for (int i_29 = 0; i_29 < 18;i_29 += 1)
                {
                    var_58 = (max(var_58, (~var_13)));
                    var_59 = (((arr_38 [i_29] [i_29] [i_29]) != (((arr_75 [i_29] [i_27]) ? ((max(var_15, (arr_10 [i_29] [i_28] [i_27])))) : ((var_1 ? 9971 : var_15))))));
                }
                /* LoopNest 2 */
                for (int i_30 = 3; i_30 < 14;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 18;i_31 += 1)
                    {
                        {
                            arr_106 [i_30] |= 41290;
                            arr_107 [i_27] = (arr_71 [i_31] [i_30] [i_27] [i_27] [i_27] [i_27]);
                        }
                    }
                }
                var_60 = (max(var_60, (((var_16 ? ((-var_4 ? var_10 : (var_1 == var_7))) : ((235 ? 24230 : 7)))))));
            }
        }
    }
    #pragma endscop
}
