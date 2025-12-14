/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (8046 != -1265738872250953247);

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 ^= (-2147483629 || 1);
        arr_2 [i_0] |= (+(min((((arr_0 [i_0]) ? 0 : 8048)), 8052)));
    }
    #pragma endscop
}
