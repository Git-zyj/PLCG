/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~4611615649683210240);
    var_21 = var_12;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_22 = (arr_1 [i_0]);
        var_23 = ((4611615649683210240 ? 5196467656452665191 : 5196467656452665198));
    }
    var_24 = (((-1098737244473793334 ? 13835128424026341384 : 4294967291)));
    var_25 += min((max(var_14, (~13835128424026341375))), var_9);
    #pragma endscop
}
