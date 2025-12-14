/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [0] = arr_0 [i_0];
        var_20 = (arr_3 [1] [1]);
    }
    var_21 = (max(var_21, (0 / 1)));
    #pragma endscop
}
