/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 ^= (arr_1 [i_0]);
        arr_2 [10] = ((((~(-127 - 1))) & (arr_1 [i_0])));
        arr_3 [1] = (((((~(arr_1 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_4 [i_0] = (max(((33386 ^ (arr_0 [i_0]))), ((max((arr_1 [i_0]), -1697140384)))));
    }
    var_14 -= (((((33386 - ((min(32150, var_5)))))) ? (33386 + 4724) : (min(var_10, var_12))));
    var_15 = var_9;
    var_16 = var_9;
    #pragma endscop
}
