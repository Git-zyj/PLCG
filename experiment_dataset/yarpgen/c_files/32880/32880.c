/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [4] = (((min(((var_7 ^ (-9223372036854775807 - 1))), -22351)) + (((((max(var_6, var_7))) ? 0 : var_10)))));
        arr_4 [i_0] = 127;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = ((((((var_6 ? var_11 : var_11)))) ? (((1362713205 ? 22350 : -722754341))) : (min(5859876509390972417, 1097288208))));
        arr_8 [i_1] = var_14;
        arr_9 [i_1] = ((!(((1097288184 ? var_9 : (((31672 ? var_0 : var_11))))))));
        var_15 = 17;
    }
    var_16 = ((-var_2 + 2147483647) << (((!(~29625)))));
    var_17 = var_13;
    var_18 = (min(48427, 8836003962252390390));
    #pragma endscop
}
