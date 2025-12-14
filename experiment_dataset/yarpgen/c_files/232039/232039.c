/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= 393154984;
    var_14 = (min(var_14, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = 840644182;
        var_16 += (((arr_1 [4]) / (arr_2 [12])));
        var_17 = (max(var_17, (((arr_0 [i_0]) - (arr_2 [12])))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_18 = (((arr_2 [i_1]) ? 756577282 : (17447 * 31)));
        var_19 = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_20 = ((((11 ? (arr_0 [i_2]) : (((5698438972988648225 ? (arr_6 [i_2]) : var_7))))) == (var_0 == -91)));
        var_21 = (((((((var_8 ? -342840132 : (arr_2 [i_2])))) ? 36 : (arr_1 [i_2]))) - (((arr_0 [i_2]) / ((36 ? (arr_2 [i_2]) : 15))))));
        var_22 = (-26020 | 5698438972988648205);
        var_23 = ((!((((arr_1 [i_2]) ? var_3 : (arr_1 [i_2]))))));
        var_24 = ((-var_8 ? 7 : (((arr_6 [i_2]) + ((4 ? var_0 : var_5))))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_25 = var_2;
        var_26 = ((((arr_8 [i_3] [i_3]) * (((arr_10 [i_3] [i_3]) * (arr_8 [i_3] [i_3]))))));
        var_27 = (max(((((max((arr_9 [12]), 0)) == (arr_2 [i_3])))), (((arr_0 [i_3]) - (255 != 12748305100720903380)))));
    }
    #pragma endscop
}
