/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 += (~39);
        var_22 = 3291;
        var_23 &= (arr_1 [i_0]);
        var_24 ^= (1 ? 6731261958332580649 : (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [12] |= ((arr_3 [i_1]) ? (((((max(var_17, 2277449779))) ? ((((-1729674396 != (arr_1 [i_1]))))) : (arr_0 [i_1])))) : (max((var_8 != 2017517516), 2305843009213693952)));
        var_25 = (-92 >= 16776905007686161835);
    }
    #pragma endscop
}
