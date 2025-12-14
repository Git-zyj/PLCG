/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((max(342634076408297792, var_7))) ? var_9 : (var_8 + 12715)))) ? 18104109997301253802 : (((max(var_8, var_5))))));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_12 = 52824;
        var_13 = 22651;
    }
    var_14 = (min(var_14, (((((((31613 ? var_6 : var_3)))) ? var_1 : ((min(var_10, ((min(52820, var_7)))))))))));
    var_15 = (-66 & ((-((max(32641, -12))))));
    var_16 = var_2;
    #pragma endscop
}
