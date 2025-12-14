/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_14 | (max(var_3, var_2)))), var_4));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 *= (((((~((((arr_0 [i_0 - 2] [i_0]) >= var_2)))))) ? 17170991897491964082 : (arr_0 [i_0 + 3] [i_0])));
        arr_2 [i_0] = ((~((((((min(var_0, (arr_1 [i_0] [i_0]))))) > 17170991897491964084)))));
        arr_3 [i_0] [i_0 + 3] = (((((!-113) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0 - 2] [12]))) > (((((!(arr_1 [i_0] [i_0])))) & (arr_1 [i_0 - 1] [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (min(5932595080031874935, 13644260295883487465));
        var_19 = (((((arr_0 [i_1] [i_1]) >= 9223372036854775780)) ? 113 : (((arr_0 [i_1] [i_1]) ? var_13 : var_13))));
        var_20 = (min(var_20, ((((arr_0 [i_1] [i_1]) ? var_0 : (((arr_0 [i_1] [i_1]) ? (arr_4 [i_1]) : 99)))))));
        var_21 += ((((max((arr_5 [8]), 161))) && 55));
        var_22 -= (1275752176217587517 * -65);
    }
    #pragma endscop
}
