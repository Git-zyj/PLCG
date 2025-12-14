/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_3;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_15 = 1;
        var_16 += (min((max(1, var_12)), (((-(arr_1 [i_0 + 2] [i_0 + 2]))))));
        var_17 = (~var_2);
    }
    var_18 = -var_4;
    #pragma endscop
}
