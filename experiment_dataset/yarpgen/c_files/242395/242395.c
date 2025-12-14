/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((((2147483647 ? (arr_0 [i_0]) : var_2))) < (max(var_13, var_10))));
        arr_2 [i_0] = (((((!(18446744073709551615 + 1)))) != (((1 == (((arr_1 [8]) ? var_9 : (arr_0 [10]))))))));
        arr_3 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [15])));
        var_15 += (arr_0 [18]);
    }
    var_16 = var_0;
    var_17 = var_0;
    #pragma endscop
}
