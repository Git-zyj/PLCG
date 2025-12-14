/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (var_9 ? var_3 : var_15);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (min(var_17, (~var_15)));
        var_18 = (arr_1 [i_0]);
        var_19 = (max(var_19, ((((((var_12 ^ (~var_3)))) <= 723274392)))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_7 [4] |= var_9;
        var_20 = ((arr_5 [i_1]) | (arr_5 [i_1]));
        var_21 = var_0;
    }
    var_22 -= var_4;
    #pragma endscop
}
