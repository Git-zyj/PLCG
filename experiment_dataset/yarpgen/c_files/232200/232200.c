/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_15 = (((((var_8 | var_11) ? 1 : ((min(1, var_5))))) < ((((max(0, 14))) * (~1)))));
        arr_4 [i_0] &= (((var_11 && -15) && ((var_7 && (((var_7 ? var_9 : var_5)))))));
    }

    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_16 = ((((max(var_5, (-26 < var_8)))) ^ ((255 ? 186 : -12))));
        var_17 = ((98 || ((1 < (max(-65, 8589934591))))));
    }
    #pragma endscop
}
