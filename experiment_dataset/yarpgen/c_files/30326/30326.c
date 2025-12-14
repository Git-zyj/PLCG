/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -4;
    var_13 &= (max(var_6, (((-4569181995020339679 + 9223372036854775807) >> (((max(var_8, var_9)) - 8009880579049404632))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) | var_1));
        var_14 |= (arr_0 [i_0] [0]);
    }
    var_15 = (!var_4);
    #pragma endscop
}
