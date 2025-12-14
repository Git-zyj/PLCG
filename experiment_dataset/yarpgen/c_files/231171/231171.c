/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (max(var_12, (((-32 & -32) | (((arr_2 [i_0]) | var_9))))));
        arr_5 [i_0] [i_0] = (((((((-2514683265541182072 % var_8) != var_5)))) <= -7622839499216506393));
        arr_6 [i_0] [7] = (min(20933, 21989));
    }
    var_13 = -var_8;
    #pragma endscop
}
