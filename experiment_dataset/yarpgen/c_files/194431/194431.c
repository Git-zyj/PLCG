/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 1] = ((2105317320 ? -1071065275247813736 : 6538041546726409846));
        var_18 -= ((45 || (((-57 ? (((((arr_1 [i_0]) < (-9223372036854775807 - 1))))) : (arr_3 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_19 = arr_5 [i_1 + 1];
        var_20 = (arr_6 [i_1 - 3]);
        var_21 = (((((-((0 + (arr_6 [11])))))) ^ (min((min(0, (arr_0 [i_1 - 1]))), (4294967295 * 211)))));
        arr_8 [i_1 - 3] = (((var_5 + 2147483647) >> (((max((arr_1 [i_1 - 1]), var_11)) - 18446744073709551488))));
        var_22 = (max((min((var_9 % 53), 1881667814)), (arr_2 [i_1])));
    }
    var_23 = (((((-((55 ? 2147483635 : var_7))))) + ((((max(var_11, var_0))) ? (var_5 / var_6) : -1))));
    var_24 = (0 ? (((72 || var_15) >> (181 - 176))) : var_17);
    var_25 = var_9;
    #pragma endscop
}
