/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = ((var_12 | (((-((max((arr_0 [i_0]), 64809))))))));
            var_14 = ((~((((arr_3 [i_1] [i_1] [i_0]) != 7002828898856110253)))));
            arr_4 [i_0] [i_0] = var_1;
        }
        var_15 = (((((2691 ? -2691 : 7002828898856110249))) ? ((max(-2675, (arr_2 [i_0])))) : (arr_0 [i_0])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_16 = 2702;
        var_17 = (((((-268435456 ? (arr_5 [i_2] [i_2]) : (arr_5 [0] [i_2])))) ? ((var_12 ? (arr_1 [i_2]) : (arr_2 [i_2]))) : ((max((arr_2 [i_2]), var_7)))));
    }
    var_18 = (max((((!0) ? (~var_7) : var_12)), (((var_10 ? ((var_11 ? var_11 : var_1)) : (!var_9))))));
    var_19 &= (((12651972773561197443 + ((min(-2692, 25))))));
    #pragma endscop
}
