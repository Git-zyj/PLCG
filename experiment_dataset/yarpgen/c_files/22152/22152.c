/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-(~212))));
    var_16 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = 8620068883567696431;
        var_18 ^= (var_6 | var_6);
        var_19 = (min(var_19, 8620068883567696431));
    }
    #pragma endscop
}
