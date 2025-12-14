/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(-2348558577852712685, 24589);
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (((arr_1 [i_0]) - (max(var_15, (arr_1 [13])))));
        arr_2 [i_0] = (((((-(arr_1 [i_0])))) >= ((var_17 ? ((min((arr_1 [2]), (arr_0 [i_0])))) : (max(var_11, (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = ((((min((arr_3 [i_1]), (arr_1 [i_1])))) ? var_2 : ((min((arr_3 [i_1]), (arr_0 [i_1]))))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_22 &= (((arr_1 [i_2 + 1]) ? (arr_1 [i_2 - 1]) : ((5971993141866086699 ? 1405281451 : 1807654697))));
            var_23 = (!-23974275);
            var_24 = (((arr_8 [i_1] [i_2 - 1] [i_2]) | 2613132506));

            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                var_25 = (((arr_4 [i_1]) ? (!var_13) : var_17));

                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    arr_18 [i_4 - 1] [i_1] [i_1] [i_1] = (((arr_13 [i_1] [i_2] [i_2] [i_2 + 1]) / (arr_14 [i_2] [i_1] [i_1] [i_2 - 2] [i_4 - 1] [i_4 + 1])));
                    var_26 = (arr_1 [i_2]);
                    var_27 = (((!var_8) ? ((((arr_14 [i_2] [i_1] [i_2] [i_4] [6] [i_2 - 2]) >= var_3))) : (arr_11 [i_2 - 2] [1] [i_2 + 2] [i_3])));
                }
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_22 [i_1] [8] = (arr_7 [i_1] [i_5] [i_1]);
                var_28 -= (((((1681834789 ? (arr_4 [0]) : (arr_12 [1])))) ? (arr_13 [i_1] [i_2] [i_2 - 2] [i_2 + 1]) : 10350483495412900215));
                var_29 ^= (arr_20 [i_1] [i_1] [i_1]);
            }
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_30 &= -var_10;
                            arr_32 [i_1] [i_2] [i_6] [6] &= (((!var_15) ? (((arr_0 [i_1]) ? (arr_26 [i_1] [i_1] [7]) : 64243)) : (arr_29 [i_1] [i_1] [i_1] [i_1] [i_8 - 1])));
                        }
                    }
                }
                var_31 = (min(var_31, (~2044316146)));
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_10] = var_7;
                        var_32 = ((((((arr_8 [i_1] [i_2 - 1] [10]) ? var_8 : 62))) - ((var_3 ? 1596737572232462164 : 1))));
                        var_33 += (arr_28 [i_1] [i_2] [i_9] [i_10] [6] [i_9]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_34 = 17310199527220015096;
            arr_42 [i_1] [i_1] = var_0;

            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                var_35 = (((arr_37 [i_1] [i_1] [i_11] [i_1] [i_1]) ? (arr_37 [i_1] [i_11] [i_12] [i_1] [i_1]) : (arr_37 [8] [i_11] [i_11] [i_12] [i_12])));
                arr_45 [i_1] [i_12] [i_12] = 3097112384;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_36 = ((arr_29 [i_1] [i_1] [i_12] [i_13] [i_13]) << (((arr_29 [i_1] [1] [6] [i_13] [i_14 - 1]) - 389802747)));
                            var_37 = (max(var_37, ((((~(arr_19 [i_1] [i_11] [i_12] [i_1]))) - (arr_4 [i_14])))));
                        }
                    }
                }
                var_38 = ((arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) >> (var_0 - 2600509328));
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_39 -= (arr_43 [i_1] [i_15] [i_15] [i_15]);
            var_40 = (-22259 >= 10350483495412900215);
        }
        /* vectorizable */
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            arr_57 [i_1] [i_1] = (arr_4 [i_1]);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    {
                        arr_63 [i_1] [i_16] [i_16] [i_1] = (((arr_59 [i_16 - 2] [i_16 - 2] [i_16 - 1] [i_16 + 2]) ^ (arr_59 [i_16 + 2] [i_16 + 1] [i_16 - 2] [i_16 + 1])));
                        var_41 |= ((11077923634926920097 - (arr_12 [i_18])));
                        arr_64 [9] [i_1] [i_1] [i_1] = (13093 / 3903);
                        arr_65 [i_1] = var_18;
                    }
                }
            }
            var_42 *= (arr_10 [2]);
        }
    }
    for (int i_19 = 1; i_19 < 1;i_19 += 1)
    {
        var_43 = ((-(arr_67 [i_19 - 1] [i_19])));
        var_44 = ((2243505218 ? 238336965 : 16023552427074523765));
    }
    #pragma endscop
}
