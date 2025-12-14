/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(((189 ? 8791989333516819854 : 63563)), (((var_1 ? (arr_1 [i_0]) : 2)))))) ? (((((var_9 ? 2 : 65532))) ? var_3 : (arr_1 [i_0 - 2]))) : (max(var_2, ((var_0 ? var_5 : (arr_0 [i_0])))))));
        var_11 = ((~(arr_1 [i_0])));
        arr_3 [i_0] = (((arr_0 [i_0]) ? (((arr_0 [i_0]) / (min(1599539976, var_5)))) : var_2));
    }
    var_12 = ((!(15 % 2)));
    var_13 = (!var_9);
    #pragma endscop
}
