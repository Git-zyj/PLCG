/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((738606494 ? 10753015277770712239 : 18357280008879042473)), (1817671122 < 134)));
        arr_4 [i_0] = -1817671142;
        var_10 ^= (-94 || 4294967294);
        arr_5 [i_0] = (512 & (~1657391165));
    }
    var_11 = ((71 ? (-8923911687180289690 < var_1) : var_8));
    #pragma endscop
}
