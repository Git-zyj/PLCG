/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    var_13 = (-993593910 > ((24 ? var_0 : 77)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((127 ? (arr_0 [i_0]) : var_8));
        var_14 = (min(var_14, (((~((var_8 ? -24 : (arr_1 [i_0]))))))));
    }
    #pragma endscop
}
