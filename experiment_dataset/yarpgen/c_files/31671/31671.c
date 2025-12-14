/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((var_3 ? 65535 : 0)) > var_8)));
    var_19 = var_6;
    var_20 ^= ((var_10 ? (var_17 || var_16) : var_7));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (max(var_21, (((+(((arr_0 [i_0]) ? (var_9 % var_6) : (min(var_6, (arr_1 [i_0]))))))))));
        var_22 = (((arr_0 [i_0]) ? (((((~var_10) >= ((var_16 ? var_9 : (arr_0 [i_0]))))))) : (((((var_6 ? var_1 : 65535))) ? (var_14 ^ 4155936006) : 121))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_23 = ((!((max(1, (arr_3 [i_1]))))));
        var_24 = (arr_2 [i_1]);
        arr_4 [i_1] = (((((arr_2 [i_1]) * (((139031295 >= (arr_2 [i_1])))))) != (arr_2 [i_1])));
        var_25 = (((((~var_2) + -0))) ? (max(1, (min(var_6, (arr_3 [i_1]))))) : ((((max(var_1, (arr_2 [i_1]))) / (arr_2 [i_1])))));
    }
    #pragma endscop
}
