/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 = (max(var_13, ((min((((1 % var_10) & var_1)), (min(1, (((arr_0 [i_0] [8]) / (arr_2 [i_0] [i_0]))))))))));
        arr_3 [i_0] = var_8;
    }
    var_14 = (1 ^ 1);
    var_15 = (min(1, ((!(var_6 < var_11)))));
    #pragma endscop
}
