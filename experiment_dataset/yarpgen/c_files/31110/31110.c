/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_20 = (((arr_9 [i_0] [i_0] [i_2]) ? (arr_7 [i_0 + 1]) : (arr_2 [i_0])));
                arr_10 [i_2] [i_1] [i_2 + 2] = var_13;
                arr_11 [i_2] = (arr_9 [13] [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_21 = var_19;
                            arr_17 [i_4] [i_4] [i_2] [i_2] [12] [i_0] = (var_19 ? (arr_8 [i_2] [i_1 - 1] [i_1]) : (arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1]));
                            var_22 &= (arr_15 [i_0] [i_0] [i_2 - 1] [i_4] [i_2 - 1]);
                        }
                    }
                }
            }
            arr_18 [i_0] [i_0] &= (((arr_15 [i_0 + 1] [i_0 + 1] [8] [2] [i_1 - 1]) >> (((arr_15 [i_0 + 1] [i_0 + 1] [i_0] [2] [i_1 + 1]) - 96))));
            arr_19 [i_0] = var_16;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_23 = (max(var_23, (arr_9 [i_6] [i_0] [i_0])));
                        arr_26 [i_1] [i_5] = 0;
                    }
                }
            }
            var_24 = (max(var_24, ((!(arr_4 [i_0] [i_1 - 1])))));
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] |= (((arr_14 [i_0] [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_0]) ? (arr_14 [i_0] [i_7] [i_0] [i_7 + 1] [i_7]) : (arr_14 [i_0 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
            arr_30 [i_0] [i_0] [i_7 - 1] = (((arr_12 [i_7] [12] [4] [10] [i_0 + 1] [i_7]) == -1));
            arr_31 [i_0] = (-4318902404107954205 > 65535);
        }
        var_25 = (max(var_25, (arr_8 [6] [i_0 + 1] [i_0])));
        var_26 = 65535;
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
    {
        var_27 &= (min((arr_33 [i_8]), (arr_14 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1])));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    {
                        var_28 = ((min((((arr_40 [i_8 + 1] [i_8] [i_9 + 2] [12] [i_10] [3]) / (arr_21 [i_8] [i_10] [i_8]))), (arr_37 [11] [i_8 + 1] [i_11 + 2] [i_8]))) < (max(-32, var_12)));

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_29 = (max(var_29, ((max((arr_36 [i_12] [i_12]), ((min(-32, ((((arr_20 [i_12] [i_9] [i_10] [i_11]) > (arr_42 [i_8] [7] [i_12]))))))))))));
                            var_30 = var_19;
                            var_31 = ((((((arr_37 [i_8] [i_8 + 1] [i_8] [i_8]) ? ((min((arr_40 [i_8] [6] [i_9] [i_10] [i_9] [i_12]), var_18))) : (((arr_3 [i_8] [i_12]) ? (arr_43 [i_8] [i_8]) : 9223372036854775807))))) || (arr_41 [8] [i_9] [i_9] [i_9 + 2] [i_8] [9] [i_9 + 3])));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_32 &= (1 <= (arr_12 [6] [i_9] [6] [i_9 + 3] [12] [i_10]));
                            arr_46 [i_8] [i_8] [10] [i_11] [i_13] = ((((2 == ((max((arr_32 [i_11] [i_8]), var_19))))) ? ((max((arr_27 [i_10] [i_10]), 255))) : ((min(var_17, var_16)))));
                            arr_47 [i_8] [0] [i_8] [i_8] [i_13] = ((((max((max((arr_7 [i_11]), (arr_34 [i_8]))), (arr_24 [i_8 + 1] [8] [i_8] [i_8 + 1])))) ? ((min((max(1200017452, 37)), ((max(32, 0)))))) : var_12));
                            var_33 = ((((((arr_23 [i_11 + 1] [i_11 + 1] [i_11 - 2] [i_11 + 2]) || (arr_23 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 2])))) + (arr_43 [i_8] [i_8])));
                        }
                        var_34 = (min((((((max(var_8, var_16))) >= ((min((arr_12 [11] [11] [i_9 + 3] [i_9 + 3] [i_10] [i_8]), (arr_12 [i_8] [i_8] [i_10] [i_8] [i_8] [i_8]))))))), ((-((3289550170 ? var_9 : (arr_28 [i_11] [i_8])))))));
                    }
                }
            }
        }
    }
    var_35 *= var_8;
    var_36 = (max(255, (max(((1 ? var_17 : 162)), 5))));
    #pragma endscop
}
