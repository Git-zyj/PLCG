/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = (5278073424395778771 & (min(((1 ? 5278073424395778771 : -5278073424395778770)), ((min((arr_1 [i_0] [i_0]), 229))))));
        var_19 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 = (((((((arr_2 [i_1]) << (arr_3 [11])))) & (((arr_4 [5]) ? (arr_0 [i_1] [i_1]) : var_7)))) * (((max((min(23, 0)), (!var_2))))));
        arr_5 [i_1] = (max(((min(var_9, (960992538 / -1)))), (max((var_12 / var_1), (arr_4 [i_1])))));
        var_21 = (min((arr_2 [i_1]), (min(((((arr_2 [i_1]) ? (arr_2 [i_1]) : var_14))), var_1))));
    }
    #pragma endscop
}
