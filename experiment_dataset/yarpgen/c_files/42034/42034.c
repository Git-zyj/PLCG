/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((var_1 ? var_9 : (((948514323 ? 4158 : var_8)))))));
    var_13 = (!var_7);
    var_14 -= -var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (+-46930);
        arr_3 [i_0] = var_9;
    }
    #pragma endscop
}
