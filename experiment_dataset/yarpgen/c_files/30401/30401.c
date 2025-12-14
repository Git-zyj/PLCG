/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 && ((max(((var_0 ? var_4 : var_0)), var_0)))));
    var_17 = (min(var_17, var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_18 |= ((126 ? 9834744666614406583 : 8611999407095145032));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = var_9;
        var_19 ^= var_0;
        arr_4 [i_0] = ((var_1 ? (arr_1 [i_0 + 3] [i_0]) : (arr_0 [i_0])));
    }
    var_20 = (max(var_11, var_8));
    #pragma endscop
}
