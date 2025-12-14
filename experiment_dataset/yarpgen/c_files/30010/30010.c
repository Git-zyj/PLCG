/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        var_14 = (min(var_14, var_6));
        var_15 = (((min(3047610682502976470, (arr_0 [i_0] [i_0]))) & (-112 % 255)));
    }
    var_16 = 250125541;
    var_17 = var_6;
    #pragma endscop
}
