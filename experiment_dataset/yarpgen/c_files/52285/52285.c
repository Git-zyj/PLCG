/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] &= (arr_1 [i_0] [i_0]);
        var_11 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (((max((min(18446744073709551615, var_3)), var_4)) == ((min((arr_1 [i_1] [i_1]), (((arr_4 [i_1]) ? (arr_0 [i_1 + 1]) : (arr_1 [i_1] [i_1]))))))));
        var_12 = (((49 & 111) ? ((max(-111, 116))) : 1));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_13 = (max(((((1 ? 23 : 3866284347)) >> (((((arr_0 [i_2 - 1]) ? (arr_7 [i_2 + 1] [i_2 + 1]) : var_1)) - 12935447424393166706)))), (((!(~var_9))))));
        var_14 -= (((arr_4 [i_2 - 1]) ? (arr_4 [i_2]) : (((max((((arr_7 [i_2 + 1] [i_2 + 1]) == (arr_4 [i_2]))), (((arr_4 [i_2]) && var_1))))))));
        var_15 = ((((min(-1294996791, (arr_8 [i_2 - 1])))) ? (((arr_7 [i_2 + 1] [i_2]) ? (arr_8 [i_2]) : 102)) : (((arr_4 [i_2 + 1]) ? ((max(1, var_1))) : (arr_8 [i_2 + 1])))));
        arr_10 [i_2] = ((((arr_4 [i_2 - 1]) || (arr_7 [i_2 + 1] [i_2 + 1]))));
    }
    var_16 = (max(var_7, (min(var_0, ((max(var_6, 27867)))))));
    var_17 = (-5645819624259306092 - -7023);
    var_18 = ((((49 * (-123 <= 4148525431))) + var_9));
    #pragma endscop
}
