/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 |= (min(var_15, -var_4));
    var_18 = (~var_9);
    var_19 = 14095790198939302783;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (!14095790198939302805);
        var_21 |= (min((arr_0 [i_0] [i_0]), ((((min((arr_1 [i_0] [i_0]), var_1))) ? (max(var_4, (arr_0 [i_0] [10]))) : (max((arr_0 [i_0] [6]), var_1))))));
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [9]) : (arr_0 [10] [2])))) && (((-(arr_0 [i_0] [i_0]))))));
    }
    #pragma endscop
}
