/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((var_0 ? 22548 : 58));
        var_18 ^= ((var_3 ? (min((((!(arr_0 [i_0])))), ((var_8 ? (arr_0 [i_0]) : 1987176806)))) : ((((arr_2 [8]) ? ((((arr_1 [4]) < (arr_2 [6])))) : ((var_15 ? var_1 : var_13)))))));
        arr_4 [i_0] = 3;
    }
    var_19 = max(((((var_10 ^ var_4) || (!var_1)))), var_14);
    #pragma endscop
}
