/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (min((((+((min((arr_4 [i_0 + 3] [i_0]), 79)))))), (min((arr_0 [i_0 + 3]), 44425))));
                    var_19 -= (arr_1 [i_0 - 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_13 [i_3] [i_4] = 2523985974567485883;
                arr_14 [i_3] [i_3] [i_4] = (min((((min(118, 1983921292)))), 2147483647));
                arr_15 [i_4] = (1 & -2523985974567485896);
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        var_20 *= ((-(arr_17 [i_5 - 1])));
        arr_18 [i_5] = (109 || (~172));
        arr_19 [i_5] = ((-(arr_16 [i_5 - 3])));
        var_21 = (-1 >= ((1 - (arr_16 [i_5 + 1]))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 20;i_6 += 1)
    {
        arr_23 [i_6] = ((((-35 ? 227 : var_4)) ^ var_9));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_22 = var_1;
            arr_27 [i_6 - 3] [i_6 - 3] [i_6] = 0;
        }
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            var_23 = arr_16 [i_6];
            var_24 = (!41815);
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_25 = var_15;
            var_26 = (i_6 % 2 == zero) ? (((((0 ? (arr_31 [i_6 - 3] [i_9]) : 358402102)) >> ((((var_14 ? (arr_25 [i_6] [i_6]) : 131071)) - 4294942522))))) : (((((0 ? (arr_31 [i_6 - 3] [i_9]) : 358402102)) >> ((((((var_14 ? (arr_25 [i_6] [i_6]) : 131071)) - 4294942522)) - 12663)))));
            arr_33 [i_6] [i_6] = 9786777167740549253;
        }
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_27 = (((218 * 65529) || -70));

                        for (int i_13 = 1; i_13 < 20;i_13 += 1)
                        {
                            var_28 -= (((arr_21 [i_6]) ? (arr_41 [i_6 - 3] [i_6 - 1]) : (arr_20 [i_6 - 1] [i_10 + 1])));
                            var_29 *= 1424261942;
                            var_30 = (min(var_30, 1061981629066596217));
                            var_31 = (max(var_31, (((~(arr_36 [i_13 - 1] [i_13] [i_10 - 1] [i_6 - 1]))))));
                        }
                    }
                }
            }
        }
        arr_43 [i_6] = -70;
    }
    var_32 = (min(var_14, var_3));
    #pragma endscop
}
