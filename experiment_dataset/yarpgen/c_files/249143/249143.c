/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_11, (var_4 ^ var_7)));
    var_13 = (max(var_13, ((max(((min(var_2, var_8))), -21990)))));
    var_14 = (min(var_14, ((((43 ? 17373415326370475534 : -0))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = ((-((1 ? var_11 : (arr_0 [i_0])))));
        arr_3 [i_0] |= (max((min(var_1, (arr_1 [i_0] [i_0]))), ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    var_16 = var_1;
    #pragma endscop
}
