/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(19650, 1782038909));
        arr_2 [i_0] = ((((min((arr_1 [i_0]), var_11))) ? ((((max((arr_0 [i_0]), (arr_1 [i_0]))) == (arr_0 [i_0])))) : ((var_10 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_17 = (min(var_3, var_13));
    var_18 = -var_2;
    var_19 = var_6;

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = (((arr_4 [i_1]) ? (arr_6 [i_1]) : (((!(arr_4 [1]))))));
        var_21 = ((-(arr_4 [i_1])));
    }
    #pragma endscop
}
