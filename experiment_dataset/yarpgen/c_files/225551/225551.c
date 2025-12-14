/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 ^= max(((max(2912391006, -2147483646))), 16253388224151886030);
        arr_2 [14] &= (max(16253388224151886029, (var_11 / -334967586)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 += (~-var_2);
        arr_5 [i_1] &= (arr_0 [i_1] [2]);
    }
    var_15 += max(((~(~var_0))), -0);
    #pragma endscop
}
