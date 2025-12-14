/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_4;
        arr_3 [i_0] = arr_0 [i_0 - 1];
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = ((((~(arr_1 [i_1 - 1]))) ^ 52217));
        var_16 = (max(var_16, ((min((min(255, (arr_4 [i_1] [i_1 - 1]))), (!0))))));
        arr_7 [i_1] [i_1] = (min((min((arr_5 [i_1]), (arr_5 [i_1]))), ((var_1 | (arr_5 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((~(arr_11 [i_2])) ^ (min(30079, -425732802)))))))));
                    arr_15 [i_2] [i_2] [i_2] [i_2] = 78;
                }
            }
        }
        arr_16 [4] [i_2] = ((((arr_11 [i_2]) ? (min((arr_13 [i_2 - 1]), (arr_4 [i_2 - 1] [3]))) : (arr_10 [i_2 - 1]))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 16;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_18 = (min((min(((((arr_19 [i_2 - 1] [i_5] [i_6]) && 1))), (min(var_10, (arr_24 [i_2] [i_2] [16] [i_2 - 1]))))), (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2])));
                                arr_30 [i_2] [i_2] [i_2] [5] [i_2] = ((((!var_11) & (((35456 == (arr_6 [i_2])))))));
                                arr_31 [1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2] = 13318;
                                arr_32 [i_2] [i_2] [i_6 - 1] [i_7 - 3] [i_6 - 1] [i_6] = var_9;
                            }
                        }
                    }

                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        arr_35 [i_2] [i_2] [i_2] = ((((arr_24 [i_6] [i_2] [i_2] [i_6 + 2]) ? (arr_25 [i_2] [10] [i_2] [10] [i_9]) : ((var_4 >> (64482045 - 64482015))))));
                        arr_36 [i_2] [i_2 - 1] [8] [i_2] = ((min((((arr_33 [i_2] [i_5] [i_5] [i_2] [i_9]) % var_11)), (((arr_6 [i_2]) ? var_4 : var_0)))));
                        var_19 = (min(var_19, (((((((arr_19 [i_2 - 1] [i_2 - 1] [i_9]) << (((arr_19 [i_2 - 1] [i_2 - 1] [i_2 - 1]) - 57992))))) ? ((((arr_19 [i_2 - 1] [i_6 - 4] [i_9 + 1]) ? -1075297076 : (arr_19 [i_5] [i_5 + 2] [i_5 - 1])))) : (arr_19 [i_2] [i_6 + 1] [i_9 - 1]))))));
                        arr_37 [i_5 - 2] [i_5 + 2] [i_2] [1] = ((((!((min((arr_0 [i_2 - 1]), 174))))) ? (((min(0, 6857973853923715374)) >> (var_12 != var_7))) : -64482045));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_40 [i_2] [5] [5] [i_2] = 1587468288;
                            arr_41 [i_2] [i_5 + 2] [i_5] [i_5 - 2] [8] [i_5] [8] = ((~((9223372036854775807 << (13335 - 13279)))));
                            var_20 = (max(var_20, var_8));
                            var_21 = (min(var_21, 947430831938362540));
                            arr_42 [i_2] [i_2] = (var_3 ^ -107);
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (((((~((min(var_10, var_0))))) >= ((((var_13 | (arr_29 [8] [8]))) ^ ((((arr_25 [i_11] [i_6 - 3] [i_6 - 3] [12] [i_2]) >= (arr_11 [i_2 - 1])))))))))));
                            arr_46 [i_2 - 1] [i_5] [i_2] [i_2] [i_11] = (min(((var_11 >> (28855 - 28829))), (-48 | var_9)));
                            arr_47 [i_2] = (((((((min(44, 23179))) / var_3))) ? (arr_44 [i_2] [i_5]) : -10243941160462816028));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, (arr_22 [i_5 - 2] [8] [8] [i_5])));
                            var_24 = (max(var_24, (((233 ? (((-((44 >> (210 - 203)))))) : ((var_0 & (var_9 ^ 5297504445761984519))))))));
                        }
                    }
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        arr_54 [17] [i_5] [i_2] = min((((-1075297076 ? (arr_38 [i_2]) : (arr_10 [i_5 + 2])))), var_4);
                        var_25 = (min(var_25, (~var_2)));
                    }
                }
            }
        }
    }

    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {
        arr_58 [i_14] = (min((min(((~(arr_18 [1] [i_14] [i_14]))), var_3)), 152));
        var_26 = 16563;
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
    {
        var_27 = 6729;
        var_28 = (min(var_28, ((((((((arr_4 [i_15] [i_15]) ^ 8821)) & (arr_38 [6]))) | ((~((max(13335, var_5))))))))));
        arr_61 [i_15] = ((var_4 ^ (min(((var_7 >> (23155 - 23131))), (min(var_8, 5))))));
    }
    for (int i_16 = 4; i_16 < 15;i_16 += 1) /* same iter space */
    {
        var_29 = (!2013621091);
        arr_65 [i_16] = ((-(((~var_0) & ((min((arr_62 [0] [0]), var_5)))))));
    }
    for (int i_17 = 4; i_17 < 15;i_17 += 1) /* same iter space */
    {
        var_30 = (((arr_28 [16] [1] [i_17] [i_17] [i_17] [10] [i_17 - 3]) % var_12));
        var_31 = ((((((arr_45 [i_17] [i_17] [i_17] [i_17] [i_17 + 1] [i_17]) + (arr_27 [i_17] [i_17 + 2] [i_17]))) > 8)));
    }
    var_32 = (20 + -var_11);
    #pragma endscop
}
