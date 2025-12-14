/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max((max(var_8, 22545)), ((max(-12755, 368506706))))), (max((max(var_2, var_0)), (max(var_0, 35184372088831))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 ^= (min((min((max(var_0, var_5)), (max(-1, (arr_0 [1]))))), (max((min(1423503994, (arr_0 [2]))), (max((arr_1 [i_0]), var_0))))));
        var_12 = (min((max(((min(368506685, var_2))), (max((arr_0 [i_0]), (arr_0 [i_0]))))), (max((max(368506719, (arr_0 [i_0]))), ((min(-368506719, var_2)))))));
        arr_2 [i_0] = (max(899256593449269557, 368506706));
    }
    var_13 ^= (min((min((max(var_1, var_5)), ((max((-32767 - 1), 1))))), (min((max(var_5, var_7)), (max(var_5, var_1))))));
    var_14 = (max(((min(((min(368506706, var_1))), (min(3359291951, var_7))))), (min((max(var_0, var_1)), ((max(var_5, var_1)))))));
    #pragma endscop
}
