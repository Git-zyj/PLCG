/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 32767;
    var_14 |= -75;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = 2;
        var_15 = 127;
        var_16 = -15717;
        var_17 = 54765;
        var_18 = 2726360508;
    }
    #pragma endscop
}
