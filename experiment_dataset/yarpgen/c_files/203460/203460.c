/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_19 *= (max(var_6, ((max(var_10, var_5)))));
        var_20 = (((((1366943752 / (var_9 & var_3)))) ? ((((min(var_14, var_3))) / ((var_2 ? (arr_1 [1] [1]) : (arr_0 [i_0]))))) : (((((((-2147483637 ? 1575367440 : -3538651032130231540))) > (min(var_17, (arr_0 [2])))))))));
        var_21 = (max(((var_16 ? var_1 : (((2847791970 ? 1240421471 : (arr_1 [i_0] [1])))))), (((var_16 + (arr_1 [i_0] [i_0]))))));
    }
    #pragma endscop
}
