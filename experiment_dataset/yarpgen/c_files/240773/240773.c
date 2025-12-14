/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [16] = 0;
        var_20 = var_16;
        arr_5 [i_0] [15] = (((((-8175931383271117160 ? 123 : -116))) ? var_0 : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 = max(4398046511096, (((-116 ? 951564217 : -32742))));
        var_22 = (((((var_14 ? (arr_7 [i_1]) : (arr_7 [i_1])))) ? (arr_2 [i_1]) : (((arr_2 [i_1]) ? 9223372036854775795 : 10714573640812881339))));
        var_23 *= (max(5631371207073464113, 116));
    }

    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] = 4285532322;
        arr_11 [i_2] = 4398046511096;
        arr_12 [i_2] = ((+((((var_2 + 2147483647) >> (-127 + 155))))));
    }
    var_24 = (min(var_24, var_11));
    var_25 *= (((((10714573640812881317 ? ((1020 ? var_2 : 3343403078)) : ((min(var_6, var_4)))))) ? var_7 : (~var_4)));
    #pragma endscop
}
