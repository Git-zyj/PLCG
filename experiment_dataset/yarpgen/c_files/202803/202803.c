/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 &= var_8;
        arr_2 [3] = (max(((min(1, -119))), (max(1, 13454))));
    }
    var_17 -= var_3;
    #pragma endscop
}
