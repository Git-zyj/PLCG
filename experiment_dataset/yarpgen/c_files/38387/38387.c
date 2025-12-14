/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((-166341920 | (var_4 & var_6))), (((((min(var_12, var_0))) && var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
        var_15 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_2] = var_12;
                        var_16 = var_4;
                        arr_13 [i_1] [i_0] [i_0] [i_1] &= ((~(arr_8 [i_3 - 3] [i_3 + 1] [i_3 - 1] [i_3 - 2])));
                        var_17 = (((((1 ? -166341920 : 1))) ? ((var_10 ? var_3 : 8143298555870484023)) : var_0));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        arr_17 [i_4] = (((min(0, 0))));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_20 [i_4] = (max(((((max((arr_16 [i_4] [i_4]), (arr_15 [i_5])))) ? (((~(arr_18 [i_4] [i_5])))) : (min(var_10, var_7)))), (min(((var_8 ? (arr_15 [i_4]) : var_12)), ((min((arr_18 [i_4] [i_5]), 1)))))));
            arr_21 [i_4] [1] = var_1;
            arr_22 [i_5] &= arr_19 [i_5];
        }
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            arr_27 [i_4] [i_6] [1] = ((((1 ? 1 : -0))) && 2147483647);
            arr_28 [i_4] [i_4] [i_4] = ((!((min(var_9, 24771)))));
            var_18 = (((-(arr_26 [i_4 + 1] [i_6 + 3]))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                var_19 = ((((var_8 ? (arr_23 [i_4] [i_4]) : var_5)) / (arr_29 [i_8] [i_7] [i_4])));
                var_20 = (min(var_20, ((((-(arr_23 [i_4] [i_7])))))));
                var_21 = (~0);
            }
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                var_22 ^= (max((((!(((3984788025 + (arr_15 [5]))))))), ((((arr_19 [i_7]) ? 1 : (arr_24 [i_7] [1]))))));
                arr_37 [i_4] [i_7] [i_7] = ((var_2 ? (((((((arr_18 [i_4] [i_9]) - var_6))) ? (arr_26 [i_4 + 1] [i_4 + 1]) : var_0))) : (max(((max(1, 1001746716))), 24))));
                var_23 = min(((7163198237731482223 / (arr_26 [i_4 + 2] [i_4 + 2]))), (arr_29 [i_7] [i_7] [i_7]));
            }
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                arr_41 [i_7] [i_4] = -1024;
                arr_42 [i_4] = (arr_34 [i_4] [i_7] [i_10]);
                arr_43 [i_7] [i_4] = (((((var_6 ? (var_4 & 7267358090556371419) : (arr_33 [i_10 - 3] [i_4 + 3] [i_4 + 3])))) ? ((((((arr_29 [i_4] [i_7] [17]) ^ var_3))) ? ((var_12 ? (arr_38 [i_4] [i_7] [i_4] [i_4]) : (arr_19 [i_4]))) : (arr_31 [i_10 + 2] [i_7] [1] [i_4 + 1]))) : ((min((arr_25 [i_4 + 3] [i_4]), var_4)))));
                var_24 = var_12;
            }
            for (int i_11 = 4; i_11 < 17;i_11 += 1)
            {
                arr_46 [i_4] [10] = (~-6440);
                arr_47 [i_4] [i_7] [i_11 - 4] [i_4] = ((!((-1 != (arr_29 [i_11] [i_7] [8])))));
            }
            var_25 = ((max((arr_19 [i_4]), (var_10 | var_12))));
            var_26 = var_3;
        }
    }
    var_27 = ((((max(((var_10 ? var_6 : var_4)), var_6))) ? (max(12, 1)) : (((((11179385983153180199 ? 2571881857269466589 : 14)))))));
    var_28 = (-64 != var_8);
    #pragma endscop
}
