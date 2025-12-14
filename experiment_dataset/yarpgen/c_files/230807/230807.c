/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [10]) ? (((!(arr_0 [i_0])))) : (arr_1 [i_0 + 1])));
        arr_3 [9] [i_0 - 1] = (arr_1 [i_0]);
    }
    var_15 |= ((((min(var_4, var_2))) ? ((min(var_1, (!-16292)))) : ((((min(-1, 733828815))) ? (min(var_14, var_10)) : var_5))));
    var_16 = var_11;
    #pragma endscop
}
