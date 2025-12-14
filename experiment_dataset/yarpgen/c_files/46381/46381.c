/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((31 | (-2147483647 - 1)))) % 9469858493195533793)) + ((((((-1375564651730404145 + 9223372036854775807) >> (var_2 - 11070199877077379258)))) ? 5639582050622575548 : ((var_9 ? 0 : var_2))))));
    var_18 += var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((var_13 ? var_14 : (((!(((var_14 ? (arr_0 [i_0]) : (arr_0 [i_0]))))))))))));
        var_20 = (((~(((arr_0 [i_0]) ? -8192 : var_12)))) <= var_11);
        var_21 -= (((((!(-8192 % 17673503188083285035)))) + (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((+((max((0 == 0), ((15 < (arr_2 [i_1])))))))))));
        var_23 = (max(var_23, ((~((~(arr_0 [i_1])))))));
    }
    var_24 += ((17673503188083285036 ? 17673503188083285039 : var_1));
    #pragma endscop
}
