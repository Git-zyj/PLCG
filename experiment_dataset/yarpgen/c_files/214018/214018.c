/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 = (((arr_0 [i_0]) ? var_3 : var_8));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (max(var_6, (arr_2 [i_1] [i_1])));
        var_18 = ((!((min(((26 ? -1 : (arr_2 [i_1] [i_1]))), (((var_13 ? -1857269130 : (arr_0 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 = (((-241806563 ? (arr_5 [i_2]) : 1583455772603226059)));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_20 = (((arr_4 [i_2] [i_3]) ? (arr_6 [i_3] [i_3] [i_2]) : ((min((var_1 < 241806533), var_8)))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_21 ^= var_11;
                            var_22 = (max(var_22, (arr_2 [i_2] [8])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_23 = (max(var_23, (~241806563)));
                            var_24 = (max((min((arr_14 [i_7 + 1] [i_7 + 1] [i_4] [i_7 - 1] [i_7 - 1]), (arr_6 [i_8] [i_8] [i_8]))), var_6));
                            var_25 = (min((min((arr_13 [i_2] [i_4] [i_7 - 1] [i_7 - 1] [i_8] [i_8] [6]), ((var_2 ? var_10 : (arr_3 [i_2] [i_2]))))), ((min(235, 241806577)))));
                        }
                    }
                }
            }
            var_26 = (((arr_6 [i_3] [i_3] [i_3]) <= var_12));
            var_27 = var_2;
            var_28 = (max((~241806562), (max((arr_18 [i_2]), var_5))));
        }
        for (int i_9 = 4; i_9 < 11;i_9 += 1)
        {
            var_29 = (((((241806562 ? -635880301 : 4262916056))) - var_1));

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_30 = (((((var_8 ? 15377637732612680604 : var_1))) ? var_1 : (max((arr_10 [i_9 + 2] [10]), var_9))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_31 = (((!var_12) ? var_13 : ((var_0 * (arr_20 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_12] [i_9 - 2])))));
                            var_32 = (max(var_32, (~3846804417)));
                            var_33 = ((((max((min(var_7, (arr_1 [i_12]))), (arr_18 [i_9 - 2])))) ? (((min((arr_27 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9 - 3]), ((((arr_23 [i_2] [5] [i_10] [i_11]) != var_13))))))) : ((-((var_3 ? (arr_13 [i_10] [i_10] [8] [i_10] [i_10] [i_10] [i_10]) : var_12))))));
                            var_34 = (((((((arr_27 [12] [i_9 - 4] [10] [i_11]) ? (arr_27 [i_2] [i_10] [i_2] [i_11]) : var_7)) + 2147483647)) << (((((!(((var_7 ? (arr_23 [i_2] [i_9] [10] [i_9 - 1]) : 0)))))) - 1))));
                            var_35 = var_10;
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                var_36 = (((4262916071 ? (arr_0 [i_9 + 1]) : (arr_0 [i_9 - 2]))));
                var_37 = (((arr_30 [i_13] [i_13]) ^ (arr_27 [i_2] [i_9] [0] [i_9])));
            }
            var_38 = (((((-3184579586155895344 <= (arr_20 [i_9 + 1] [i_9 - 1] [i_9 + 2] [6] [i_9])))) * ((((arr_20 [i_9 - 4] [i_9] [i_9 - 1] [10] [i_9]) == (arr_20 [i_9 + 2] [i_9 + 2] [i_9 - 1] [10] [i_9]))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    {
                        var_39 = -2047;
                        var_40 |= 32051239;
                    }
                }
            }
        }
        var_41 &= (!4262916056);
        var_42 = ((((arr_5 [i_2]) ? (arr_5 [i_2]) : 2199944419023185101)));
        var_43 = (((min(((max((arr_32 [2] [10] [6] [i_2]), 116))), ((2166510472 ? 900727007 : 101212802))))) ? ((max(((3665710019 ? 1 : var_2)), var_6))) : (max(-83, 11083693262748883316)));
    }
    var_44 = (max((max((max(var_5, var_2)), var_7)), (max(var_11, (min(var_12, var_11))))));
    #pragma endscop
}
