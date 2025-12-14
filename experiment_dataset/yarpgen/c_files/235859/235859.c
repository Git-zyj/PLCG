/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((var_16 ? -var_3 : ((min(var_0, var_3)))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (max((arr_1 [7] [1]), ((-((-(arr_0 [i_0] [0])))))));
        arr_2 [2] [0] = 1043938476;
    }
    #pragma endscop
}
