/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((!(((((min(0, var_6))) ? ((max(1, var_7))) : ((min(1, 1))))))));
    var_20 = ((var_11 > (max(24179, ((var_2 ? var_7 : 1))))));
    var_21 = ((((((var_10 || var_4) ? ((min(6, var_7))) : var_2))) ? ((max((min(32768, 58165)), ((min(1, 0)))))) : ((((var_2 ? var_10 : 1)) >> (var_0 - 225)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((~((((((1 ? (arr_1 [i_0 + 1]) : (arr_0 [i_0])))) && (min(1, var_1)))))));
        arr_4 [i_0] [i_0 + 1] = (arr_1 [i_0]);
        arr_5 [i_0] [i_0 + 2] = max((((var_0 == (var_13 / 1)))), (min(44811, (arr_1 [i_0]))));
        var_22 = (((var_11 ? (((1 <= (arr_0 [12]))) : (1 & 0)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_23 = (((arr_2 [8] [i_1]) | (arr_0 [i_1])));
        arr_8 [i_1] = var_3;
        arr_9 [i_1] = (min(38546, (arr_0 [i_1])));
    }
    #pragma endscop
}
