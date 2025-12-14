/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_2 + 2147483647) >> (var_0 + 1947203570397906124)));
    var_12 = 65535;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_7;
        var_13 = (min((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0]))), ((max((min((arr_1 [i_0]), 1)), ((min(0, (arr_0 [i_0])))))))));
        var_14 = var_1;
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = ((((((((1293007698 >> (3001959587 - 3001959586)))) & ((-4754824192138735005 - (arr_1 [i_1])))))) ? (~var_7) : ((min(0, 42737)))));
        var_15 = ((((arr_6 [i_1]) ? ((var_0 + (arr_6 [i_1 + 1]))) : (arr_6 [i_1]))));
        var_16 = ((((max((max(var_9, (arr_1 [i_1 + 1]))), (-26298 <= 127)))) && (((((max(4754824192138735005, (arr_6 [13])))) ? 65523 : (((arr_5 [i_1 - 2]) / var_1)))))));
    }
    var_17 -= var_7;
    var_18 += (max(1, 263831736));
    #pragma endscop
}
