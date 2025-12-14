/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_18 = ((3947842050 ? -71 : (arr_0 [i_0])));
        var_19 = (arr_1 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 += (arr_4 [i_1]);
        var_21 = (max(var_21, ((((min(var_12, (arr_5 [i_1]))))))));
        var_22 = ((-(arr_5 [i_1])));
        arr_6 [i_1] = (((((-(min((arr_5 [i_1]), var_15))))) ? -var_1 : (((128 ? (arr_5 [i_1]) : (max((arr_4 [i_1]), 1276344025)))))));
        arr_7 [i_1] [i_1] = (arr_4 [i_1]);
    }
    var_23 = (min(var_23, var_13));
    var_24 = var_15;
    #pragma endscop
}
