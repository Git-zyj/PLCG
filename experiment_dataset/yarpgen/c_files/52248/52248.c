/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min(((max(var_7, 14))), var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (max(((var_3 ? (((-(arr_0 [i_0])))) : (min(-21995, var_0)))), (((-(min(var_5, 24911)))))));
        arr_3 [i_0] [i_0] = (var_5 % -24887);
        var_13 = ((-21 ? 9223372036854775807 : 4294967295));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((min((arr_1 [i_1] [i_1]), (min(8998603604225972301, var_6))))) ? (((var_9 ? (arr_5 [i_1] [i_1]) : ((var_2 ^ (arr_1 [i_1] [i_1])))))) : (max((arr_5 [i_1] [i_1]), (arr_4 [i_1] [i_1])))));
        var_14 = (max(var_14, var_6));
        arr_7 [i_1] &= (arr_5 [i_1] [i_1]);
        arr_8 [i_1] = (max((max((((-9223372036854775807 - 1) ? (arr_4 [i_1] [i_1]) : var_0)), var_3)), (arr_4 [i_1] [i_1])));
    }
    var_15 = (((((var_0 ? var_2 : ((var_6 ? var_1 : 29))))) ? var_5 : ((var_5 - (var_1 > var_4)))));
    var_16 = ((var_9 ? (max(var_3, 24907)) : -16820));
    #pragma endscop
}
