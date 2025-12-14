/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 += (((min((18446744073709551615 | var_4), -934341773)) * 18446744073709551610));
        var_14 &= (144115188075593728 & -934341773);
        var_15 &= (0 ? ((((arr_3 [i_0]) >= ((var_3 ^ (arr_0 [0])))))) : (max((min((arr_3 [i_0]), var_10)), (min((arr_0 [4]), 945681787)))));
        var_16 = ((((((50 ? -934341771 : -784717290)) ^ 18446744073709551615))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 = -103;
        var_18 = (min(1944810603000534263, -1));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_19 = (var_8 & 934341774);
        var_20 = ((+((-739201542 ? (arr_7 [i_2]) : (arr_7 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_21 = (min(var_21, ((((((var_7 && (arr_8 [i_3]))) ? var_3 : (arr_8 [i_3])))))));
        var_22 -= 14;
        var_23 = (arr_7 [18]);
    }
    #pragma endscop
}
