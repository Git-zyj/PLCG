/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += -12117537083127889511;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = ((var_5 ? 8711037993553413211 : (-9223372036854775807 - 1)));
        var_22 += (~var_4);
    }
    var_23 = (max((max((-9223372036854775795 | var_12), (max(0, (-9223372036854775807 - 1))))), ((max((!var_8), 26503)))));
    var_24 = (min(var_24, var_16));
    var_25 *= var_10;
    #pragma endscop
}
