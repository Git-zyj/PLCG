/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_2));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [4] = 56;
        var_19 = (min(var_19, (((~((var_2 >> (((arr_0 [i_0 + 1] [i_0 + 1]) - 1561943497)))))))));
        arr_3 [i_0 - 2] = var_5;
    }
    #pragma endscop
}
