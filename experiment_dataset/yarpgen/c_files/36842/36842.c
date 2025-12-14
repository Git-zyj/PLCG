/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 &= ((~((((((arr_1 [i_0]) + 3793641503))) ? (((~(arr_1 [i_0])))) : 11567419926999764880))));
        var_14 = (max(var_14, (((~(arr_1 [i_0 - 1]))))));
        arr_2 [i_0 + 1] [i_0] = ((((-(arr_0 [i_0]))) / (((((var_0 ? var_11 : (arr_0 [i_0])))) ? ((max(501325799, 3))) : (arr_0 [1])))));
    }
    var_15 = (((!4294967280) ? var_4 : (((var_3 * var_5) / 1))));
    #pragma endscop
}
