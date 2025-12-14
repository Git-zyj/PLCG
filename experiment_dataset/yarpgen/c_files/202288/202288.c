/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(1044327033, 13202))) ? (var_19 - var_6) : -var_3));

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_21 += (max((var_1 - 1918565010), (min(((1741686594475362258 ? 13202 : 241666516)), (-13203 / var_15)))));
        var_22 = (min(((max(13216, 1918565010))), 1125899906842623));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((min((~-1), (((arr_1 [i_1 - 1] [i_1 - 3]) ? var_3 : 1461669406)))) + (((((var_14 ^ (arr_5 [i_1] [i_1])))) ? ((~(arr_1 [i_1] [i_1]))) : ((4194303 ? -15902 : 0))))));
        arr_7 [i_1] = (((arr_1 [i_1] [i_1]) ? ((((((arr_2 [i_1 + 4]) ? 171 : var_19))) ? -241666516 : ((16705057479234189343 - (arr_4 [i_1]))))) : 53456));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_23 ^= (min(53455, 0));
        arr_10 [i_2] = ((!((((-112 / 15) ? ((max(0, 1))) : (~-5302))))));
    }
    #pragma endscop
}
