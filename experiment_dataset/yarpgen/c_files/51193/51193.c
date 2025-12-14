/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (((((((!var_3) > (var_5 / var_11))))) != (min(-var_15, var_11))));
    var_20 = var_8;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 ^= (max((max((arr_2 [i_0 - 1]), (arr_0 [i_0 + 1] [i_0 + 1]))), ((((arr_2 [i_0 - 1]) <= (arr_0 [i_0 - 1] [i_0 - 1]))))));
        var_22 = (arr_0 [7] [i_0]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [13] |= (min((19176 * 19176), ((((max((arr_6 [i_1]), var_2))) ? ((max(253, 69))) : (arr_0 [i_1] [i_1])))));
        var_23 = (min(((min((arr_0 [i_1] [i_1 + 1]), (arr_0 [i_1 + 1] [i_1 + 1])))), (46378 / 55114)));
        var_24 = (min(var_14, ((((((arr_3 [i_1]) + var_13))) + (arr_6 [i_1])))));
        arr_8 [i_1 - 1] [i_1] |= ((((max(37, 19176))) <= (((127 && 65535) | ((((arr_3 [i_1]) && var_12)))))));
        arr_9 [i_1] &= ((var_7 | (min((arr_6 [i_1 + 1]), (arr_6 [i_1 + 1])))));
    }
    #pragma endscop
}
