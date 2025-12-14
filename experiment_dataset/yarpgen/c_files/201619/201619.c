/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (max((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0]))), (((arr_1 [i_0] [i_0]) + var_4))));
        arr_2 [16] = (((((arr_0 [i_0] [i_0]) ? ((var_13 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (~-1916431894))) ^ (((arr_1 [i_0] [21]) ? (arr_1 [i_0] [i_0]) : (var_16 != var_15)))));
    }
    var_19 = (max(var_19, ((((((((max(var_4, var_7))) ? ((max(var_9, var_6))) : (min(var_13, var_9))))) ? ((((var_15 ? var_0 : var_17)) ^ (~var_1))) : ((((((var_7 ? var_0 : var_11))) ? (~var_2) : (max(var_15, var_11))))))))));
    var_20 = (max(var_20, (((var_2 != (min((max(var_10, var_13)), ((min(var_15, var_6))))))))));
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                arr_7 [i_1] [5] = (((((min((arr_6 [i_1] [i_2] [i_1]), var_1)))) ? var_16 : (((arr_0 [i_1 + 1] [i_1 - 2]) + var_12))));
                var_21 = (((((max(var_15, (arr_6 [i_1] [i_1] [i_1])))) ? ((min(var_3, (arr_4 [i_1 - 2])))) : (max(var_0, var_16)))));
            }
        }
    }
    #pragma endscop
}
