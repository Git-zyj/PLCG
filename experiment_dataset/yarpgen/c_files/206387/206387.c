/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!78);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_16 = (((((min(31805, 5741)))) == ((((max(59789, 233))) ? (59810 <= 268435455) : -85))));
        var_17 = (~var_14);
        arr_3 [i_0 + 1] = ((-((var_12 ? (1863023261 ^ var_4) : (arr_0 [i_0 - 1] [i_0 + 1])))));
    }
    #pragma endscop
}
