/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, -1));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = 83;
        var_14 = (max(var_14, ((max((~var_1), ((max(var_5, var_10))))))));
        var_15 = (arr_0 [i_0]);
        var_16 = ((~((var_0 ? (((var_9 ? var_5 : var_0))) : var_6))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 = (min(var_17, (arr_2 [i_1])));
        var_18 = (max(var_18, (((arr_3 [i_1 - 1]) ? 904278209680302540 : var_6))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = ((((11 << (4294967295 - 4294967237)))) ? (((0 == ((var_3 << (var_8 + 9933)))))) : (((var_9 >= (9885 > var_4)))));
        var_20 ^= var_2;
        var_21 = (((min(var_1, (arr_0 [i_2])))) ? var_8 : ((988291185 ? 1 : (arr_0 [i_2]))));
        var_22 = -var_9;
    }
    var_23 ^= (~4844137894796290803);
    #pragma endscop
}
