/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_1, -27736));
    var_14 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((~(max(var_3, 1))));
        arr_4 [i_0] [i_0] = -17291;
        var_15 = 1;
    }
    #pragma endscop
}
