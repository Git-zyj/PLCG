/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [1] [i_1] [2] = var_8;
                                var_15 = (((((arr_5 [i_0] [i_2 + 1] [i_3]) ? (arr_0 [i_0]) : (arr_9 [i_0] [6] [6] [i_0] [i_0])))) ? var_0 : ((((max(var_12, var_6))) ? (arr_2 [i_0]) : (((!(arr_8 [i_0] [i_1] [i_1] [i_3])))))));
                            }
                        }
                    }
                    var_16 &= ((((((var_14 ? var_12 : var_8)))) ? (((arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2] [3]) ^ 1)) : (arr_2 [i_0])));
                }
            }
        }
    }
    var_17 *= 131071;
    var_18 ^= (((((((var_12 ? var_3 : 238058852))) ? var_13 : var_0))) ? ((((((var_13 ? var_10 : var_3))) ? ((var_3 ? var_3 : var_14)) : var_7))) : var_1);
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                {
                    arr_21 [7] [7] [i_5] [i_6] = ((((var_3 || (((238058852 ? 131071 : (arr_19 [i_7] [6] [i_5])))))) ? (((arr_12 [6] [i_7 + 3] [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 3]) ? -238058852 : var_12)) : var_13));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_19 = var_2;
                        var_20 *= ((((max(((((arr_17 [i_5]) ? 131052 : -238058852))), (arr_15 [i_8])))) ? var_11 : (arr_0 [i_5])));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_21 -= -238058827;
                            arr_28 [3] [i_8] [6] [6] [i_5] = var_1;
                            var_22 = ((var_0 ? var_2 : 238058841));
                            var_23 ^= (((arr_0 [i_7 + 1]) ? var_12 : var_0));
                        }
                        arr_29 [0] = ((((max(-238058848, var_4))) ? var_14 : ((131092 ? (arr_8 [i_7] [i_7] [i_7] [i_7 + 1]) : (arr_5 [i_5] [6] [i_8])))));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, var_7));
                        var_25 = ((-(((4821170264660708933 + -131072) ? ((-1934375622 ? 238058848 : 8790)) : var_6))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_26 += (((((arr_14 [i_7 + 3] [i_7 + 3]) > var_13)) ? -var_0 : ((var_11 ? (arr_14 [i_7 - 1] [i_7 + 3]) : (arr_14 [i_7 + 2] [i_7 + 2])))));
                        arr_34 [i_11] = ((var_7 ? var_10 : (((!((((arr_11 [i_5] [1] [1] [i_5] [i_5]) ? (arr_8 [i_5] [i_5] [i_5] [i_5]) : var_11))))))));
                    }
                    var_27 = (max(var_27, (arr_33 [6] [6] [i_6] [2] [i_6] [6])));
                    arr_35 [i_5] = ((-var_6 ? (max((arr_23 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7]), -131071)) : var_8));
                }
            }
        }
    }
    #pragma endscop
}
