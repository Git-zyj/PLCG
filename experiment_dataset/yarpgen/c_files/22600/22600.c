/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((18 ? 0 : 28)));
        arr_3 [i_0] = ((!(arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = (((45 ^ 1) < (max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_10 = ((((((arr_0 [i_0]) < (arr_0 [i_0])))) < (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (arr_7 [10] [10])));
        arr_9 [i_1] [i_1] = ((~(arr_7 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_12 = (((((arr_12 [i_2] [i_2]) & (arr_6 [i_2] [i_2]))) * (((((((arr_5 [6]) & var_7))) <= (~11602377903639900809))))));
        var_13 &= (~(min((arr_13 [i_2]), (4294967277 | 4294967289))));
    }
    var_14 = (min(var_14, ((max((min((var_9 && var_4), var_9)), (max(((var_0 ? var_9 : var_5)), var_2)))))));
    var_15 &= var_8;
    #pragma endscop
}
