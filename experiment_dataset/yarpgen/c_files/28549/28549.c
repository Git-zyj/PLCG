/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (min((var_3 % var_11), (((!-4712585312698882139) ? (min(var_6, var_12)) : (-80 > 211)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = var_7;
        arr_3 [i_0] = var_14;
    }
    var_18 = var_8;
    #pragma endscop
}
