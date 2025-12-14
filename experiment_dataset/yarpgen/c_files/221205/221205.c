/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(((((arr_0 [i_0] [i_0]) != (min(1423052596046814186, var_11))))), ((((min((arr_1 [5]), 7673891043550027805))) ? ((17023691477662737429 + (arr_1 [i_0]))) : ((min(0, var_13)))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_16 += (arr_3 [9]);
            arr_4 [i_0] [i_0] = var_6;
        }
        var_17 = (min(var_17, 281466386776064));
    }
    var_18 = var_9;
    var_19 = (min(var_6, (min((1 >= 55), 10))));
    var_20 = (max(120, ((min(1, 0)))));
    #pragma endscop
}
