/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = ((127 ? (min((~5412972010978169461), (13033772062731382140 > -13044))) : (((((1 ? 48 : 0)))))));
        arr_3 [i_0] = (((2147483632 ? 0 : (arr_1 [i_0 - 1]))));
        var_21 = 168;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 ^= (((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_2 [i_1 + 1] [i_1 - 1]) : (arr_2 [i_1 - 1] [i_1 + 1])));
        arr_7 [i_1] = (((~9) ? (arr_1 [i_1 + 1]) : ((min(var_15, (arr_1 [i_1 - 1]))))));
        var_23 -= ((((var_18 < (arr_5 [6]))) ? ((((arr_5 [8]) < 18446744073709551615))) : ((max((arr_1 [i_1 + 1]), 24)))));
    }
    var_24 = var_12;
    #pragma endscop
}
