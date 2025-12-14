/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-(max(var_3, var_0))))) ? var_12 : var_0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = 699223325;
        var_15 = 99;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = ((((min((arr_0 [i_1]), (arr_5 [i_1] [i_1])))) > (~255)));
        var_17 = (max(var_17, (arr_5 [15] [17])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_18 = max((arr_7 [i_2]), (arr_1 [i_2]));
        var_19 = var_9;
    }
    var_20 = (min(var_0, ((((255 ? 4294967043 : var_9)) - var_1))));
    #pragma endscop
}
