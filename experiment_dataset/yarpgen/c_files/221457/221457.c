/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_12 && 54424);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((arr_0 [i_0]) | var_1)) : (((((min((arr_0 [i_0]), var_10))) && (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = (max((arr_1 [i_0]), (arr_0 [i_0])));
        arr_4 [16] = (arr_1 [i_0]);
        var_19 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : ((-(arr_0 [i_0])))));
        arr_5 [i_0] [i_0] = ((((((!(arr_0 [i_0]))))) <= (((((-2299879325737645891 ? 2299879325737645896 : 54424))) ? (arr_1 [i_0]) : (((max((arr_0 [9]), (arr_0 [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_20 = (arr_0 [i_1]);
        var_21 *= (~14);
    }
    var_22 = var_0;
    #pragma endscop
}
