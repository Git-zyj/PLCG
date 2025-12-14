/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = var_6;
    var_22 -= (min(-34359738360, ((max(var_12, (-72 || var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((min(-851418236, -120))))));
                                var_24 -= (((~var_2) > var_3));
                                var_25 -= (min((((var_14 || (arr_2 [i_0] [i_0])))), ((((((arr_7 [i_3] [i_3]) | -918355369))) ? (arr_8 [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_1 - 1] [i_4 + 2]) : ((var_10 ? var_10 : 26310))))));
                                arr_12 [i_0] [i_1] [i_1] [0] [i_3] [i_4] [i_4 + 3] = (((((91 ? 1 : (arr_5 [i_1 - 1])))) ? ((var_1 ? var_7 : var_4)) : ((((var_9 != (arr_5 [i_1 - 1])))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] = (min(((max(var_15, var_4))), ((1 ? (-9223372036854775807 - 1) : var_16))));
                arr_14 [i_1] [i_1] = var_6;
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_26 = (max(var_26, ((((max(((max(9126, 119))), var_2))) ? (max((arr_10 [i_5]), (~var_14))) : -20510))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_5] [i_6] [i_5] = (max((((arr_9 [i_5] [i_6] [i_5] [i_7]) ? ((max(120, var_1))) : (((arr_24 [i_5] [i_6] [0] [0]) ? var_14 : var_11)))), ((((var_3 ? var_15 : 104))))));
                    var_27 -= (((min(var_17, (arr_23 [i_5] [i_5] [i_6] [0])))) ? (!var_13) : var_6);

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_28 [i_5] [i_5] = min((min(46063, (arr_22 [i_5] [i_6] [i_7]))), ((((!-104) >= ((52386 ? (arr_26 [i_5] [i_5] [i_6] [i_5] [i_8] [i_8]) : 46889))))));
                        var_28 = max((!var_14), var_19);
                        var_29 -= (min((max((arr_26 [i_5] [i_6] [i_7] [i_5] [i_8] [i_8]), 1)), (arr_26 [i_5] [i_6] [i_7] [i_6] [i_7] [i_6])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_32 [i_5] [i_5] [i_7] [i_6] [i_5] [i_5] = (((-(arr_7 [i_6] [i_5]))));
                        arr_33 [i_5] [i_5] = (98 == 0);
                        arr_34 [i_5] [i_6] [i_7] [i_6] [i_9] = (((arr_0 [i_9]) ? var_5 : (arr_15 [i_5])));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_30 = (((-2147483647 - 1) ^ var_13));
                        arr_37 [i_5] [i_6] [i_5] [i_10] = (((((46889 >> (var_0 - 173)))) > (var_10 ^ 916467090852390143)));
                        var_31 = -46063;
                        var_32 -= ((19451 - (arr_16 [i_6])));
                    }
                    var_33 = (min((!-0), (min((max(8189744258122197223, var_15)), (arr_35 [i_5] [i_6] [i_5] [i_5])))));
                    var_34 = (min(var_34, var_2));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_35 -= ((var_0 ? (((((-(arr_38 [i_11])))) ? (arr_38 [10]) : (max(var_0, (arr_38 [i_11]))))) : (arr_39 [i_11])));
        var_36 = ((-((72 * (13150 / 65535)))));
    }
    #pragma endscop
}
