/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 = ((var_3 ? (((~var_8) % (((var_17 ? var_16 : var_11))))) : ((((min(var_3, var_3)))))));
        var_20 = ((((((var_8 + 2147483647) << (!var_16)))) ? ((~(min(var_4, var_17)))) : var_18));
        var_21 = ((-54264 < (!var_0)));
    }
    var_22 &= ((var_15 ? (~var_14) : var_17));
    var_23 = (min(var_23, var_7));
    var_24 = (max(var_24, var_7));
    #pragma endscop
}
