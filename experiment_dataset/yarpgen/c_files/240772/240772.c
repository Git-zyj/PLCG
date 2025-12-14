/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 96;
    var_13 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) + 98));
        var_14 = var_7;
    }
    var_15 = -26173;
    var_16 ^= (min((1 == var_5), (((((-948390148 ? var_0 : var_1))) ? var_4 : (max(1388808791, var_7))))));
    #pragma endscop
}
