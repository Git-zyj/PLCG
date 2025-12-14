/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = -750253560203142231;
        var_11 -= (min(47806, (min(47808, var_10))));
        var_12 -= var_0;
    }
    var_13 = (min(var_6, -64114364));
    #pragma endscop
}
