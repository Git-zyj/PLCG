/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_12 = (192 + 128);
        var_13 = 234;
        var_14 = (arr_1 [i_0] [1]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        arr_4 [8] = 192;
        arr_5 [6] [6] = (((var_0 * 0) != 224));
    }
    var_15 *= var_11;
    #pragma endscop
}
