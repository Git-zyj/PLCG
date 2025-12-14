/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_10;
    var_17 = (min(var_6, ((((min(var_0, 0))) ? (var_12 < var_3) : ((1 ? 247400696 : 3771276855166842698))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (((((!((min(var_12, -3771276855166842698)))))) + ((((arr_1 [i_0]) < ((min(3771276855166842702, 1))))))));
        arr_2 [i_0] |= (((((max((arr_0 [i_0]), (arr_0 [i_0]))))) ? (arr_0 [i_0]) : 1));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_19 = (min(var_19, (((-(!0))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_20 = 27108;
                            var_21 = 23555798;
                            var_22 = (~1);
                        }
                    }
                }
            }
            arr_15 [i_1] = var_3;
        }
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        var_23 = (max((max((arr_19 [i_5] [i_5]), -3766485311774396152)), (max(-var_1, (-3771276855166842699 < 54405)))));
        arr_20 [i_5] = (!0);

        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            arr_25 [i_5] [i_5] = (((arr_3 [i_6]) == (((arr_14 [6] [14] [i_5 - 2] [i_5 + 1]) % 1))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 14;i_8 += 1)
                {
                    {
                        var_24 -= var_14;
                        arr_30 [i_5] [i_5] [i_7] [i_5] = (((((((-(arr_22 [13] [4] [13]))) < (arr_28 [i_5 - 2] [i_5 - 1] [i_5] [i_8])))) < var_11));
                        arr_31 [i_5 - 2] [i_8 - 3] [i_5 - 2] [i_8 + 1] [i_5] = (max(24062, (max((arr_19 [i_5 + 2] [i_6]), 3779993204283896453))));
                        var_25 = (((((-((min(var_3, 0)))))) ? (((109 << ((((((-(arr_0 [i_5]))) + 1873951148)) - 25))))) : (max(var_6, ((max(var_15, var_11)))))));
                    }
                }
            }
            var_26 -= 9133245598205201232;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_27 = (arr_4 [i_5 - 2] [i_9] [10]);
            arr_34 [i_5] [i_9] = var_13;
        }
        var_28 = (-19 == -1916130648);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_37 [i_10] = (arr_24 [i_10]);
        var_29 = (min(var_29, (((-(!11138))))));

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_30 = (min(var_30, ((((!-5942968603031209571) % (arr_36 [i_10]))))));
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_31 = (~1916130647);
                            arr_51 [i_10] [i_10] [i_10] [i_13] [i_14] = 19;
                        }
                    }
                }
            }
        }
        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_32 = (((arr_54 [i_15 - 1] [i_15 - 1] [i_18 + 3]) ? (arr_54 [4] [i_15 + 2] [i_16]) : 24062));
                            var_33 = (arr_44 [i_10] [i_15 - 1] [i_16] [i_17]);
                        }
                    }
                }
            }

            for (int i_19 = 1; i_19 < 13;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 13;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        {
                            var_34 = ((-39 ? ((83 ? (arr_64 [i_10] [i_10] [i_20] [i_10]) : 1)) : ((-19 ? 3 : var_4))));
                            var_35 = (((~var_1) + ((((var_12 < (arr_24 [i_10])))))));
                            arr_70 [1] [i_20 - 2] [i_10] [i_15 + 2] [i_10] = var_11;
                        }
                    }
                }
                var_36 = (max(var_36, (arr_23 [i_10] [i_19 - 1])));
                var_37 ^= ((!(var_6 | -6771248607339013420)));
            }
            var_38 = ((112 * (((arr_69 [i_10] [i_10] [i_10] [i_10] [i_10]) << (var_13 - 261718484)))));
        }
    }
    var_39 = ((var_15 ? ((((var_2 <= var_2) ? var_14 : -23555815))) : (((min(2926019191057758969, 30)) << (var_8 == var_10)))));
    #pragma endscop
}
