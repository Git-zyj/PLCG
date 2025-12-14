/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_14 |= ((-7316261136445686709 ? (arr_1 [i_0 + 2] [i_0]) : var_7));
        arr_3 [3] = -17;
        arr_4 [i_0] [i_0] = ((((!(arr_1 [i_0 - 1] [i_0]))) || (((var_6 ? var_6 : var_3)))));
    }
    var_15 = (min(7884558130330102883, 1));
    #pragma endscop
}
