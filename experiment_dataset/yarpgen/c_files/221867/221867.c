/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_12 = arr_4 [i_0] [i_1];
                    arr_8 [i_2] [i_1] [i_0 + 1] = var_8;
                    var_13 = (((max((arr_7 [i_1]), var_10))) >= (min((arr_4 [i_0 + 2] [i_1]), (arr_4 [i_0 + 2] [i_1]))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_14 = (((((~(arr_5 [i_1])))) || ((((arr_15 [i_0 - 1] [i_1]) & (arr_15 [i_0 + 2] [i_1]))))));
                                arr_17 [7] [8] [i_3] [i_1] [6] = (arr_2 [i_0 + 2]);
                            }
                        }
                    }
                    var_15 *= 0;
                    arr_18 [0] &= (arr_10 [i_0] [i_0] [6] [i_0]);
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_16 = (min(var_16, ((((((arr_11 [6] [i_1] [0] [i_6] [0] [i_6]) * 1)) > 65518)))));
                    var_17 = ((-9223372036854775807 - 1) ^ 6);

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_24 [i_0] [11] [i_6] [i_1] = (((arr_14 [i_0 + 2] [i_1] [i_6] [i_7]) % (((((min(504, 65534))) & 1549934395)))));
                        var_18 = (max(-418636174, (-9223372036854775807 - 1)));
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_19 = min(((min(var_6, ((50 ? (arr_6 [i_1] [i_1]) : (arr_21 [i_0] [i_0] [3] [i_1] [i_0])))))), (((arr_22 [1] [i_1] [i_6] [i_8 - 1] [6]) ? (arr_22 [i_0] [i_8 - 1] [i_0] [i_1] [11]) : (arr_22 [2] [i_6] [3] [i_1] [i_0]))));
                        var_20 = var_3;
                        var_21 -= ((var_10 ^ (((arr_20 [i_0] [2]) ^ (arr_20 [i_1] [4])))));
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    var_22 = var_5;
                    var_23 -= arr_0 [i_1];

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_24 -= (((((arr_11 [4] [i_1] [i_9] [4] [i_0] [i_1]) ? (arr_9 [10]) : var_11)) != (((arr_9 [10]) ? (arr_25 [1] [i_1] [i_1] [i_1]) : (arr_13 [i_0] [6] [i_1] [i_9] [i_10])))));
                        var_25 = ((-(((arr_15 [i_0] [i_1]) / (arr_2 [i_0])))));
                        var_26 -= (((arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2]) ? (arr_14 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 2]) : (arr_20 [i_0] [0])));
                    }
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        arr_33 [i_0] [5] [1] [i_1] = (arr_32 [i_0] [i_0] [i_9] [i_11 - 3]);
                        arr_34 [i_0] [i_1] [i_1] [10] [i_9] = (arr_11 [i_1] [i_0] [3] [i_9] [i_9] [i_11]);
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        var_27 -= ((-(min((((arr_29 [10] [i_1] [i_1] [6] [0] [i_1]) & var_0)), -86))));
                        var_28 = (arr_14 [6] [i_1] [i_1] [8]);
                    }
                    arr_37 [i_1] = (arr_27 [i_0 + 2]);
                }
                arr_38 [8] &= (arr_25 [4] [6] [10] [4]);
            }
        }
    }

    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        var_29 = ((-((max((arr_39 [i_13]), (arr_39 [i_13]))))));
        arr_41 [i_13] = (((arr_40 [i_13] [5]) && (((-(65 | 3664619744120481204))))));
        var_30 -= var_6;
    }
    var_31 &= (max((~var_1), -17));
    var_32 = ((((min(var_5, var_3))) ? var_2 : (max(var_6, (184 & 418636173)))));
    var_33 = var_5;
    #pragma endscop
}
