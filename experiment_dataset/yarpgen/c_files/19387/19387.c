/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((var_0 ^ ((min((var_16 < 1569392739837496186), (((var_2 + 2147483647) >> (var_7 + 1681007148))))))));
        arr_2 [i_0] = (((var_12 - var_7) < (var_11 <= 5058)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = (-1755 < var_13);
        arr_6 [i_1] [i_1] = (-1569392739837496199 / var_2);
    }
    var_19 = -1;
    var_20 = var_13;
    #pragma endscop
}
