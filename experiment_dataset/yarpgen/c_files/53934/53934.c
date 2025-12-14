/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(3732948851, ((((2152 == var_6) ^ (min(var_10, var_3)))))));
    var_12 = (max(-28611, var_8));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_8;
        var_13 = (4294967295 && 1);
        var_14 = (arr_1 [6]);
    }
    #pragma endscop
}
