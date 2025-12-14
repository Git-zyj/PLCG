/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (max(var_19, (~106)));
        var_20 = ((-(((arr_0 [i_0]) ? var_17 : (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = (max((65530 >= 65535), (arr_1 [i_0] [i_0])));
        var_21 = (((arr_1 [i_0] [i_0]) ? (((arr_1 [0] [i_0]) ? var_9 : -var_15)) : (((~(-42 > -11352))))));
    }
    var_22 = 78;
    #pragma endscop
}
