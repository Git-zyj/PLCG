/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((var_2 ^ (~var_3)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = (min(var_16, (arr_1 [16])));
        var_17 = (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (((var_2 | (arr_1 [i_0]))))));
        var_18 |= ((arr_1 [10]) ? ((var_2 & (arr_1 [0]))) : (~var_6));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (max(var_4, (arr_4 [i_1] [7])));
        var_19 = (min(((var_9 + (((arr_2 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1]))))), (arr_4 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = (arr_2 [i_1]);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_20 = (((((((arr_3 [i_2]) ? (arr_2 [i_2]) : (arr_4 [8] [i_2])))) ? (((var_8 || (arr_3 [i_2])))) : ((((arr_1 [16]) && (arr_9 [i_2] [i_2])))))) ^ (!var_1));
        var_21 = (((~(((arr_1 [14]) ? (arr_1 [10]) : (arr_1 [6]))))));
    }
    #pragma endscop
}
