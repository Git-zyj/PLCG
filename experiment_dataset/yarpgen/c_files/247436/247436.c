/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((min((var_11 % var_16), (var_8 % var_10)))) ? ((min(var_5, -var_5))) : var_16));
    var_19 = (max(var_19, (~var_17)));
    var_20 ^= var_13;
    var_21 *= ((var_10 != var_4) / (min(((min(var_11, var_0))), (var_15 ^ var_16))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_22 = ((((((arr_0 [i_0] [i_0]) % (arr_0 [i_0] [1])))) ? ((~(arr_0 [23] [i_0]))) : ((~(arr_0 [19] [17])))));
        arr_2 [i_0] = arr_0 [i_0] [4];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_23 = (((arr_1 [i_0 + 3] [i_2 + 1]) > (arr_1 [i_0 + 2] [i_2 + 2])));
                        var_24 = var_11;
                        arr_13 [i_0] [i_0] [i_1] [i_0] = (~var_15);
                        var_25 = (~(((!(arr_3 [i_1] [i_3])))));
                    }
                }
            }
        }
        arr_14 [i_0] = (arr_11 [12] [12] [i_0] [i_0 - 1] [i_0 + 1]);
        var_26 ^= (((arr_9 [i_0] [i_0] [i_0] [i_0]) * (arr_9 [16] [16] [16] [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_27 = (((arr_0 [i_4] [i_4 - 4]) == (arr_0 [21] [i_4 + 1])));
        var_28 = (((-(arr_7 [i_4] [i_4] [i_4 - 4]))));
        var_29 *= ((-(arr_12 [i_4 - 2] [i_4] [i_4])));

        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_30 = (((var_9 + 9223372036854775807) << (((var_11 != (arr_0 [i_4 - 4] [i_5]))))));
            var_31 = ((arr_3 [i_5] [i_5]) ? (arr_0 [i_4 + 2] [i_4 + 2]) : (arr_8 [i_4 + 1] [i_4 + 2]));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_32 = (((arr_10 [i_4 + 4] [20] [i_4] [i_4] [i_4] [i_4 - 3]) == (arr_3 [i_4] [i_4])));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_33 -= (((~var_12) | ((((arr_20 [i_6]) << (((arr_9 [13] [i_6] [i_7] [16]) - 848863865)))))));
                        var_34 = (((arr_5 [i_4] [i_4 + 3] [i_7 - 1]) | (arr_11 [i_4] [i_7 - 1] [i_4] [i_4] [i_4])));
                    }
                }
            }
            var_35 = (max(var_35, ((((arr_18 [i_4] [i_4] [i_4 - 4]) || (arr_18 [i_4] [i_4 + 2] [i_4 - 3]))))));
            arr_25 [14] [11] [14] = (((arr_12 [i_4] [i_4] [i_6]) ? ((~(arr_8 [i_6] [i_4 + 1]))) : ((~(arr_0 [i_6] [i_6])))));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            arr_28 [i_9] [i_9] [i_4] = ((((((arr_15 [1]) ? var_12 : var_11))) ? ((var_10 & (arr_11 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1] [12]))) : (arr_8 [i_4] [i_4 + 3])));
            var_36 = (arr_22 [i_9] [i_9] [6] [i_9]);
        }
    }
    for (int i_10 = 4; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_37 = (min((((((arr_8 [i_10] [i_10]) - var_4)) - -2131715725)), (arr_5 [i_10] [i_10] [i_10])));
        arr_31 [6] = (((arr_29 [i_10] [i_10]) == ((((-(arr_7 [i_10] [i_10] [i_10 + 1]))) << (((arr_16 [i_10]) - 48758))))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    var_38 = (min((arr_11 [i_10] [i_11] [i_12] [0] [1]), ((-((~(arr_17 [i_12] [i_11 + 1] [i_10])))))));
                    var_39 = (max(var_39, ((((min((arr_27 [i_11 + 2] [i_11 + 2] [i_10 - 4]), (arr_27 [i_11 - 1] [i_11 - 1] [i_10 - 4])))) + (~var_11)))));
                }
            }
        }
        arr_38 [i_10] = (~(arr_35 [7] [14] [17] [i_10 + 1]));
    }
    for (int i_13 = 4; i_13 < 17;i_13 += 1) /* same iter space */
    {
        arr_43 [i_13] = ((-((((!var_5) >= (arr_39 [18]))))));
        arr_44 [i_13 + 3] = ((var_10 <= (arr_6 [9] [i_13] [i_13])));
    }
    #pragma endscop
}
