/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((0 ? (((1 ? -4 : -1506639320))) : 0))) ? (max((arr_0 [i_0]), (arr_1 [i_0]))) : (!0));
        var_19 |= ((((((~(arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 9223372036854775807)) : ((max(892291204, 1))))) > ((-((1 ? -774714995 : (arr_1 [i_0]))))));
        var_20 = ((((9223372036854775807 << ((((((var_15 ? 1 : -1)) + 15)) - 14))))) ? (((((((arr_1 [i_0]) ? var_11 : (arr_0 [i_0]))) != (~371887787))))) : -var_11);
    }
    var_21 = ((((((var_4 != 1) ? ((~(-9223372036854775807 - 1))) : (5239514560487542078 ^ var_5)))) ? ((var_15 ? var_13 : ((-1 ? 4647906975067844464 : 0)))) : var_8));
    #pragma endscop
}
