/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 *= ((!((max(((-(arr_2 [12] [i_0]))), var_10)))));
        var_17 = 2;
        arr_3 [i_0] = ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (max(var_18, (((((((24 ? 3771081179 : 128)) * (((arr_2 [1] [i_1]) / (arr_5 [i_1] [i_1]))))))))));
        var_19 = ((!((((((18446744073709551591 ? (arr_5 [i_1] [i_1]) : (arr_1 [14])))) ? (~1907638060) : var_15)))));
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
        var_20 = arr_1 [10];
    }
    var_21 = var_13;
    #pragma endscop
}
