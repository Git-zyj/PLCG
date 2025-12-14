/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = ((+(((arr_1 [i_0] [i_0]) ? (~var_0) : var_8))));
        arr_3 [i_0 - 1] [i_0 + 2] = (((-1555632440 ? ((23911 ? (-9223372036854775807 - 1) : -11)) : (((min(-122, var_6)))))));
    }
    var_17 = (max((((~((var_4 ? var_5 : var_12))))), var_14));
    #pragma endscop
}
