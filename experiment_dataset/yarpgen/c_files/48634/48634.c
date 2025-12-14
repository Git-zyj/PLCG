/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = 0;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_17 += (((var_1 + 2147483647) << (!var_8)));
        var_18 = (arr_2 [i_0]);
        var_19 = (min(((var_6 >= ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [10])))))), ((!(arr_1 [i_0 + 3])))));
        var_20 = (min((((arr_3 [i_0 + 2]) >> (((arr_2 [i_0 + 2]) - 206)))), ((~(arr_3 [i_0 + 2])))));
    }
    #pragma endscop
}
