/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min(4268113024775169203, var_5)))));
    var_13 = (max(var_13, var_0));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_14 = (min(var_14, ((max(((~((18446744073709551610 ^ (arr_0 [i_0 - 1] [i_0]))))), (min((!58743), (arr_0 [i_0 + 1] [i_0 + 1]))))))));
    }
    var_15 = (((min(var_11, var_11))));
    #pragma endscop
}
