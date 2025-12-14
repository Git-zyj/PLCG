/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_15;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_17 = (min(var_17, (((3478597908 ? (arr_0 [i_0 + 1] [i_0 - 2]) : (((arr_0 [i_0] [14]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
        var_18 = 816369387;
        var_19 = (min(var_19, (~816369387)));
        var_20 = (max(var_20, (((var_0 ? var_10 : var_12)))));
        arr_2 [i_0] &= (((arr_0 [i_0 - 1] [i_0 - 2]) || (arr_0 [i_0 - 1] [i_0 + 3])));
    }
    var_21 &= (((~(!1))));
    var_22 = var_0;
    var_23 = ((var_5 ? ((((((~var_9) + 2147483647)) >> (((min(54743, 6898655177490780273)) - 54733))))) : 2497975539));
    #pragma endscop
}
