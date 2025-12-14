/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_1;
    var_12 = (((-var_8 ? (min(144115188075724800, 36024398972452864)) : (((var_4 ? var_0 : 1962696687))))) - 2332270602);

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (--1962696706);
        arr_3 [12] [12] &= (arr_1 [i_0]);
    }
    var_13 -= 1962696687;
    #pragma endscop
}
