/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = var_2;
        arr_2 [1] [i_0] = (min((((arr_0 [i_0 + 2] [i_0]) >> (((arr_0 [i_0 + 1] [i_0 + 1]) - 44864)))), ((max((arr_0 [i_0 + 2] [i_0 + 2]), (arr_0 [i_0] [i_0 - 1]))))));
    }
    #pragma endscop
}
