/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_7;
    var_17 ^= ((~((~((max(var_5, var_7)))))));
    var_18 |= ((((max((max(var_12, var_13)), var_4))) ? var_11 : ((-((var_9 ? var_9 : var_8))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 *= (min(((max(var_7, var_11))), (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_20 ^= (min(((-(((arr_0 [i_0]) ? var_9 : var_7)))), var_8));
        var_21 = (max(var_21, (((var_8 ? (((~var_14) ? (arr_2 [i_0]) : var_9)) : var_13)))));
        var_22 = (min(var_22, (((var_14 ? (arr_2 [i_0]) : var_14)))));
    }
    var_23 = (max(var_23, (((((max(-var_9, (min(4294967295, 245))))) ? (min(((max(17, 130023424))), (min(var_3, var_9)))) : var_5)))));
    #pragma endscop
}
