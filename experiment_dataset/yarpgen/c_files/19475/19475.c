/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_15 = (min(var_15, (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_2] [i_2] [i_0] = 2648713708;

                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_16 = (max(var_16, 1));
                        var_17 ^= (max((((!var_12) != (!var_11))), (min(1, 0))));
                        arr_16 [i_0] [i_0] [i_2] [8] [i_3] = ((((var_6 > (arr_8 [i_0] [i_2] [i_2]))) ? (((!83) ? (arr_14 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3]) : var_10)) : ((((!1) ? (arr_5 [i_3] [i_3 - 3]) : (arr_10 [i_0] [i_3 + 1] [i_2] [i_3] [i_2]))))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_18 = 110;
                        var_19 = ((((((-9223372036854775807 - 1) ? 9223372036854775807 : (((631428149343210568 ? var_4 : (arr_6 [i_0] [i_0]))))))) ? (min(-var_8, ((var_1 ? var_7 : var_8)))) : ((var_6 ? var_5 : var_4))));
                        var_20 = (max(-9223372036854775796, 9223372036854775781));
                        arr_19 [i_0] [i_1] [i_2] = (((((((min(127, var_9))) ? ((min(1121660190, 42))) : (max(var_3, var_10))))) || var_9));
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_2] [i_1] [i_2] [i_2] [i_3] [i_6] = (min((~var_0), (arr_22 [i_2] [i_2])));
                        var_21 += ((max(((max((arr_15 [i_0]), -3659376324747345376))), (min(var_5, 3659376324747345380)))));
                    }
                    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_22 *= ((+(((((min((arr_6 [i_0] [i_1]), 32752))) || 250)))));
                        var_23 = (((((!(arr_12 [i_7] [i_7] [i_7] [i_7] [i_7 - 2])))) * (((!(!var_12))))));
                        var_24 = 88;
                    }
                    var_25 *= ((((((var_9 - var_5) == ((max(230, 276330494)))))) * (!18446744073709551610)));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        var_26 += (min(((min((arr_18 [i_0] [i_1] [i_1] [i_0]), var_11))), ((min(var_6, (!-1791141446))))));
                        arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = 92;
                        arr_32 [i_0] [i_9] [i_2] [i_2] [i_9 + 3] = -var_10;
                        var_27 = (((((((226 ? var_11 : (arr_27 [i_9] [i_2] [i_1] [i_0])))) & var_2)) * (((min(var_3, (arr_8 [i_1] [i_2] [i_9 + 2])))))));
                        var_28 = (((((var_8 >= (arr_28 [i_9] [i_9] [i_9] [i_9 + 1] [i_2] [i_9 + 1])))) * var_9));
                    }
                    arr_33 [i_0] [i_1] [i_2] [i_8] [i_8] = var_0;
                    var_29 ^= (max((((!(arr_18 [i_0] [i_1] [i_2] [i_0])))), (max(var_12, 1))));
                }
            }
            arr_34 [i_0] [i_0] = 3;
            var_30 = (max(((-1 ? 3069985522220023673 : (min(var_5, -1702731745)))), var_0));
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_11] = 0;
                        var_31 = 6057;

                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_32 = (min(var_32, (((1702731765 ? (((arr_6 [i_0] [i_0]) ? (1702731765 || var_10) : 2)) : 4)))));
                            var_33 = (min(var_33, (((((max(3562368827, (arr_7 [i_0] [i_10] [i_10])))) != (var_6 * var_10))))));
                            arr_49 [i_12] [i_12] [i_11] [i_12] [i_12] = var_12;
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_34 *= ((17 ? 1735825035232386686 : (((arr_38 [0] [2] [i_11]) ? 18446744073709551615 : var_7))));
                            arr_54 [i_11] [1] [i_11] [i_11] [1] [i_14] = (arr_48 [i_0] [i_11]);
                        }
                    }
                }
            }
            var_35 = ((((((400186141 <= 19636) ? ((((arr_3 [i_0] [i_10] [i_0]) && 1))) : (var_0 << 1)))) != (arr_47 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0])));
            var_36 *= ((-(max((min(1, var_2)), (((!(arr_0 [i_0]))))))));
        }
        var_37 = (max(var_37, (30833 + var_12)));
    }
    var_38 = (min(var_38, 60));
    #pragma endscop
}
