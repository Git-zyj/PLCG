/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = 3270;
        var_21 = (max(var_21, 22535));
        arr_2 [i_0] = (arr_1 [2] [i_0]);
        var_22 = (((8388608 + (arr_1 [i_0 + 1] [i_0 + 1]))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_23 ^= min((arr_4 [i_1]), ((max((max((arr_3 [i_1] [i_1]), var_0)), (arr_3 [i_1 + 1] [i_1 - 1])))));
        arr_5 [i_1] [i_1 - 1] |= (((((~(arr_3 [i_1] [i_1]))))) ? (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((((((arr_3 [i_1 + 2] [i_1 + 2]) + 2147483647)) << (((-9223372036854775802 - -9223372036854775804) - 2)))) - 2147471469)))) : (arr_3 [i_1] [12]));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [2] [i_2] [i_2] [i_4] = (((((arr_3 [i_1] [i_1]) ? (((min((arr_13 [10] [i_2 + 1] [i_2] [i_4]), var_11)))) : ((156825685 ? -383633149 : 788070865)))) % (min(4138141610, (-127 - 1)))));
                        var_24 = (min(1, 22535));
                    }
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_25 += (min((arr_6 [i_5] [i_5] [i_5]), (arr_3 [i_5] [5])));
        arr_19 [i_5] [i_5] = var_2;

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_26 = (max(var_26, var_16));
            arr_23 [i_5] [i_6] [i_6] = (-9223372036854775807 - 1);
            var_27 += (((((~(arr_13 [i_5 - 2] [i_5 - 2] [4] [i_5 - 1])))) ? ((((156825685 >> 1) < (var_18 == var_15)))) : (~1)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_28 = (-1664811500 ? ((min(1, 0))) : (var_7 == 1));
                        var_29 = (i_5 % 2 == zero) ? (((((((arr_20 [i_5 - 3] [i_5 - 4] [2]) >> (((arr_21 [i_5 - 4] [i_5 - 3] [i_5]) - 138))))) || (!var_9)))) : (((((((arr_20 [i_5 - 3] [i_5 - 4] [2]) >> (((((arr_21 [i_5 - 4] [i_5 - 3] [i_5]) - 138)) + 66))))) || (!var_9))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_30 ^= (max(var_14, (min(1, ((var_14 + (arr_31 [8] [i_9] [i_11 - 1])))))));
                                arr_42 [i_5] [i_5] [i_9 + 2] [i_12] [i_11] [i_12] |= var_3;
                            }
                        }
                    }
                    arr_43 [i_5] [i_5] [i_10] = (arr_34 [i_10]);
                }
            }
        }
        arr_44 [i_5] = ((((((arr_24 [i_5] [i_5] [i_5 - 3] [i_5 - 3]) + 2147483647)) >> (((~var_7) + 30716)))));
    }
    for (int i_13 = 4; i_13 < 11;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 11;i_15 += 1)
            {
                {
                    var_31 = (min(var_31, (((((1 ? 3016142413 : 4138141611)) * (((((arr_9 [i_15 - 2]) <= (arr_9 [i_15 - 2]))))))))));
                    var_32 = (max(var_32, ((max((max(((-(arr_7 [i_13] [i_13] [i_15]))), -576337803568622755)), 3418)))));
                }
            }
        }
        var_33 = (max(var_33, var_4));
        var_34 = min(((((max((arr_51 [i_13] [2]), (arr_33 [10] [10])))) - (((((arr_24 [0] [i_13] [i_13] [i_13]) + 2147483647)) << (250 - 250))))), (arr_47 [i_13 + 1] [i_13 - 3] [2]));
    }
    var_35 = var_8;
    #pragma endscop
}
