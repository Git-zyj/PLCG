/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = ((((((var_11 & (arr_0 [i_0]))))) && (((9223372036854775807 ^ (arr_0 [i_0]))))));
        var_15 = (min(var_15, ((((arr_2 [i_0] [i_0]) ? (((min(var_3, var_6)))) : (arr_2 [10] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((((-8837650970808312121 ? 10238 : 45094))));
        var_16 *= var_4;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] [i_2 - 2] = ((31 != ((59465 - (arr_9 [i_2])))));
        var_17 = -2817621886;
        var_18 = ((var_13 * (((((arr_4 [i_2]) || 6070))))));
    }
    var_19 = var_1;
    #pragma endscop
}
