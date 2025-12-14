/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (min(var_15, 32388));
        arr_3 [i_0] |= (((var_8 ? var_0 : 1920448393144175755)));
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = var_14;
        arr_7 [i_1] = 57860;
    }
    var_16 *= (max((18446181123756130304 < var_9), (!var_6)));
    #pragma endscop
}
