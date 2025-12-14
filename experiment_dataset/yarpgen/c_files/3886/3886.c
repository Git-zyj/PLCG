/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 79;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (max(0, -1168437262));
        arr_2 [i_0] = (arr_1 [1]);
    }
    var_13 ^= var_6;
    var_14 = (max(var_14, (((((min(-69, (min(3617, 24))))) ? var_0 : var_8)))));
    #pragma endscop
}
