/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_4;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (arr_0 [5]);
        var_20 = (max(var_20, (arr_0 [5])));
        var_21 ^= ((max(((var_5 ? (arr_0 [i_0]) : (arr_0 [i_0]))), ((0 ? 55160 : (arr_0 [4]))))));
        arr_2 [1] &= ((-(((arr_0 [i_0 + 1]) % (((max(var_13, (arr_1 [i_0 + 1] [i_0])))))))));
    }
    #pragma endscop
}
