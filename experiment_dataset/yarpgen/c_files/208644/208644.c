/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((((max((arr_7 [i_1 - 2] [5] [i_1] [i_1 + 2]), (arr_7 [i_1 + 1] [i_1] [i_1] [i_1 + 2])))) ? ((min((arr_7 [i_1 + 4] [i_1 + 3] [i_1 + 4] [i_1 + 3]), (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 3] [i_1 - 2])))) : ((min((arr_7 [i_1 - 2] [i_1 + 3] [i_1] [i_1 + 2]), (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 3])))))))));
                    var_22 = 29848;
                }
            }
        }
        arr_9 [i_0] [0] = (arr_4 [i_0] [i_0] [i_0]);
        var_23 = (max((((!(!var_19)))), var_13));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_24 = (arr_8 [i_3] [i_3] [i_3] [i_3]);
        var_25 &= 4282384358879639255;
        var_26 &= 63765;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                {

                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_27 = (var_6 ? (arr_15 [i_5 + 1]) : var_2);
                            arr_21 [i_3] [2] [i_5] [i_5] [i_3] [i_7] = (3641116227 < var_7);
                            var_28 = (((arr_6 [i_7 + 1] [i_7] [i_7 - 1]) ? -8611683050657528502 : var_9));
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_29 = ((!(arr_24 [i_6 - 1] [i_6 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 3])));
                            var_30 = (min(((max(var_19, (arr_18 [i_5 - 3] [i_5 - 3] [i_5] [i_8 - 2] [i_8] [i_8 + 1])))), (((arr_18 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_8 - 2] [i_8] [i_8]) - (arr_18 [i_5 - 3] [i_5] [i_6] [i_8 - 1] [i_8 + 1] [i_8 + 1])))));
                        }
                        for (int i_9 = 4; i_9 < 10;i_9 += 1)
                        {
                            arr_27 [i_3] [i_4] [i_3] = (((((arr_20 [i_5 + 1] [i_5 - 1] [i_3]) / 216)) <= ((((!(~var_15)))))));
                            var_31 = ((-(((arr_0 [i_9 - 3] [9]) << ((((arr_23 [i_3]) > -4122544842376642226)))))));
                            var_32 = 15;
                            var_33 = var_2;
                        }
                        var_34 = (2147483647 && 1943537214894663717);
                    }
                    arr_28 [i_3] = min((max(var_4, var_19)), (((!(arr_7 [i_3] [5] [i_5] [i_5 - 3])))));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_35 = ((((!((16416007187290783534 >= (arr_15 [i_10]))))) ? ((var_7 ? -6522800281570991936 : 1771)) : (((arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) + -1))));
        var_36 = (max(var_36, var_17));
        var_37 = (min(37797, (((var_1 + 9223372036854775807) >> (880376397501668196 - 880376397501668184)))));
        var_38 = (max(var_38, (((var_19 ? (((min(var_5, var_7)))) : (min((arr_1 [i_10] [i_10]), var_13)))))));
        var_39 = (max(var_39, (((var_16 ? ((((arr_0 [i_10] [i_10]) ? (arr_0 [i_10] [i_10]) : 1077566626))) : 8611683050657528502)))));
    }
    var_40 = var_0;
    #pragma endscop
}
