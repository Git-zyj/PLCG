/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 -= ((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : (min((arr_1 [i_0]), var_13))))));
        var_21 -= max((arr_0 [i_0]), (((((var_16 ? 432345564227567616 : (arr_1 [i_0])))) ? (((28672 ? 1 : 1))) : (~3543129314))));
    }
    var_22 = (!16690949533636917882);
    var_23 -= (((!1) * 213519493103848470));
    #pragma endscop
}
