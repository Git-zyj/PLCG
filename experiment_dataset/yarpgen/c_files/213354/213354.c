/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, (((((max((max(var_2, (arr_1 [i_0]))), 783334776))) ? ((~((var_3 ? (arr_0 [i_0]) : (arr_1 [i_0]))))) : (arr_1 [i_0]))))));
        arr_2 [1] [i_0] = ((((!(arr_1 [9]))) ? var_10 : ((min(((-737347156 ? 29144 : 84)), var_7)))));
    }
    var_21 = -2147483645;
    var_22 = var_14;
    #pragma endscop
}
