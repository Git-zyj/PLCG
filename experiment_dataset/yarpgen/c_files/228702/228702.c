/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((var_0 >> (var_7 + 4521)));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0 - 1]) >> (((arr_1 [i_0 - 4]) - 7206))));
        var_12 = var_4;
        arr_2 [i_0] [i_0] = (min(((-(arr_0 [i_0]))), (((((arr_0 [i_0]) ? -1 : 83))))));
    }
    var_13 = var_3;
    #pragma endscop
}
