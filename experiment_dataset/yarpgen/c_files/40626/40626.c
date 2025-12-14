/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? ((var_16 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : ((max((arr_0 [i_0]), (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] &= 1;
            arr_6 [i_1] = (arr_3 [i_0] [15] [i_1]);
            var_19 = (min(var_19, (max((arr_3 [i_0] [i_0] [i_1]), (~-16)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_20 -= (arr_7 [i_0] [i_2]);
            var_21 = (min(var_21, (arr_8 [i_2])));
            arr_11 [i_0] = -1;
        }
    }

    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3 + 2] = (((((((29032 | (arr_13 [i_3])))) ? (arr_12 [i_3 + 1]) : 1960494220))) > (arr_13 [i_3 + 1]));
        arr_15 [i_3] = ((((((arr_12 [i_3]) ? var_9 : ((-(arr_13 [1])))))) ? 15540 : (((((142 ? 15567 : var_2))) ? 1 : (min(var_7, (arr_13 [i_3])))))));
        arr_16 [6] [i_3] = (~2358806170);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_22 = ((-3 ^ (arr_12 [i_4 - 1])));
        arr_21 [i_4] = ((var_3 ? var_14 : -15541));
    }
    #pragma endscop
}
