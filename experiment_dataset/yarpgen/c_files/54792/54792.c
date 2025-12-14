/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max(var_4, ((2958743958 >> ((((max(var_8, var_10))) - 87))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 = 0;
        arr_4 [i_0] = var_6;
        var_13 &= (((arr_1 [i_0 + 1] [i_0 + 1]) / (((-((min((arr_2 [4]), (arr_2 [1])))))))));
        var_14 = (max(var_14, (((min(var_4, (arr_2 [8])))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_15 += (min(((1 * (arr_0 [14]))), (arr_2 [14])));
        var_16 *= (!var_4);
    }
    #pragma endscop
}
