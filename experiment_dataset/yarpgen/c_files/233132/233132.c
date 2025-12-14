/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((min(var_10, (arr_0 [i_0 + 2]))))) - -var_3))) ? ((min((max(var_5, (arr_1 [i_0]))), (max((arr_0 [i_0]), var_5))))) : (((!((var_7 >= (arr_2 [i_0 + 2]))))))));
        var_13 = ((-(var_3 + var_4)));
    }
    #pragma endscop
}
