/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = (min(var_20, var_13));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [8] [8] = (arr_0 [i_0]);
        arr_3 [14] = var_18;
    }
    var_21 = ((((max(-72, var_8))) ? (759140672 || var_11) : ((var_18 | (var_11 ^ var_17)))));
    var_22 = (max(var_22, var_15));
    #pragma endscop
}
