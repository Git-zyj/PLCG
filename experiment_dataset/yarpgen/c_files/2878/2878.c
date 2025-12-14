/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_15 = ((~((0 ? 1870983721 : -1870983718))));
    }
    var_16 = ((var_14 ? ((145143040 ? (max(3204004771221398830, -1)) : 255)) : var_6));
    #pragma endscop
}
