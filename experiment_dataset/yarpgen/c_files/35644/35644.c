/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_11;
    var_18 = (min(var_16, var_2));
    var_19 = var_1;
    var_20 = var_7;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((min(var_16, ((min(28131, var_13))))), ((max(var_0, var_3)))));
        var_21 = (max((max(2527525659, (arr_1 [i_0 + 1]))), (max(52, (arr_1 [i_0 - 1])))));
        var_22 += (max((max(var_9, (min(10832385968561710069, (arr_0 [1]))))), ((min(((max((arr_0 [1]), -123))), (min((arr_0 [10]), (arr_1 [2]))))))));
    }
    #pragma endscop
}
