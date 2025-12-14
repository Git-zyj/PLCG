/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1496962594;
    var_11 = (max(var_11, ((((((min(13005210910491563809, 17740)) >> (17758 != 5441533163217987826))) | 47795)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] &= ((((((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_7))) ? var_4 : var_2))) ? (max((min((arr_0 [i_0] [i_0]), var_5)), (14809106890483022022 * 47803))) : (((var_7 - var_0) ? (17 - var_8) : var_5)));
        var_12 = ((-(min(-32, ((-(arr_1 [i_0] [i_0])))))));
        var_13 = (~17722);
    }
    var_14 = (min(var_14, 1496962599));
    var_15 = var_0;
    #pragma endscop
}
