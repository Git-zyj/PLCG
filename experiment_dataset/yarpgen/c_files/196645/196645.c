/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;
        var_19 = ((var_12 ? (((arr_0 [i_0] [i_0]) ? 1 : 1)) : 1));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = (max(var_20, ((((65 ^ var_18) * (arr_3 [i_1]))))));
        var_21 = (min(var_21, (arr_4 [11])));
        arr_5 [i_1] [i_1] = ((((((arr_4 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (((((arr_3 [i_1]) <= var_13)))) : (arr_4 [i_1])));
    }

    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [7] [i_3] [i_3] = ((((var_12 - (arr_9 [i_3]))) ^ (((((min((arr_8 [i_2]), (arr_3 [i_2])))) ? (max(-59, var_11)) : (arr_9 [i_2 - 1]))))));
            var_22 = (((var_8 ^ 1) <= (((((min((arr_7 [i_2]), 1)))) * ((var_17 ? 2005396464808484402 : 1))))));
        }
        arr_14 [i_2] = (((((arr_7 [i_2]) ? 125 : (var_5 + var_16))) <= (((arr_6 [i_2]) ? 1 : ((1 ? (arr_12 [14]) : (arr_11 [8])))))));
        var_23 = ((~(((arr_0 [i_2] [i_2 - 1]) ^ (arr_0 [i_2 + 1] [i_2 + 1])))));
        var_24 = (((((~((min(var_4, var_5)))))) <= (((((var_4 ? (arr_10 [i_2 - 1]) : var_16))) ? var_15 : ((var_0 ? var_7 : var_1))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_25 = -1;
            arr_21 [i_4] [i_4] [i_5] = (((arr_0 [i_4] [i_5]) ? 1 : 1));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_24 [13] [13] = 1;
            arr_25 [i_4] = ((-4313857297332873064 ? (arr_20 [i_4] [1]) : (arr_20 [4] [4])));
        }
        var_26 = (((((-(arr_18 [i_4] [7])))) ? var_8 : (arr_22 [i_4])));
        arr_26 [i_4] = (((arr_3 [i_4]) ? (arr_23 [i_4] [i_4]) : var_14));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_27 = ((1 ? var_0 : (arr_27 [i_7])));

        /* vectorizable */
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            arr_31 [i_7] [i_7] [i_8 + 2] = ((var_2 ? (arr_27 [i_7]) : (arr_27 [i_7])));

            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                arr_35 [i_7] [i_7] [i_7] [i_7] = -var_4;
                var_28 = (arr_28 [i_7]);
            }
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                var_29 = (var_18 * var_15);
                arr_38 [i_7] [i_8] [i_7] = var_16;
            }
            arr_39 [i_7] [i_8] = (16 * 53);
            var_30 = ((((var_4 ? -1 : var_11)) <= ((1 ? 1 : var_8))));
        }
        arr_40 [i_7] = (((max(((min((arr_34 [i_7] [i_7]), var_0))), ((6085084765152804574 ? 2147483646 : -5613884060357807275)))) <= (-45 <= var_17)));
    }
    var_31 = ((var_3 ? ((min(var_7, var_6))) : (((var_15 ? var_8 : var_13)))));
    var_32 = var_1;
    #pragma endscop
}
