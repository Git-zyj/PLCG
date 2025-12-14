/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((!(!11671330873098204964)));
        arr_3 [i_0] [i_0] = min((max(((max((arr_0 [i_0]), 149))), (min(var_9, (arr_0 [i_0]))))), ((((arr_0 [i_0]) != (arr_0 [i_0])))));
        arr_4 [i_0] = (max((min((min((arr_1 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0]))), ((((arr_0 [i_0]) != 4949)))));
        var_21 ^= var_4;
    }
    #pragma endscop
}
