/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, -30));
        arr_4 [0] = var_7;
    }
    var_17 = (max(var_17, (~449593694)));
    var_18 = -var_10;
    #pragma endscop
}
