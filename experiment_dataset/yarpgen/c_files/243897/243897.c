/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (min(var_11, var_3));
    var_13 = ((((((2813609752 ? var_2 : var_0)) ? (~2813609758) : (var_11 & 44)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_14 = ((21300 ? (((arr_0 [i_0 - 1] [i_0 + 2]) % (arr_0 [i_0 + 1] [i_0 - 1]))) : 3385361094));
        var_15 &= ((-(((arr_1 [1]) ? (arr_1 [2]) : (arr_1 [2])))));
        var_16 = (((((-(arr_1 [i_0])))) ? (arr_1 [i_0]) : (((var_7 && (arr_0 [i_0 + 1] [i_0 - 2]))))));
        var_17 = ((-(arr_0 [i_0 + 1] [i_0 - 2])));
    }
    var_18 = var_8;
    var_19 = (min((((!((min(var_1, var_5)))))), (((((~13338) + 2147483647)) << (var_6 - 1)))));
    #pragma endscop
}
