/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = ((274877906943 ? 1286896180 : 630770298));
        arr_3 [i_0] = (-1021724084 || -1446552928);
        var_14 = (((805306368 && 630770312) || (!1286896184)));
    }
    var_15 = (((13078710340004406166 & 1286896208) & 1286896161));
    #pragma endscop
}
