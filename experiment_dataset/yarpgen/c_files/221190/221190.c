/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = var_10;
        arr_3 [i_0] = var_2;
        arr_4 [i_0] [i_0] = (~var_7);
    }
    var_16 = (min(var_16, 7));
    #pragma endscop
}
