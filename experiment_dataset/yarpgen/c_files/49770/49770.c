/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_4, (var_10 | 1)))) ? (((var_5 || var_15) | var_14)) : ((max(-66, (1 % var_1))))));
    var_17 = (min(var_17, ((var_11 ? 127 : (((((18446743798831644672 ? var_4 : -9223372036854775807))) ? 66 : var_14))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (~4399097832594622865);
        var_19 = (min(var_19, (((!((min((min(9223372036854775801, 54266)), ((((arr_2 [i_0]) && (arr_2 [i_0]))))))))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= (!(((4294967293 ? -16598 : 1))));
        var_20 += (~1);
        var_21 = 274877906951;
    }
    #pragma endscop
}
