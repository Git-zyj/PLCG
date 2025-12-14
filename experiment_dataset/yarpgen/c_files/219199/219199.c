/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_12 ^= ((!(((-(max(-1524721968, var_8)))))));
                    arr_9 [i_0] [i_0] [i_0] = ((((~(~var_5))) & (((arr_7 [i_1 - 3] [i_0]) ^ (arr_7 [i_1 - 1] [i_0])))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_13 = (max(((46 ? (min((arr_3 [i_0] [i_1]), var_5)) : ((min(var_6, var_10))))), ((((arr_7 [i_0] [i_0]) & (arr_7 [i_0] [i_0]))))));
                        var_14 = (+-0);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_15 = ((((((4344841379516626436 ? 643609134 : var_1)) ? (((max((arr_10 [i_1] [i_2]), 0)))) : var_3))));
                        arr_15 [i_0] [i_2] = ((1 > (arr_12 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [i_0] [i_2 - 2] [i_1] [i_0] = 1;
                        arr_19 [i_0] [i_5] [i_2] [i_2 + 4] [i_0] [i_0] = (var_4 ^ var_8);
                        var_16 = (max(var_16, ((((arr_12 [i_0] [i_1] [i_2] [i_5]) / (arr_8 [i_2]))))));
                    }
                    var_17 = (arr_3 [i_0] [i_0]);
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_24 [i_0] [i_6] = 8280719745931938159;
                    var_18 = (min((((arr_8 [i_1]) ? (arr_14 [i_0]) : (arr_14 [i_0]))), (((arr_21 [i_0] [i_1] [i_6]) ? -1131992546 : (arr_22 [i_6])))));
                    var_19 = (min(((max((arr_6 [i_1 + 1] [i_6]), (arr_6 [i_0] [i_0])))), ((var_10 + (arr_6 [i_0] [i_6])))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max((arr_7 [i_8] [1]), ((max(var_0, -27305117299140757))))))));
                                var_21 = (((((arr_14 [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0])))));
                                arr_30 [i_0] [i_1] [i_0] [i_7] [i_8] = (arr_4 [i_0] [i_6]);
                                var_22 ^= (max(((min(var_2, (max(24812, 3145728))))), (min((arr_11 [i_8] [i_7] [0] [i_1] [i_0]), (arr_11 [i_0] [i_1 - 3] [10] [10] [i_8])))));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    var_23 = ((1 ? 14101902694192925180 : ((min(var_5, (var_10 ^ -108))))));
                    var_24 = 65535;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_25 = (arr_13 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_0]);
                        var_26 = ((-883706554 ? (arr_26 [i_0] [i_1 + 1] [i_9] [i_10] [i_0] [i_10]) : (arr_29 [i_1 - 2] [i_0] [i_1 - 2] [i_0] [i_0])));
                        arr_36 [0] [i_1] [i_1] [i_1] &= (arr_31 [i_0] [i_1] [i_9] [i_1 + 1]);
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_27 = (min((max(4268395340, (arr_31 [i_0] [i_1] [i_9] [i_11]))), ((((arr_31 [i_0] [i_11] [i_9] [i_11]) ? -67 : var_5)))));
                        var_28 = (min(-1401244434129805578, (((((-(arr_21 [10] [i_1] [10])))) ? (max((-32767 - 1), (arr_27 [i_0] [i_1] [i_9] [i_11]))) : ((min(-405653598, 0)))))));
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_41 [i_0] [i_0] [i_12] = ((-(max(var_7, (arr_39 [i_12 - 1] [i_12] [i_9] [i_1] [i_0])))));
                        var_29 = (((arr_33 [i_12] [i_1] [i_9] [i_12 - 1] [i_1 + 1]) ? (((arr_33 [i_0] [i_1 - 1] [i_9] [i_12 - 1] [i_1 + 1]) ? (arr_33 [i_12] [i_12] [i_9] [i_12 - 1] [i_1 + 1]) : (arr_33 [i_0] [i_1] [i_1] [i_12 - 1] [i_1 + 1]))) : ((1835159177 ? (arr_33 [i_0] [i_1] [i_9] [i_12 - 1] [i_1 + 1]) : (arr_33 [i_1] [i_1] [i_9] [i_12 - 1] [i_1 + 1])))));
                        arr_42 [i_0] [i_1] [i_9] [i_0] = (arr_40 [i_1] [i_1] [i_1] [i_0]);
                    }
                    arr_43 [i_0] [i_0] = ((var_6 ? (((arr_38 [i_0] [i_1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_9]) ? -12002 : (arr_38 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_1]))) : var_7));
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    arr_48 [i_0] [i_0] [i_1] [i_0] = (arr_6 [i_0] [i_1]);
                    arr_49 [i_0] = (1322 | -649713386);
                }
                var_30 = (arr_23 [i_0] [i_1] [i_0] [i_0]);
                var_31 *= (((arr_22 [i_0]) ? ((((6743 ? 7577389418060021196 : 1)) - (((8101957529055827500 ? (arr_17 [i_0]) : (arr_26 [i_0] [i_0] [i_1 - 1] [i_1] [i_1] [8])))))) : ((((!(((-(arr_29 [i_0] [i_0] [i_0] [2] [i_0]))))))))));
                var_32 = 4829849725038473532;
            }
        }
    }
    var_33 = ((-((var_3 >> (var_6 / -8101957529055827504)))));
    var_34 = (((!((min(305908494, var_4))))));
    var_35 = ((var_6 ? (min(var_9, var_8)) : var_10));
    #pragma endscop
}
