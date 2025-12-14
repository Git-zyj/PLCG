/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 ^= (--125);
        var_15 = (arr_1 [i_0] [i_0]);
    }
    var_16 = (((((144106391982833664 ? (!var_2) : (((-2147483647 - 1) ? var_12 : 134216704))))) || (((max(var_5, -144106391982833643)) >= 20))));
    #pragma endscop
}
