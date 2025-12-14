/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 &= min(var_7, (min(((min(var_7, (arr_0 [1])))), var_9)));
        var_15 = (max(var_13, (min(var_9, var_10))));
        arr_2 [3] [i_0] = ((((max((var_11 ^ var_11), (min(var_10, (arr_1 [i_0])))))) ? (((min((arr_0 [1]), var_11)))) : (min(2585024182, 173))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 -= ((((-16140 / (arr_3 [i_1] [4]))) <= ((((-2147483647 - 1) ? var_6 : var_13)))));
        var_17 = (max(var_17, var_6));
        var_18 *= (var_2 / 2314149316922846865);
        arr_6 [i_1] = var_9;
        var_19 = 117;
    }
    #pragma endscop
}
