/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_6) ? var_6 : var_5));
    var_12 += var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, (39679 && 25874)));
        var_14 = (25857 | 1);
    }
    var_15 += 39637;
    var_16 = (max((((max(4911994714740214821, 39644)) + -25891)), (((var_1 ? (var_3 - var_9) : var_5)))));
    #pragma endscop
}
