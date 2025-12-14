/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_14 -= 0;
        var_15 = (arr_1 [i_0] [i_0]);
    }
    var_16 = (min(var_16, (((((2080374784 ? 4294967295 : (~var_10)))) ? (min(var_5, ((13386342745976562065 ? 2697540319340664090 : 17822846603772803506)))) : ((~(min(16191248388657899080, 4294967286))))))));
    var_17 = ((0 ? 3326667026 : 3597856998));
    var_18 = ((min(((2140245902 ? 18446744073709551594 : 623897469936748107), var_1))));
    #pragma endscop
}
