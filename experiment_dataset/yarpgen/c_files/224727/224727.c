/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = var_2;
        arr_3 [i_0] = ((3663739382893692746 % (1668 != 1176)));
        var_18 = var_12;
    }
    var_19 = (var_6 < var_14);
    var_20 = ((var_6 ? ((var_11 ? (var_11 <= var_5) : var_9)) : var_5));
    #pragma endscop
}
