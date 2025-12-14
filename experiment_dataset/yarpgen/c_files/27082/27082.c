/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (31 >> var_6);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (max(var_13, ((((max((max((arr_1 [i_0]), (arr_0 [1]))), (arr_0 [i_0]))) >> (((((((-(arr_0 [0])))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : ((-(arr_1 [i_0]))))) - 834263701)))))));
        var_14 = ((~(((!(arr_1 [i_0]))))));
    }
    var_15 = (max(((((var_5 ? var_9 : var_9)))), 18446744073709551615));
    var_16 = (max(var_5, var_1));
    var_17 = (max(var_2, (((((var_4 ? var_3 : var_3)) >> ((((max(65535, var_9))) - 65535)))))));
    #pragma endscop
}
