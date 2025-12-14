/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((~var_11) ? (-24891 ^ var_0) : var_9))));
    var_14 |= ((((var_0 ? var_8 : 242)) >> (((max((min(var_10, var_5)), ((max(var_11, var_8))))) - 37840))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0] [i_0])));
        var_15 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = 2667878464;
    }
    var_16 = 128;
    #pragma endscop
}
