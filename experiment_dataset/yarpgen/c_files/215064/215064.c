/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((((196 + 120) ? var_3 : (6 == 250)))) ? (~var_4) : (~-51))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = var_6;
        arr_4 [5] [i_0] = var_8;
        var_15 = (max(var_15, ((max((((arr_1 [i_0]) + (arr_3 [i_0]))), 24797)))));
        var_16 = ((~(arr_1 [i_0])));
    }
    #pragma endscop
}
