/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_11 % var_4);
    var_13 = ((var_0 ? ((0 ? var_6 : ((var_10 ? var_9 : var_11)))) : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_14 ^= ((~(((arr_1 [1] [1]) ? var_2 : var_0))));
    }
    #pragma endscop
}
