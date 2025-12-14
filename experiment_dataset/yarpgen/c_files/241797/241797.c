/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_0 / var_15) > var_8)))) >= (((var_11 || var_3) ? var_0 : var_11))));
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (((((((max(64, (arr_0 [i_0])))) || (var_12 * 994247885)))) <= 98));
        var_19 ^= -17039;
        var_20 |= ((~(((arr_0 [i_0]) << (((arr_0 [i_0]) - 4772))))));
        var_21 += ((~((var_14 ? var_10 : (65 / 64)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = (min(((max((arr_0 [i_1]), (arr_0 [i_1])))), (((((0 ? 6 : 29))) ? (arr_0 [i_1]) : (var_4 * var_0)))));
        var_22 ^= (max((arr_0 [i_1]), (arr_3 [i_1])));
        var_23 = ((min(var_9, (arr_1 [i_1]))));
    }
    #pragma endscop
}
