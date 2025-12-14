/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_11 = (arr_0 [i_0 + 3]);
        arr_4 [i_0] = ((((var_1 ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0])))));
    }
    var_12 = ((7353704069289897421 ? (((var_4 & var_4) ? (((var_2 + 2147483647) >> (var_3 - 23631))) : var_3)) : (((18446744073709551596 || -1) ? ((max(var_6, var_4))) : var_2))));
    var_13 = 7992409419347897036;
    #pragma endscop
}
