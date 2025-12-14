/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (((4128768 ? (var_1 | var_14) : ((var_11 ? var_12 : var_7)))) * var_13);
    var_17 ^= ((~((var_12 ? (~1) : var_0))));
    var_18 = ((~(((((min(var_5, var_4)))) | (var_4 ^ var_10)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = ((((max((arr_0 [i_0 + 1] [i_0 - 2]), var_12))) ? ((32165 ? (((~(arr_0 [9] [1])))) : (max((arr_1 [i_0]), 8432177629161220803)))) : ((var_3 | ((((arr_2 [i_0]) ? var_0 : 1)))))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_20 = ((~((((arr_0 [i_1 - 1] [i_0 + 2]) == (arr_0 [i_0 - 2] [i_1]))))));
            var_21 = ((((min((min(var_1, (arr_1 [i_0]))), var_7))) ? var_1 : ((-(-112 / -27704)))));
        }
        /* vectorizable */
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            arr_8 [i_0] = var_2;
            arr_9 [i_0] = (((496674306 ? (arr_5 [0] [i_0 + 2] [i_0 - 2]) : (arr_7 [i_2] [i_2 + 1] [i_0 + 1]))));
            arr_10 [i_0] [i_0] [i_0] = ((~((1 ? -4801870195072157646 : 1))));
            var_22 = (max(var_22, (((~(((arr_4 [i_0] [i_2] [i_0]) ? (arr_3 [i_0] [i_2]) : var_13)))))));
        }
        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            var_23 &= arr_12 [i_3] [i_0];
            var_24 = (min((1 || 18446744073709551615), (((arr_12 [i_3] [i_3 - 1]) ? (arr_1 [i_0]) : (((var_10 ? var_7 : var_4)))))));
            arr_14 [i_0] [i_0] = (((((-var_12 ? ((max(var_7, var_13))) : (min(1520033041, var_7))))) ? ((((max(var_7, var_5))) ? ((((arr_12 [i_3] [15]) * (arr_0 [i_3] [i_3])))) : 302040385)) : var_0));
            arr_15 [i_0] [i_0] = ((((((arr_6 [i_0 + 1] [i_0] [i_3 - 1]) ? var_5 : (arr_6 [i_0 + 1] [i_0] [i_3 + 2])))) ? (((((var_5 ? var_3 : var_4))) ? (((arr_6 [1] [i_0] [i_0]) ? var_14 : (arr_0 [i_0] [2]))) : var_14)) : (((var_13 ? var_0 : (arr_5 [i_3] [i_0] [i_0 + 1]))))));
            arr_16 [i_0] [i_0] = (max((((((7653102031063927365 ? 1 : var_7)) <= ((max(1, 65535)))))), (max((((7534080208760464768 ? var_11 : -112))), (var_6 ^ var_4)))));
        }
        var_25 = (min(var_25, ((max((arr_7 [i_0] [i_0] [i_0]), (~-23704))))));
        var_26 = ((~(-144115188075855872 | 1)));
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_27 += (((arr_2 [12]) ? (max((arr_2 [2]), var_2)) : (((arr_2 [10]) ? var_8 : (arr_2 [0])))));
        var_28 = (max(((-(~var_9))), ((~(arr_12 [i_4] [0])))));
    }
    var_29 = 111;
    #pragma endscop
}
