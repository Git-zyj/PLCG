/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? -var_1 : var_5));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = ((~((-163 ? var_2 : (arr_1 [i_0])))));
        var_12 = (max(var_12, (arr_0 [i_0])));
        var_13 |= (((((-(((arr_0 [12]) ? 163 : (arr_0 [i_0])))))) ? ((-(arr_2 [i_0]))) : ((((((1225330632 ? var_3 : var_2))) ? ((1225330636 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : 1)))));
    }
    var_14 ^= (max(((var_2 ? var_6 : ((max((-127 - 1), var_4))))), ((((min(1, 1279652901)) / var_2)))));
    #pragma endscop
}
