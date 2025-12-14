/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((((((var_9 ? -29808 : -4867)))) ? ((((var_1 ? var_8 : var_12)) * ((var_8 ? 0 : 1)))) : var_8));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 ^= ((var_3 || var_17) ? (((arr_0 [i_0 + 1] [i_0]) ? (arr_1 [i_0]) : -1142940952)) : (!1));
        var_21 = ((((var_16 ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0] [8]))) ^ (arr_0 [i_0 + 2] [i_0 - 1])));
        var_22 = (max(var_22, 1467218334));
        var_23 -= (((((arr_0 [i_0] [i_0 + 1]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0 - 1]) ? var_5 : 1)) : (((arr_0 [i_0] [9]) ? 211 : (arr_1 [15]))));
    }
    #pragma endscop
}
