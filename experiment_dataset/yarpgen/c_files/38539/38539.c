/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = (-(((14644831537477103078 && ((min(var_1, var_3)))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = ((-((~(arr_1 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_18 += var_14;
                            var_19 = ((((((18446744073709551602 ? var_1 : 11382))) ? -115 : (arr_3 [i_1] [i_1 - 1]))));
                        }
                    }
                }
            }
            var_20 = ((((min(var_2, (((arr_8 [i_1] [i_0 - 3]) ^ var_1))))) ? (max(((var_13 ? var_12 : var_0)), ((max(var_14, var_0))))) : (max(1033445785, (arr_9 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 + 2])))));
            var_21 = ((((min(((((arr_0 [i_0]) && var_9))), (((var_4 + 2147483647) >> (var_6 - 101)))))) ? (((arr_11 [i_1 + 2] [i_1] [i_1] [i_1 - 1] [i_1] [i_0 - 3]) / (arr_1 [i_1 + 1] [i_0 - 2]))) : (((~(!32761))))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_22 = var_10;
            var_23 = ((((var_3 << (var_13 - 18519))) << (((arr_8 [i_5 + 1] [i_0 - 1]) - 124857206))));
        }
        var_24 |= (((var_11 >> (var_0 - 6875))));
        arr_14 [i_0] [i_0 - 3] = ((~(~131071)));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6 - 2] = ((127 ? (arr_3 [i_6 + 1] [i_6]) : var_5));
        var_25 = (var_1 - var_1);
    }
    #pragma endscop
}
