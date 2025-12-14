/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((((((8817451940615811466 ? var_8 : var_4)) ? 1 : var_9))));
    var_11 = ((((((var_8 > var_2) ? 9629292133093740150 : var_3))) ? var_4 : var_8));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_12 = ((!(arr_1 [i_0 - 2])));
        var_13 = (arr_1 [i_0 - 3]);
    }
    #pragma endscop
}
