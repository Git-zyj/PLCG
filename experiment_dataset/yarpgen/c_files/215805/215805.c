/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 -= (arr_1 [2] [i_0]);
        arr_2 [i_0] [i_0] = min(((((((arr_0 [i_0]) ? (arr_1 [i_0] [6]) : 618400321))) ? (arr_0 [i_0]) : (max((arr_0 [i_0]), 8601285483077194481)))), (max(-618400299, (((arr_0 [i_0]) ? (arr_1 [i_0] [8]) : 13264359504582859053)))));
    }
    var_19 = (min(var_19, ((((((-(~var_11)))) ? var_3 : var_5)))));
    var_20 = ((var_2 >> (var_0 - 62127)));
    #pragma endscop
}
