/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((!(((((min(var_1, 7956707330945828257))) ? ((min(-1, -1))) : (min(1, var_7))))))))));
    var_11 = (((((min(var_4, 1)) ? (min(var_9, 127)) : ((min(-530634650300246437, 1)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = ((((arr_0 [i_0] [i_0 + 2]) ? (!-2950429583144887061) : ((((arr_0 [i_0] [i_0]) && -5146365292389968408))))));
        var_13 += ((((((~((-10937 ? var_0 : -9384)))) + 2147483647)) << (((((max(1, 13389672267999489630)) & (arr_1 [6]))) - 74))));
        var_14 = (min(var_14, 3802783438));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 += ((((((((1712287665 ? (arr_2 [i_1] [i_1]) : 999839648))) ? 31065 : 41975))) ? (((((arr_3 [i_1]) ^ 9)) & ((((arr_4 [i_1]) ? 4095 : (arr_2 [i_1] [i_1])))))) : (((var_3 && 676762659306213015) - (((arr_3 [i_1]) ? 412005410 : (arr_3 [i_1])))))));
        var_16 = (min(var_16, (((min((min(187, 15414801156918060747)), 10317763173206251244))))));
        arr_5 [22] [22] = ((arr_3 [i_1]) ? ((min((4294967282 || 18446744073709551603), (arr_4 [i_1])))) : var_3);
        var_17 = (((min((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1]))), 2166344196939925611)) <= (min((~-3347857920487261229), (min(288230375077969920, 244))))));
        arr_6 [17] |= (~6349750554415593010);
    }
    #pragma endscop
}
