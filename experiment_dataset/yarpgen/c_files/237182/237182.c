/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (((min(((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))), ((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) & ((~(arr_1 [i_0])))));
        var_22 -= (max(2140074100, 17528));
        arr_2 [i_0] [i_0] = (((!1) ? 1644497874 : (!-1644497877)));
        var_23 = max(var_3, (((arr_0 [i_0] [i_0]) ? (max(1644497863, 1644497877)) : ((~(arr_0 [i_0] [i_0]))))));
    }
    var_24 -= (max((((var_1 ? var_16 : var_18))), ((var_18 ? var_17 : var_16))));
    #pragma endscop
}
