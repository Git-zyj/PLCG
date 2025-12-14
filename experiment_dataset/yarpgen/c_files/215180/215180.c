/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] &= (max(1258651357, 33));
        var_14 *= ((-27927 ? (min(((var_5 * (arr_1 [6]))), (max(27066, 1002890486)))) : var_9));
    }
    var_15 += 3036315939;
    #pragma endscop
}
