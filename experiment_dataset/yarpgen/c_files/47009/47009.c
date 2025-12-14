/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = (var_9 ? ((-2900253992183367993 ? (14349783188238294485 | 294146689) : 65535)) : 294146689);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(arr_0 [i_0])));
        var_16 *= ((var_11 | (!0)));
    }
    var_17 |= 10;
    var_18 = ((max(var_11, (var_10 | 0))));
    #pragma endscop
}
