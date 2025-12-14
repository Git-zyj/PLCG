/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1143729909405915608;
    var_14 = 5;
    var_15 ^= (min(((max(var_5, var_5))), ((var_10 ? var_2 : var_0))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [1] = (((arr_1 [i_0]) + (max(0, 17303014164303636007))));
        var_16 = ((((min((((arr_0 [i_0]) | 4032)), (arr_1 [i_0])))) ? ((~(arr_0 [i_0 + 1]))) : ((~((var_11 ? (arr_1 [i_0]) : (arr_0 [8])))))));
    }
    #pragma endscop
}
