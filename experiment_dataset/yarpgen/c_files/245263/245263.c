/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 ^= arr_3 [i_0];
        var_14 ^= ((112 ? 20853 : (((arr_1 [i_0]) ? var_7 : var_12))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_15 ^= (((arr_6 [i_2]) | var_8));
            var_16 ^= var_12;
            var_17 ^= (((((var_2 ? (arr_7 [i_2]) : (arr_7 [i_1])))) ? ((1 & (arr_7 [i_1]))) : (arr_4 [i_1] [i_2])));
        }
        var_18 ^= ((-var_10 ^ ((-(arr_7 [i_1])))));
    }
    var_19 ^= ((var_10 ? (!var_12) : (~2856422669)));
    #pragma endscop
}
