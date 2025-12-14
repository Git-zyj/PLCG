/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (var_1 && (((min(var_7, -1443429159347978608)))));
        var_15 = ((((min(var_11, 98))) ? (arr_1 [i_0]) : (~var_11)));
    }
    var_16 ^= (!-2264);
    var_17 = (((((var_9 ? var_6 : ((min(3336, -102)))))) ? (((!((max(1073741823, 1073741808)))))) : -1073741826));
    #pragma endscop
}
