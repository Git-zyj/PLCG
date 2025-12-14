/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((((var_7 ? (var_3 || var_6) : (arr_6 [i_0] [i_1]))) ^ ((((var_8 <= (~var_9)))))));
                arr_7 [i_1] [i_1] = min((((((arr_3 [i_0] [i_0] [i_1]) ? var_1 : var_8)) >> (((min(var_5, (arr_2 [i_0]))) - 89)))), ((((((var_12 ? var_1 : var_2))) ? var_11 : (~var_13)))));
                arr_8 [i_0] [i_1] = ((~(arr_4 [i_1] [i_1])));
            }
        }
    }
    var_15 = ((((min(var_5, var_8))) * ((((var_4 == var_0) == var_6)))));

    for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_16 -= ((!(((var_12 ? var_11 : var_3)))));
        var_17 = var_6;
        arr_11 [i_2] = (((((var_1 ? (((arr_3 [i_2 - 1] [i_2 - 1] [i_2]) ? var_7 : var_6)) : (!42)))) ? (((var_4 <= (arr_6 [i_2 + 1] [i_2])))) : (arr_10 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
    {
        var_18 = ((var_11 ? var_9 : ((var_6 ? (arr_9 [i_3]) : var_3))));
        arr_14 [i_3] [i_3] = ((var_1 ? (var_7 && var_3) : (var_5 - var_13)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_19 = (var_13 - var_3);
        var_20 *= ((var_13 ? (arr_5 [i_4] [i_4] [i_4]) : (arr_4 [i_4] [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_21 += (((((var_12 ? var_4 : (arr_19 [2])))) ? ((var_13 + (arr_0 [i_5] [i_5]))) : ((((!(arr_17 [i_5])))))));
        arr_20 [i_5] [6] = (((~var_13) ? (((1731722427 ? var_7 : var_10))) : var_2));
        arr_21 [i_5] = ((var_4 && (((var_12 ? var_4 : var_6)))));
    }
    var_22 = ((((~var_7) ? (var_3 == var_11) : var_4)) == var_12);
    #pragma endscop
}
