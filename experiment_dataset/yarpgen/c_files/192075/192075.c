/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 ? ((max(var_7, (9223372036854775807 | var_4)))) : (max((((-9223372036854775807 ? var_13 : 1))), var_11))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min((((!(arr_0 [i_0])))), (min((arr_1 [i_0]), var_1)));
        var_15 = ((!((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [5] = (((((((((((-9223372036854775807 - 1) && 1)))) != (arr_1 [i_0]))))) + (((1114015730646668127 ? 1 : var_10)))));
        var_16 ^= min((((~0) - (arr_0 [i_0]))), -var_7);
    }
    #pragma endscop
}
