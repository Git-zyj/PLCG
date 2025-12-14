/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, 12708));
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_18 = (((arr_5 [i_1] [i_1]) >= (arr_5 [i_1] [i_1])));
        var_19 = (min(var_19, (arr_4 [12])));
        var_20 &= 3353716534;
        arr_7 [i_1] [i_1] = (((-(arr_6 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (((((arr_9 [i_2] [i_2]) ? (min(0, -19)) : (arr_4 [10])))) ? (arr_5 [i_2] [6]) : (((((1744666898 + (arr_9 [i_2] [i_2])))) ? ((((var_1 > (arr_5 [16] [16]))))) : ((var_9 ? 941250755 : (arr_5 [6] [6]))))));
        arr_12 [i_2] = (937654499 | 32767);
        var_21 ^= ((+(min((~var_14), 1))));
    }
    var_22 = (min(var_22, ((max((((~((0 ? var_15 : var_2))))), ((var_14 ? var_4 : -19)))))));
    var_23 = var_5;
    var_24 |= var_6;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, ((((arr_15 [3] [i_4]) ? (arr_17 [i_3] [i_3] [i_3] [i_3]) : (arr_14 [i_4]))))));
                    var_26 = (max(var_26, ((((((var_12 / (arr_4 [1])))) * 4294967290)))));

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_27 = (min(var_27, ((((~var_8) ? ((((arr_8 [i_6]) ? -8 : var_12))) : 3353716534)))));
                        arr_22 [i_6] = (arr_13 [i_5] [i_6]);

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_27 [i_3] = (((var_12 / var_8) + (arr_1 [i_5] [i_6])));
                            var_28 = (min(var_28, ((((arr_4 [6]) ? (arr_9 [i_5] [i_7]) : 5043)))));
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            var_29 ^= (-16445 + -32757);
                            var_30 = (max(var_30, (((!((((arr_28 [10]) + (arr_14 [i_3])))))))));
                        }
                        var_31 += (((arr_14 [i_5]) << (((((((arr_0 [i_4]) ? (arr_28 [2]) : (arr_15 [i_6] [i_4]))) + 1269444798)) - 9))));
                    }
                    arr_30 [i_5] [i_5] [i_5] [i_5] = (((arr_0 [i_3]) ? (arr_0 [i_5]) : var_13));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_33 [i_3] [i_4] [i_3] = (arr_0 [i_4]);
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_32 = (i_10 % 2 == 0) ? (((var_16 >> (((((arr_24 [9] [i_4] [i_9] [i_10] [i_11]) ? (arr_4 [i_10]) : var_7)) + 1131041943))))) : (((var_16 >> (((((((arr_24 [9] [i_4] [i_9] [i_10] [i_11]) ? (arr_4 [i_10]) : var_7)) + 1131041943)) + 396446777)))));
                                arr_38 [i_3] [i_4] [i_10] [i_10 - 3] [i_11 - 2] = (((arr_9 [i_11 + 1] [i_10 + 2]) + (arr_9 [i_11 - 3] [i_10 + 1])));
                                arr_39 [i_10] = (((arr_8 [i_3]) ? (arr_36 [i_10] [i_10 - 3] [i_10] [i_10 + 2] [i_11 - 3]) : 114));
                            }
                        }
                    }
                    var_33 ^= 65535;
                    arr_40 [6] [i_4] = (((((var_16 ? 119 : (arr_24 [i_3] [i_3] [i_4] [i_9] [i_9])))) ? (!0) : (((arr_2 [i_4]) ? (arr_1 [i_9] [i_3]) : (arr_1 [i_4] [i_4])))));
                    var_34 = ((~(arr_20 [i_3] [i_3] [i_3] [i_3])));
                }
                arr_41 [i_3] [i_3] [i_3] = (arr_25 [i_3] [i_4] [i_3] [12]);
                arr_42 [i_3] [i_4] = ((((arr_37 [i_3] [i_4]) << 10)));
            }
        }
    }
    #pragma endscop
}
