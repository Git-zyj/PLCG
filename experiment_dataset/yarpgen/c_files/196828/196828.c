/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (0 >= 15719634711917025677);
    var_14 = (max(var_14, var_3));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((arr_1 [i_0]) || ((!(arr_1 [i_0])))))), 1));
        var_15 = (min(var_15, 162));
        var_16 = (min(var_16, 2727109361792525919));
        arr_3 [i_0] &= (arr_1 [i_0]);
    }
    #pragma endscop
}
