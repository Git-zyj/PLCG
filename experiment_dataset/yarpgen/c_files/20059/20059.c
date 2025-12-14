/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 4;
    var_20 = 8468959425031887491;
    var_21 = 8;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_22 *= 13;
        var_23 += (((arr_0 [i_0 + 2]) >> (-338585919 + 338585940)));
        arr_2 [11] [11] = ((min((min(1701025599322274492, 143)), 127)));
    }
    #pragma endscop
}
