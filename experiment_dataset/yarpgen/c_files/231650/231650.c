/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 *= max(var_8, (max(((var_11 ? var_0 : (arr_1 [i_0] [i_0]))), (arr_0 [i_0]))));
        var_18 *= var_11;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_5 [6] = (min((((var_16 < ((min(var_0, var_4)))))), ((var_2 ? (min(11, 4294967279)) : (arr_4 [1] [1])))));
        var_19 = (+-4294967279);
        arr_6 [i_1] [2] = var_3;
    }
    var_20 = ((((max(var_7, var_12)))));
    #pragma endscop
}
