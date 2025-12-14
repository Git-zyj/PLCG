/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_19 = 1095561537;
        var_20 = (-820409896 | -1095561549);
    }
    var_21 &= 12114123276753562222;
    var_22 = ((((var_9 ? var_14 : ((var_0 ? var_10 : 62488))))) ? (min(var_15, (min(15425232534495640447, var_10)))) : (((4611686018410610688 ? 4611686018427383808 : (((4611686018427383797 ? 11 : var_13)))))));
    var_23 = var_12;
    #pragma endscop
}
