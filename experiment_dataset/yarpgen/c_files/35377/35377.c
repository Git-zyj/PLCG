/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 += -var_13;
        var_22 = ((4002 ? 50201 : 61533));
        var_23 *= (arr_3 [i_0] [i_0]);
        arr_4 [i_0] = (min((((var_8 + (arr_0 [i_0] [i_0])))), ((max(61520, 61520)))));
    }
    var_24 = (max(var_24, ((var_19 ? var_12 : (min(var_6, ((var_4 ? var_11 : var_3))))))));
    #pragma endscop
}
