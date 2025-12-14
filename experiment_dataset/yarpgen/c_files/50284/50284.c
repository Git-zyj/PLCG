/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (((-66 - 65) ? 2147483647 : (-7860592424242847578 % 8388607)));
        var_17 *= -67;
    }
    var_18 -= (((var_10 ? var_16 : var_11)) | ((((!(!var_5))))));
    var_19 *= var_16;
    var_20 = (max((((var_1 ? var_11 : var_12))), ((((!var_11) ? ((max(var_15, var_4))) : var_2)))));
    #pragma endscop
}
