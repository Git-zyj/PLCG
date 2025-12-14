/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_16;
    var_21 = (var_5 ? ((17190443641717695920 ? 80 : 80)) : ((max(74, 7))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = -64;
        arr_3 [i_0] = -80;
    }
    var_23 = (((((1099511627775 ? (!var_15) : ((0 ? 7168 : -2147483641))))) ? (!-32356) : -32356));
    #pragma endscop
}
