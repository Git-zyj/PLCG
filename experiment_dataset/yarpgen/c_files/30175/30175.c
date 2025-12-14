/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (+((var_2 ? (!var_3) : -30)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 *= var_4;
        arr_2 [14] = var_3;
        arr_3 [i_0] = var_1;
    }
    var_12 = max(-1207784397, -1720963636928949984);
    #pragma endscop
}
