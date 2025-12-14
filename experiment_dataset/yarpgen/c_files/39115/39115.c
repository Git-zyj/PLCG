/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_4 || (arr_0 [i_0] [i_0 - 1]))) ? (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0 + 2]))) : (max(3805, (-2147483647 - 1)))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_0] [i_0] [i_3] = ((~(((878462540 == (!3416504746))))));
                            var_14 = (min((((!(!var_8)))), var_3));
                        }
                    }
                }
            }
            var_15 = (((~var_2) ? -18949 : (arr_9 [i_0 + 1] [i_0 + 1])));
            var_16 = (max((max(((var_3 ? (arr_0 [i_0] [i_1]) : 127)), var_3)), (730086882 < 0)));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = -var_12;
            var_17 = (!-var_13);
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_18 = ((((var_13 >> (((((arr_17 [i_0] [i_0 + 3] [i_6]) ? (arr_15 [i_0 - 1] [i_6]) : (arr_6 [i_0 + 3] [i_6]))) - 18219)))) + ((2111335323 ? var_6 : var_8))));
            var_19 = (max((((var_2 ? var_12 : 730086879))), ((((-5119 ? 5109 : (arr_19 [19] [3]))) << (126 - 105)))));
        }
        var_20 = ((((arr_19 [i_0 + 2] [i_0]) || (arr_6 [8] [i_0 + 1]))) || ((!(107 && var_1))));
        arr_21 [i_0] = ((38608 ? (((((arr_8 [i_0 - 1] [i_0] [i_0 + 3] [i_0 + 3]) < (arr_8 [0] [5] [i_0 + 2] [i_0 + 3]))))) : ((((var_13 ? 730086890 : -5360928682288235300)) + (14296 | -44)))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_21 = (min(var_21, (arr_11 [i_7] [i_7] [i_7] [i_7])));
        var_22 = ((var_5 ? (max((arr_22 [i_7]), (arr_19 [i_7] [i_7]))) : ((var_10 ? -17056 : (arr_19 [i_7] [i_7])))));
        arr_24 [i_7] = 5119;
    }
    var_23 = var_8;
    var_24 = (((min(15132073699721290887, 5118)) * var_7));
    var_25 = (0 > var_3);
    var_26 = 107;
    #pragma endscop
}
