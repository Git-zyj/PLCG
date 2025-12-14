/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 ^= (((((0 ? 105 : -78))) ? (max((var_3 % var_5), (((arr_0 [i_0]) ? var_1 : (arr_0 [i_0]))))) : ((((((!(arr_1 [5])))) <= (((arr_0 [i_0]) ? var_9 : (arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((((((((-(arr_1 [i_0])))) ? ((-(arr_1 [i_0]))) : (arr_0 [i_0])))) ? 246 : (((((var_10 | (arr_1 [10]))) == (arr_1 [i_0]))))));
        var_16 = (max(var_16, ((max(((-((~(arr_0 [i_0]))))), (arr_0 [i_0]))))));
    }
    var_17 &= ((-((-var_2 ? var_5 : var_1))));
    var_18 = var_4;
    #pragma endscop
}
