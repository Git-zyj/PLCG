/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-(var_8 - var_16)))) ? (((1382975054 ? 1382975029 : var_13))) : (((3 ? 2385762309 : ((var_5 ? 4294967287 : var_3)))))));
    var_18 = var_2;
    var_19 = ((-((~((max(var_11, var_16)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (max((((max(65535, var_16)))), (arr_2 [i_0] [i_1])));
                        var_21 += (((((((min(var_9, -1710010))) ? ((var_12 - (arr_3 [i_3] [i_0]))) : 46))) ? ((3 & (arr_2 [i_0] [i_1]))) : -140));
                        var_22 -= (arr_2 [i_3] [i_0 + 1]);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_13 [i_1] [i_1] [i_2] = (!var_2);
                            var_23 = (((~var_12) ? 1382975054 : (var_13 >= var_16)));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_24 = (((((var_9 >> (((arr_4 [i_0 - 2]) - 7357))))) && ((14830516885437607790 || (arr_4 [i_0 + 1])))));
                            var_25 = (min((((!(~18446744073709551612)))), (min((arr_4 [i_1]), ((((arr_1 [15] [16]) < var_4)))))));
                            var_26 = ((((((10174374464113138073 ? 64723 : var_3)))) ? (min(((max(var_15, 13))), (max(var_13, var_16)))) : var_8));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_27 = (!var_6);
                            var_28 = (max((arr_19 [i_2 + 2] [i_2 - 3] [i_2 - 2] [i_0 + 1] [i_0 - 2]), 819));
                            var_29 = ((~((((max(var_11, var_0))) ? (((6307288071156575635 ? var_10 : var_5))) : (~2574133755640792479)))));
                        }
                        arr_20 [i_1] [i_2] = (arr_1 [i_4] [i_2]);
                        var_30 = (arr_0 [i_2 + 1] [i_0 - 2]);
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_31 = ((-1382975065 ? (((arr_1 [i_0 + 1] [i_2 + 1]) + var_4)) : (((((var_13 ? (arr_6 [i_8] [i_1] [15] [i_8]) : 65532)) << (61 - 43))))));
                        arr_24 [i_2] [i_1] [11] [i_8] = (max(var_6, (arr_16 [i_0 - 1] [i_1] [5] [i_8])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_32 = ((((1 + (arr_5 [0] [i_1] [i_2]))) + (arr_8 [i_0] [i_1] [i_1] [i_9])));
                            var_33 *= ((var_5 ? (arr_0 [i_2] [i_0 - 2]) : 2032043139));
                        }
                        for (int i_11 = 4; i_11 < 17;i_11 += 1)
                        {
                            arr_33 [i_0 - 1] [i_0 + 1] [i_0] [i_2] [8] [i_0 - 1] = 73;
                            arr_34 [i_0] [i_2] [i_0] [i_0 - 1] [i_0] = ((-(arr_21 [i_2] [i_2])));
                            arr_35 [i_11] [i_2] [i_2] [i_2] [i_0] = (((arr_16 [i_0] [i_1] [i_2] [i_2]) | (arr_16 [i_0] [i_1] [i_2] [i_9])));
                            arr_36 [5] [i_2] [i_2] [i_2] [i_0] = (arr_18 [i_2] [i_11 - 2] [i_2] [i_0 - 2] [i_2 - 1]);
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_34 = var_9;
                            var_35 = ((-(arr_14 [i_0 + 1] [11] [i_0] [i_0 - 2] [i_0 - 1])));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_44 [i_13] [i_2] [i_2] [i_0] = var_0;
                            var_36 = (max(var_36, 1));
                        }
                        var_37 = ((0 ? ((var_7 / (arr_27 [i_0 + 1] [i_0 + 1] [i_2 - 3] [i_9] [i_1] [i_0 - 1] [3]))) : 200));
                    }
                    var_38 = 471656472;
                    var_39 = (((!(((-(arr_3 [13] [i_0])))))));

                    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        arr_48 [i_0 + 1] [i_2] [i_0] [i_14] = max((arr_16 [i_0 - 2] [i_0 + 1] [i_0 + 1] [9]), var_5);
                        var_40 = ((-((~(min((arr_10 [i_14] [i_2] [i_1] [19]), var_6))))));
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_41 ^= (max(29, ((((1 <= 0) == var_7)))));

                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_42 = ((((max((((var_2 <= (arr_45 [i_1] [i_2])))), var_15))) ? 164 : ((-(-1727524608 - 65529)))));
                            var_43 = (min((max((min(2574133755640792479, 2032043144)), var_12)), ((~(61377 + var_4)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
