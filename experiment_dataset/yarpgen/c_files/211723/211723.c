/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 ? var_10 : (((min(var_4, 288212783965667328))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_0;
        var_20 = (~(1 || 65535));
        var_21 += var_7;
    }
    #pragma endscop
}
