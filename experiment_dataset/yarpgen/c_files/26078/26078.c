/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 16214354320937483302;
        arr_4 [i_0 + 1] = -1;
    }
    var_14 = (min(var_14, -621844366));
    var_15 = var_1;
    #pragma endscop
}
