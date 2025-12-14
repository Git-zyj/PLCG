/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = ((((min((min(var_10, var_12)), var_16))) ? ((var_2 ? var_6 : (var_9 < 3524))) : ((var_6 ? var_13 : var_11))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 = ((((11385 ? var_10 : var_3)) ^ var_8));
        var_20 = var_2;
        var_21 = (min(var_21, (arr_0 [4])));
        var_22 = (((var_7 < 1) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((arr_1 [i_1 - 1]) ? 33585 : (arr_3 [7]));
        var_23 = (((arr_1 [i_1]) >> (((arr_0 [18]) - 65))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = (((((arr_5 [i_2] [i_2]) % (arr_5 [i_2] [i_2]))) | 6570));
        arr_8 [i_2] = (max(((min((!1), var_7))), (arr_5 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_24 -= ((min(-1273562786242180526, (((-(arr_19 [i_3] [17] [i_5] [i_6] [i_7])))))));
                            var_25 -= (max((arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), ((((var_16 ? var_15 : var_2)) ^ var_8))));
                            var_26 = var_8;
                            var_27 += (min(((var_11 ? (arr_20 [i_6 - 1] [i_4] [i_5] [i_5] [i_7] [i_7]) : var_0)), (min((arr_17 [i_6 + 3] [i_4] [i_5] [i_7]), 2402525606))));
                        }
                    }
                }
            }
            var_28 = (min((arr_5 [i_4] [i_4]), -2080));
            var_29 = (!var_15);
            var_30 = (((arr_5 [i_4] [i_4]) ? (((arr_6 [i_3]) | (~-6555))) : (1 | 18471)));
        }
        for (int i_8 = 4; i_8 < 22;i_8 += 1)
        {
            var_31 &= ((~(~18446744073709551615)));
            arr_23 [i_3] [22] [i_3] = (min(var_4, ((28775 ? 36780 : 0))));
        }
        var_32 = ((3197361084 ? 18446744073709551615 : 35093168));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 20;i_11 += 1)
                {
                    {
                        var_33 = (min(var_2, var_14));
                        arr_31 [i_3] [i_9] [i_9] [i_10] [14] = (min(((12582912 ? -6570 : 18446744073709551611)), (max((((arr_22 [i_3] [i_3]) ? var_14 : (arr_17 [21] [i_10] [21] [20]))), (!var_9)))));
                        var_34 = -0;
                    }
                }
            }
        }
    }
    var_35 = (min(var_35, 871468854));
    #pragma endscop
}
