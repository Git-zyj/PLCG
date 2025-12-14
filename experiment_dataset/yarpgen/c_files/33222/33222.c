/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (max(var_17, ((((~-27424) ^ (((-27424 + 2147483647) >> (arr_1 [i_0]))))))));
        var_18 -= ((var_9 ? (arr_1 [i_0]) : -32673));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = (min(var_19, ((((!((max(1, 127)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_20 *= ((~var_9) ? ((((arr_9 [i_1] [i_2] [i_2] [i_3] [i_4]) - (var_5 != 27410)))) : (var_1 - 1));
                        var_21 |= (max((max(((1 ? (arr_9 [i_1] [i_2] [i_1] [i_1] [11]) : 4442)), 15)), (((1 | -27408) ^ (~-27408)))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_22 *= 1;
                            var_23 &= (((((!(arr_15 [i_1] [i_5] [i_1] [i_1] [i_1]))))) > (min(8284259034800634217, -27408)));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_20 [i_3] [i_3] = 1995937845;
                            var_24 ^= ((((var_6 ^ (!0))) - ((((min(1, 0)))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_26 [i_8] [i_7] [16] [i_2] [i_1] &= 11392026998914440068;
                            var_25 = (((arr_13 [i_1] [i_3]) && (((max(3994, -1)) != (arr_9 [i_1] [i_2] [i_3] [i_7] [i_8])))));
                            var_26 |= (-((var_10 / ((-(arr_6 [i_1] [i_1]))))));
                        }
                        var_27 *= ((+((min((arr_5 [i_2]), 30464)))));
                        var_28 = (var_10 != 1);
                        var_29 = ((-((((var_7 == var_6) && (63 - 1))))));
                    }
                    var_30 = (min(-75, var_12));
                    arr_27 [i_3] = ((!(((((arr_16 [i_1] [i_2] [i_1] [i_1]) + (arr_11 [i_1] [i_1]))) >= ((-2147483639 ? 1 : -1149598662))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_31 = (min(((~(!16904426923455027816))), ((-(!1)))));
                                var_32 = (((((((min((arr_10 [i_1] [i_2] [1] [i_2] [i_1]), 1))) ? (~1) : ((max(var_10, var_16)))))) ? var_1 : 9321485351950001744));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_33 += ((((((1 ? var_9 : 11893094660876140607)) * (var_15 * 0))) - (!-1137729082)));
        var_34 *= (((((~(arr_23 [i_11] [i_11] [i_11] [i_11] [i_11])))) ? ((min((~-68), (arr_29 [i_11] [i_11] [i_11])))) : (max((arr_8 [i_11] [i_11] [i_11]), var_11))));
        var_35 = ((1 ^ (~1)));
        var_36 = (((arr_8 [i_11] [i_11] [i_11]) | ((((arr_31 [i_11] [i_11] [i_11] [i_11]) ? (!1) : (max(-1995937848, var_3)))))));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            {
                var_37 = 27437;
                var_38 = (max((max(-2, (arr_2 [16]))), (arr_14 [i_12] [i_12] [i_12])));
                var_39 = (((arr_14 [i_12] [i_12] [i_12]) * -1));
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 18;i_16 += 1)
                        {
                            {
                                var_40 = (arr_31 [i_14] [i_14 - 1] [i_14 - 1] [i_12]);
                                var_41 = 15031512713630362566;
                                var_42 = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
