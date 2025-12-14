/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((((~(~1947801826))) - ((-12309 ? var_6 : (!-101)))));
    var_21 = ((((max((min(var_14, var_13)), var_17))) >> ((((-3283265828 ? var_11 : ((min(111, 250))))) - 5082))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((((132 ? 0 : 64))) ? -1476066218487982668 : (var_8 / -9115824096039475854)));
        arr_4 [i_0] = (((136 >= -6333451012449613445) ? (~1544873701988000918) : (var_10 > var_19)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] [4] = ((!(var_4 + 1)));
        arr_9 [i_1] [15] = (-var_4 - var_4);
    }
    #pragma endscop
}
