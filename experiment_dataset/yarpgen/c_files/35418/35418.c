/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 |= (arr_0 [i_0]);
        var_11 = 976591806;
    }
    var_12 = var_6;
    #pragma endscop
}
