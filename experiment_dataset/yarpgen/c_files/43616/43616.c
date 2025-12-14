/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 += ((var_12 ? var_13 : var_9));
        arr_3 [i_0] = var_7;
    }
    var_18 = ((63 << (504 - 484)));
    var_19 = ((var_0 ? ((min(var_14, var_13))) : -var_1));
    var_20 ^= (min((min(var_14, ((var_12 ? var_1 : var_11)))), (((!(~var_11))))));
    #pragma endscop
}
