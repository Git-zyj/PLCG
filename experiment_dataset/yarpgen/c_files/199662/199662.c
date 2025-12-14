/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, var_2));
                    var_13 += (((arr_0 [i_1 + 1] [i_0]) ? (((arr_0 [i_0] [i_0]) ? var_6 : (arr_1 [i_0]))) : (((var_11 ? var_4 : (arr_5 [i_1 - 2] [i_1 - 1]))))));
                }
            }
        }
        arr_7 [i_0] = var_2;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_14 ^= ((((((arr_4 [i_3] [i_3]) ? (arr_1 [i_3]) : (arr_3 [i_3] [7] [7])))) ? ((((arr_0 [i_3] [i_3]) ? var_5 : (arr_0 [i_3] [i_3])))) : var_1));
        arr_10 [0] = (arr_1 [i_3]);
        var_15 = (arr_2 [i_3]);
        arr_11 [i_3] = ((((var_7 ? (arr_4 [1] [i_3]) : var_0))) ? var_7 : var_8);

        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_16 = var_11;
            var_17 *= (((arr_2 [i_3]) ? (arr_0 [i_3] [i_3]) : var_5));
            var_18 = (max(var_18, (arr_1 [i_4])));
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            var_19 = (max(var_19, (((14160 ? 1 : -14178)))));
            var_20 = (max(var_20, ((((arr_0 [i_3] [i_3]) ? (((((((arr_2 [i_5]) ? var_3 : var_0))) ? (arr_9 [i_3] [i_3]) : var_6))) : ((((((arr_13 [i_5] [i_3]) ? 4035043284 : (arr_3 [i_3] [i_3] [i_5])))) ? (((arr_9 [i_3] [i_5]) ? var_9 : var_9)) : ((((arr_14 [12] [12]) ? (arr_17 [i_3] [7]) : var_6))))))))));
            var_21 += ((627987602 ? ((351 ? var_10 : ((-9 ? 14173 : (arr_12 [i_3] [14]))))) : 627987605));
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_22 = (max(var_22, ((((arr_18 [4] [i_6] [i_6]) ? (arr_12 [i_3] [i_3]) : (arr_13 [3] [i_6]))))));
            var_23 = (((((var_11 ? (arr_15 [i_3] [i_6] [i_3]) : var_8))) ? ((var_9 ? (arr_13 [i_6 + 2] [i_3]) : (arr_16 [i_3]))) : (arr_12 [i_3] [i_6 + 2])));
            var_24 &= var_1;
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_25 = (max(var_25, (((var_10 ? var_4 : var_5)))));
                    arr_29 [i_9] [i_8] [i_7 + 2] = var_5;
                }
            }
        }
    }
    var_26 = (min(var_26, var_7));
    #pragma endscop
}
