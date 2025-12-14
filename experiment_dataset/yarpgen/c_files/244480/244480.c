/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((128 ? var_9 : var_0))), (((23 ? var_9 : var_2)))));
    var_20 = (((var_5 < 4459623168387316894) - ((var_5 ? (204 && 204) : ((max(var_16, var_3)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : ((((((arr_1 [i_0]) / var_5))) ? var_16 : 22632))));
        arr_2 [i_0] = ((((max((arr_0 [i_0]), (((!(arr_0 [i_0]))))))) ? (arr_1 [21]) : (((!(((87 & (arr_1 [i_0])))))))));
        var_22 = (arr_0 [i_0]);
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = var_4;
    }
    #pragma endscop
}
