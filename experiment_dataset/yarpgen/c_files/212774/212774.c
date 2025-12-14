/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) - (arr_1 [i_0])));
        var_13 = 1327273128147821676;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = ((~1) ^ ((1767590661 | (arr_1 [i_1]))));
            var_15 = -3321006816094394892;
            var_16 = (max(var_16, (((0 ? 1905583179303290097 : 140576035)))));
            var_17 = (((-(arr_2 [i_1]))));
        }
        var_18 = (((arr_2 [i_0]) != (arr_2 [i_0])));
        var_19 = (min(var_19, var_2));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_20 = ((-6472535983376437858 ? (((((arr_6 [i_2]) < 456056774)))) : ((2147483638 ? (arr_6 [i_2]) : var_4))));
        arr_8 [i_2] = (var_6 ? (arr_6 [i_2]) : (((arr_6 [i_2]) ? (arr_6 [i_2]) : 97542014)));
        var_21 = (arr_6 [i_2]);
        arr_9 [1] |= (!var_3);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (max((arr_11 [16]), ((5427 ? ((8164 ? (arr_10 [i_3]) : (arr_11 [i_3]))) : (arr_10 [i_3])))));
        var_22 = (((((arr_10 [i_3]) ? (arr_7 [i_3] [i_3]) : (arr_6 [i_3]))) == (max(-6010850982236828916, (arr_6 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_23 += var_0;
        var_24 = (!-3321006816094394892);
    }
    var_25 = ((1 ? (((max(var_3, 1)) ? ((min(1, var_5))) : (~var_1))) : var_8));
    #pragma endscop
}
