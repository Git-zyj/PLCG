/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((11675 ? ((min(var_13, -1))) : 16211816096900736489))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((arr_2 [14] [14]) ? (arr_0 [i_0]) : 18446744073709551611));
        var_20 = ((var_3 == (arr_2 [i_0] [i_0])));
        var_21 = (arr_2 [i_0] [i_0]);
    }
    var_22 ^= (((min(var_17, (min(var_15, var_13)))) >> ((var_8 ? var_16 : ((var_0 ? -1 : var_15))))));
    var_23 = var_8;
    #pragma endscop
}
