/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= max(var_7, -5029219313142776569);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 16;
        var_18 &= (min((((!(arr_1 [i_0])))), (((((((arr_0 [i_0]) ? (arr_0 [i_0]) : -1077739068)) + 9223372036854775807)) >> (((arr_1 [i_0]) - 5223082991011671459))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_19 = (!469568700);
        var_20 *= ((max(((min(var_12, -50))), (((arr_4 [i_1] [i_1]) ? -9108593769695511119 : (arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 = (arr_7 [i_2] [i_2]);
        var_22 = (arr_8 [i_2]);
    }
    #pragma endscop
}
