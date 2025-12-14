/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = -92;
        var_16 = ((-90 ? var_6 : (arr_0 [i_0] [8])));
    }
    var_17 = var_12;
    var_18 = (min(var_18, (((!((max(var_4, (max(2882023484, var_4))))))))));
    #pragma endscop
}
