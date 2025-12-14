/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_21 -= ((!(1 ^ -83)));
        var_22 = (max(var_22, 18446744073709551613));
        arr_2 [i_0] [4] = (arr_0 [i_0]);
        var_23 -= ((((((arr_0 [i_0]) / var_19))) ? (arr_1 [i_0]) : -85));
    }
    #pragma endscop
}
