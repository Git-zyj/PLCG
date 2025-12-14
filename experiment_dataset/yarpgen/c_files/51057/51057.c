/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 -= ((((((618954691 ? 10253080595439360034 : 3676012604)))) ? (var_8 || var_18) : var_1));
    var_22 &= (min(((~((var_7 ? var_18 : var_0)))), (((!(((var_8 ? var_15 : var_13))))))));
    var_23 = var_0;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_24 = ((((arr_0 [i_0 + 1] [3]) ? (((arr_1 [i_0] [i_0]) % 1)) : (192 + var_8))));
        var_25 = (~var_4);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_26 &= ((((((arr_4 [i_1]) ? (var_11 & var_9) : ((min(3720951447, (arr_5 [i_1] [i_1]))))))) ? (~var_9) : (max((~-127), (arr_4 [i_1])))));
        var_27 = (max(var_7, (max(var_19, (arr_4 [i_1])))));
    }
    #pragma endscop
}
