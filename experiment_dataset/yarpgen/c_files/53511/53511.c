/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_11 ? (max(var_16, var_0)) : ((min(var_5, 0))))), (((-(var_9 / var_14))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((var_11 ? 8989051517744473840 : var_7)))));
        arr_3 [i_0 + 2] [i_0] = var_16;
        arr_4 [i_0 + 2] = max((((-((min(var_12, (arr_0 [i_0 - 2]))))))), 122);
        var_19 = max(var_3, 3250444413);
        var_20 = (max((-1044522855 - 4294967287), (min(-var_4, -3250444441))));
    }
    #pragma endscop
}
