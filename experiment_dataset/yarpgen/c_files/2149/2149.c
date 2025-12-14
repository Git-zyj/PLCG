/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [20] = (max((min((var_0 / var_7), (16777212 * var_8))), 59));
        var_12 = 171;
        var_13 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((var_6 + (((!64751) >> (var_9 - 25808))))))));
        arr_6 [19] = (min((((((-(arr_5 [i_1] [2])))) * (-109 * 1535318633))), (arr_2 [0])));
        arr_7 [14] = (arr_0 [i_1] [16]);
        var_15 = (min(var_15, (min(-var_10, -var_6))));
    }
    var_16 = var_9;
    var_17 = (max((18037 + 2759648663), ((((!1990381421) & var_7)))));
    #pragma endscop
}
