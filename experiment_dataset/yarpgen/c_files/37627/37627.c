/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 135;
    var_20 = (min(var_20, ((((((-(!var_14)))) ? (((~var_2) * (!var_1))) : var_8)))));
    var_21 &= ((~(max(var_11, (min(1, -3394976330156987545))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = 822689940;
        var_23 = 144;
    }
    #pragma endscop
}
