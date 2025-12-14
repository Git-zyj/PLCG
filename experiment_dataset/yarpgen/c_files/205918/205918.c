/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [4] = ((((arr_0 [2]) ? var_15 : var_5)));
        arr_4 [i_0] = ((arr_2 [i_0]) / -var_6);
        arr_5 [i_0] [8] |= (arr_1 [4]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((!(((30520 ? 0 : (arr_1 [i_1]))))));
        arr_10 [8] = (arr_1 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        arr_14 [i_2] = ((((arr_13 [i_2] [i_2 - 2]) - 43821)));
        arr_15 [4] = (arr_0 [4]);
    }
    var_17 = var_11;
    #pragma endscop
}
