/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_12 = (max(52622, (max((arr_1 [i_0 + 1]), (arr_1 [3])))));
        arr_3 [i_0] = (min((arr_2 [i_0]), 24484));
        var_13 = (min(var_13, 22));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (min((arr_4 [i_1]), (arr_4 [i_1])));
        var_14 = 233;
        var_15 = (min((max((arr_5 [i_1]), (arr_5 [i_1]))), (min((arr_5 [i_1]), (arr_5 [i_1])))));
        var_16 = (arr_4 [i_1]);
    }
    var_17 = max(var_6, var_9);
    #pragma endscop
}
