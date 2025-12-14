/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 &= var_8;
        var_16 = (min(var_16, (((((((arr_1 [i_0] [i_0]) ? (~7964108650694577624) : (((arr_0 [i_0]) ? var_14 : var_7))))) ? ((((!((((arr_2 [i_0]) ? var_2 : 9176))))))) : (((var_8 ? 9176 : -7973549396019537572))))))));
    }
    var_17 = 8191;
    #pragma endscop
}
