/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((!var_1) == var_10)) ? (((var_1 - var_7) ? ((max(var_1, var_3))) : (!-2069344328651188488))) : var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) % (arr_2 [i_0])));
        var_12 ^= (arr_0 [i_0] [i_0]);
        var_13 = (max(var_13, (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_14 = (((arr_4 [i_1] [12]) ? ((((arr_4 [i_1] [1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [10])))) : 2069344328651188488));
        var_15 = (arr_5 [i_1]);
        arr_6 [i_1] = (((arr_4 [i_1] [i_1]) <= (arr_4 [i_1] [8])));
        arr_7 [i_1] = (arr_4 [0] [0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_16 = (((arr_9 [i_2] [i_2]) * (arr_9 [i_2] [i_2])));
        arr_12 [i_2] = (((245068561047222710 ? (arr_4 [15] [15]) : 21)) < ((((arr_10 [i_2] [i_2]) >= (arr_4 [i_2] [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_4] = (arr_11 [i_2] [14]);
                    var_17 += (arr_11 [3] [i_2]);
                }
            }
        }
        var_18 = (arr_4 [i_2] [i_2]);
    }
    #pragma endscop
}
