/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 |= ((((max(var_6, 18014123631575040) / 1))));
        arr_3 [22] = var_8;
    }
    #pragma endscop
}
