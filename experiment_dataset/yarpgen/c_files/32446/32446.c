/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((4023098053 - (((min(11659109544803813907, -7160548740565695871)) * 4023098047))));
    var_19 = (((((max(-7160548740565695888, var_4)))) ? (((var_17 ? 4023098064 : var_14))) : var_7));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 *= (max((min(271869249, (arr_0 [i_0]))), (((arr_1 [i_0]) | (max(var_3, var_17))))));
        var_21 = ((~(((max((arr_1 [i_0]), var_16)) >> (((arr_0 [13]) - 7719797885221251950))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = ((min((arr_3 [i_1]), var_12)));
        var_23 *= (max(var_3, 34351349760));
        var_24 = (var_8 ? var_13 : (min((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))));
        var_25 *= ((~(((arr_2 [i_1] [i_1]) & (arr_2 [6] [i_1])))));
        var_26 = (max(var_26, (arr_2 [i_1] [i_1])));
    }
    var_27 = var_8;
    var_28 *= var_11;
    #pragma endscop
}
