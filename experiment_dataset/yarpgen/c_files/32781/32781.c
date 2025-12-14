/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (~(max((~var_5), var_14)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max(((var_11 ? (arr_1 [i_0]) : (arr_0 [i_0]))), ((((((arr_0 [i_0]) - var_5))) ? ((~(arr_0 [i_0]))) : (arr_0 [i_0])))));
        var_16 = (min(((((max(var_11, var_12))) ? var_0 : (((arr_0 [i_0]) - var_5)))), (((arr_0 [i_0]) ? ((-(arr_1 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_1))))));
    }
    var_17 = (min((max(((var_2 ? var_10 : var_1)), var_1)), (719503847 | 1)));
    #pragma endscop
}
