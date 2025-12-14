/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = var_7;
    var_13 -= -5314;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [7] = (3085206023350792440 / 42185);
        var_14 = (arr_0 [i_0]);
    }
    var_15 = 63090;
    #pragma endscop
}
