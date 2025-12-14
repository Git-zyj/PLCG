/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = ((((((((arr_0 [i_0]) < (arr_1 [7]))) ? (arr_2 [i_0]) : ((var_15 ? 44 : -2147483639))))) ? ((-2147483640 ? var_10 : (min(10349961957423733284, 8543407749503114538)))) : ((((max(12288, 2390698100)))))));
        var_17 = ((var_1 ? ((((min(var_12, var_3))) ? ((min(1, -724334241))) : ((69 ? 86663315 : 224)))) : var_4));
        arr_3 [i_0] |= (((max(var_0, var_3)) & var_15));
        var_18 &= 924426407;
        arr_4 [i_0] [i_0] = (((min(var_5, 69))) ? 1 : var_3);
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [24] |= (max((min(1153137133994387943, (arr_7 [i_1]))), (max((var_6 & var_9), var_2))));
        arr_9 [14] |= ((((15747679213308875640 ? 499396451 : 12531833991166729826))));
        arr_10 [i_1] = (((arr_7 [i_1]) ? var_5 : (((-53248 + 2147483647) << ((((17944029765304320 ? 218 : var_0)) - 218))))));
    }
    var_19 = var_0;
    var_20 = (min((max(((var_9 ? 0 : -2433292249080413064)), var_11)), ((var_2 ? 3048928840 : ((var_7 - (-127 - 1)))))));
    var_21 += (min(var_0, ((~(max(52, var_3))))));
    #pragma endscop
}
