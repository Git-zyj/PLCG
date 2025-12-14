/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((63097 ? (var_17 != var_11) : var_8));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, 127));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_21 = ((!(!126)));
        var_22 -= (min((min(var_17, (((~(arr_0 [i_0])))))), (((-var_6 / (max(var_13, var_8)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (min((((min(6690435237281281731, var_8)) ^ ((min(27685, var_3))))), var_6));
            var_23 = ((var_8 ? ((((!(((var_14 ? var_10 : var_15))))))) : (((max(var_0, -5630210784898979015)) - (arr_4 [i_1])))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_24 = (min(var_24, ((max(var_1, ((27672 ? -7403153270416643625 : 390896455)))))));
            var_25 = (((((-137438691328 % (-792522867756924955 <= var_6)))) ? ((min(var_1, (arr_0 [i_1])))) : var_12));
            arr_11 [i_3] [i_3] [4] = ((((((min(var_2, var_5))) + 2147483647)) << (907623646 - 907623646)));
            arr_12 [i_1] [i_3] [i_3] = ((((min(20167, var_14))) ? ((4307403248022338998 ? 16407 : (arr_5 [i_1]))) : ((var_13 ? (arr_5 [i_1]) : (arr_5 [i_1])))));

            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                arr_15 [i_1] [i_1] [i_4] = -1;
                var_26 -= var_12;
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_27 = ((min((arr_4 [i_1]), (arr_4 [i_1]))));
                arr_18 [i_1] [i_3] [i_3] = ((~(((((20 ? var_15 : var_16))) ? (min(var_6, (arr_16 [i_1] [i_1] [i_5]))) : (arr_17 [i_3])))));
            }
        }
        var_28 = (max(var_28, ((min(((129 ? -32 : var_15)), var_7)))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] [i_6] = (min(((min((arr_20 [i_6]), var_2))), (min(164, 5129781983129094191))));
        var_29 = ((((((((var_5 ? var_10 : (arr_4 [i_6])))) ? var_5 : var_3))) ? (((max(-30435, var_0)) - (~9223372036854775807))) : var_10));
    }
    #pragma endscop
}
