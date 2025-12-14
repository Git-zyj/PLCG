/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_7, (~var_6));
    var_17 *= var_6;
    var_18 = var_14;
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((-(arr_2 [i_0] [i_0])));
        var_21 = (((arr_1 [i_0] [i_0]) && ((((arr_0 [i_0]) << (((arr_0 [i_0]) - 3621135670)))))));
    }
    #pragma endscop
}
