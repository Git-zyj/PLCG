/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (arr_0 [14] [i_0]);
        var_18 = 576460752303423487;
    }
    var_19 = (var_11 == var_2);
    var_20 = (((var_15 ? ((9789692519165998289 ? var_11 : var_1)) : var_12)));
    var_21 = ((var_11 ? var_2 : (((1 ? 1 : -1202978599)))));
    #pragma endscop
}
