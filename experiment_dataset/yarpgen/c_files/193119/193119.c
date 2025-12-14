/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [23] [i_2] [i_1] [i_0] = arr_2 [i_0] [i_2 + 1];
                    arr_8 [i_2] = ((((((arr_6 [8] [i_1] [i_0]) && var_4))) > (((arr_3 [i_2] [i_2 - 1] [i_2 + 1]) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2]) : ((((arr_2 [i_1] [i_1]) && var_2)))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((((((var_5 ? (arr_10 [i_3]) : (arr_10 [i_3]))) + 9223372036854775807)) >> ((((arr_10 [i_3]) || (arr_10 [i_3]))))));
        var_15 ^= (((((var_9 || var_6) - (((arr_12 [i_3]) ^ (arr_11 [i_3]))))) % (((arr_12 [i_3]) % (((arr_11 [i_3]) & (arr_1 [i_3] [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_16 ^= var_1;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_17 = (arr_2 [i_4] [i_4]);

            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                arr_22 [i_4] [i_5] [i_6] [i_4] = (((-48 | 41) % (((((arr_2 [10] [10]) + 9223372036854775807)) >> (((arr_17 [0] [i_5] [i_6]) - 1708636824))))));
                var_18 = (var_11 | (var_5 | var_0));
            }
            arr_23 [i_5] = (2112496440 && 2655969492);
            arr_24 [i_5] [i_5] = var_14;
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            var_19 = (min(var_19, ((((arr_6 [i_4] [i_7 - 2] [i_4]) && (arr_6 [i_4] [i_7 - 4] [i_7 - 1]))))));

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_36 [i_7] [i_7] [i_8] [i_9] = (((arr_16 [i_7 - 3] [i_7 + 1] [i_7 + 1]) ? ((var_6 | (arr_1 [i_4] [i_7]))) : (((((arr_29 [i_9] [6] [6] [i_4]) < var_13))))));
                    var_20 = (arr_9 [i_7 + 1]);
                    var_21 = ((((var_13 ? var_2 : (arr_19 [i_8] [i_7]))) << (((arr_19 [i_4] [i_7 - 4]) - 2105215936))));
                    var_22 = ((((var_7 ? var_6 : (arr_10 [i_4]))) & (26539 ^ 46924)));
                    var_23 = ((var_2 < ((2112496440 ? -28641 : -4659))));
                }
                var_24 *= (((((arr_4 [i_4]) ? (arr_25 [i_8] [i_8]) : var_5)) - ((var_7 ? (arr_5 [13] [i_4] [i_8]) : var_6))));
                arr_37 [i_7] [i_7] [2] = arr_31 [i_8] [i_7] [i_8];
                var_25 = (arr_4 [i_4]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_26 = (i_7 % 2 == zero) ? ((((arr_33 [i_11 - 2] [i_11] [7] [i_7]) >> ((((var_2 ? var_7 : (arr_11 [i_4]))) - 1956239581))))) : ((((((arr_33 [i_11 - 2] [i_11] [7] [i_7]) + 2147483647)) >> ((((var_2 ? var_7 : (arr_11 [i_4]))) - 1956239581)))));
                            arr_42 [i_11] [i_7] [i_8] [i_7] = var_8;
                            arr_43 [i_4] [i_7] [i_7] [i_7] [i_10] [i_11 - 3] = (arr_38 [i_4] [i_7] [i_8] [i_10] [i_11]);
                        }
                    }
                }
            }
            var_27 = (((((var_1 % (arr_21 [i_4])))) ? (var_9 % var_1) : (arr_17 [i_4] [i_7 - 4] [i_7])));
            var_28 = (max(var_28, var_2));
        }
    }
    var_29 = var_10;
    #pragma endscop
}
