/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 ? (~var_6) : var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((1045904881808080821 ? 7531722299235052217 : (((~(arr_0 [i_0] [i_0]))))));
        var_17 = (((arr_1 [i_0]) ? (((arr_0 [i_0] [i_0]) ? var_13 : (arr_1 [i_0]))) : (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
