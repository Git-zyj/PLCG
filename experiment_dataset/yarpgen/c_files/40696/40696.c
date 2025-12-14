/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (min((((var_0 ? (arr_2 [i_0]) : (min(var_5, 0))))), (((var_2 / 99) ? 4 : (((arr_1 [i_0]) ? 19 : 209))))));
        arr_4 [i_0] = ((+((var_10 ? (arr_3 [i_0]) : 402613103))));
    }
    var_12 = (((((((((var_1 ? var_10 : 29815))) ? var_5 : ((min(35721, 85))))) + 2147483647)) >> (((min(21752, var_9)) - 21744))));
    var_13 = (((((((min(var_5, 1))) ? (min(3701207447, var_7)) : 209))) ? (209 - var_0) : (!172)));
    var_14 = (4023067564545776319 ? (min(((var_10 << (var_3 + 8187258280063195308))), var_6)) : (min(var_1, ((var_3 ? 0 : var_6)))));
    var_15 &= (((((~-4023067564545776319) ? (min(var_9, 35711)) : (~19200))) >> ((((var_10 ? var_4 : -43)) - 11264365924317795724))));
    #pragma endscop
}
