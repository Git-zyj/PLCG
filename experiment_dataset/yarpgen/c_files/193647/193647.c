/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 42935;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = var_6;
        var_18 = (max((((arr_3 [i_0 - 3]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 2]))), (arr_3 [i_0 - 3])));
        arr_5 [i_0] = (max((22606 % 255), 22604));
    }
    var_19 *= var_16;
    #pragma endscop
}
