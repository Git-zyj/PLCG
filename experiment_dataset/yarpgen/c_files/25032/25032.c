/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_15 = -9223372036854775800;
            var_16 = (((((9223372036854775804 << (25 - 25)))) ? (((-(arr_4 [i_0 + 1] [i_0] [i_0])))) : ((((var_2 ? var_1 : (-2147483647 - 1))) + var_0))));
            var_17 += ((((-79 ? 173 : (arr_1 [i_0 + 1] [i_0 + 1]))) | var_10));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_18 = (((arr_12 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3]) != (arr_5 [0] [i_3 - 1] [0] [i_3 - 1])));
                            var_19 |= var_2;
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_20 = (arr_14 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_5] [i_0]);
                    var_21 = (min(var_21, (arr_6 [i_0] [i_0] [i_0])));
                    var_22 = (max(var_22, var_0));
                }
                arr_16 [i_0] [i_0] [i_1] [i_1] = var_14;
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = 37436;
            var_23 = (var_3 + var_7);
        }
        var_24 += (-((~(arr_6 [i_0] [i_0] [i_0 - 1]))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    {
                        var_25 = var_10;
                        var_26 = (min(var_26, (arr_17 [13] [13])));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_27 = ((((var_14 / (((var_7 * (arr_27 [i_10] [i_9 - 3] [0] [i_8] [i_0 + 1] [i_0 + 1])))))) ^ ((((1 || var_5) ? -880739152 : 0)))));
                            var_28 = (arr_5 [10] [i_9 - 4] [i_9 - 3] [i_9 - 1]);
                            var_29 = (((~var_11) ? 3365748233 : var_4));
                            var_30 = ((((((arr_4 [i_7] [i_9 - 2] [i_10]) && var_6))) > ((~((var_9 ? var_9 : (arr_27 [i_0] [i_9] [1] [i_8 + 1] [i_7] [i_0])))))));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            var_31 *= var_11;
                            var_32 = 9223372036854775800;
                        }
                    }
                }
            }
        }
        var_33 = ((!(((-(arr_29 [1]))))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 15;i_12 += 1) /* same iter space */
    {
        var_34 = var_10;
        arr_34 [i_12 + 1] [i_12 + 1] = (((arr_4 [i_12 + 1] [i_12 - 1] [i_12 + 1]) ? var_0 : var_6));
        arr_35 [i_12] = ((var_7 ? (arr_23 [12] [i_12] [i_12] [i_12]) : 1));
        arr_36 [i_12] [i_12] |= ((var_1 >> (9223372036854775800 - 9223372036854775791)));
        var_35 = ((!(arr_28 [2] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])));
    }
    var_36 = var_13;
    var_37 = ((var_0 ? 3 : -24056));
    #pragma endscop
}
