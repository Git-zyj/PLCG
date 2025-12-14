/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [20] [20] = 224;
        arr_3 [i_0] = 65523;
        var_10 = ((33627 ? ((64 ? (arr_0 [1] [8]) : 33627)) : ((+(((arr_0 [i_0] [i_0]) ? 65523 : 2824))))));
    }
    var_11 = ((var_2 ? var_6 : 1));
    var_12 = 1;
    var_13 = var_7;
    #pragma endscop
}
