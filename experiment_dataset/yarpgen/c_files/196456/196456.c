/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= -15078;
    var_15 = (((((var_2 ? 18830 : 1))) ? (((65535 ? 46705 : ((864698283 ? var_4 : 16320))))) : ((54861 ? var_12 : -3604316080742331466))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((-(max(26, (arr_0 [i_0] [i_0])))))) && ((((max(64033, -15092))) < ((min((arr_2 [i_0]), 8)))))));
        var_17 = 0;
    }
    #pragma endscop
}
