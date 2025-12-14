/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 + 1]);
        var_12 = (arr_2 [i_0]);
    }
    var_13 = (max(var_13, var_5));
    #pragma endscop
}
