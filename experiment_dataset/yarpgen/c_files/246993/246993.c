/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_1 [i_0])));
        var_21 = ((~((-865592628 ? 4172525156645785449 : 117))));
    }
    var_22 &= ((((((var_15 ? var_0 : var_7)) | var_18)) != var_9));
    var_23 = var_19;
    #pragma endscop
}
