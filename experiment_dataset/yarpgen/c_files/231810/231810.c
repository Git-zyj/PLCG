/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_3 / (((var_17 ? var_19 : ((var_16 ? var_2 : var_5)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = 30;
        var_22 *= ((64515 ? 1 : 14));
        var_23 |= (-((((arr_1 [4] [4]) < ((64515 ? (arr_0 [2]) : var_7))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (arr_2 [i_1])));
        var_25 = ((((((((arr_2 [i_1]) ? 346866601 : var_11))) / ((3836729758 ? -3065661356147863783 : var_17)))) < (arr_1 [0] [0])));
        arr_4 [i_1] |= ((~(((-822756036 && (arr_1 [4] [i_1 + 1]))))));
    }
    var_26 |= var_18;
    var_27 += 1;
    #pragma endscop
}
