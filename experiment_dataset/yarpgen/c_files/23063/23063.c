/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_3, ((1 ? 1 : 30190))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = 1;
        arr_5 [i_0] = 15;
        var_11 = (min((((var_6 < (arr_0 [i_0])))), (min((arr_0 [i_0]), ((((arr_2 [i_0]) & -1)))))));
        var_12 = ((var_3 ? (((((var_4 ? var_1 : -1710295535))) ? var_8 : 0)) : (((~((20821 ? 159 : 1)))))));
        arr_6 [i_0] = (arr_3 [i_0]);
    }
    var_13 = var_4;
    var_14 = var_1;
    #pragma endscop
}
