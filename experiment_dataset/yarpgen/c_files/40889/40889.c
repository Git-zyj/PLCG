/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, var_3));
        arr_2 [i_0] [i_0] = (max((((arr_0 [i_0]) ? (max(27895, var_10)) : (!var_13))), (arr_0 [i_0])));
    }
    var_16 = ((~(((!-1) ? 14001013500960029624 : ((var_6 ? -1 : var_10))))));
    var_17 = ((~((var_1 ? (var_4 - var_2) : (var_14 != -12)))));
    #pragma endscop
}
