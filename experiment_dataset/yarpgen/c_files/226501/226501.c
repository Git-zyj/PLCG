/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_0 - 1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_2] [i_1] [1] [i_0] = (((arr_5 [i_0]) ? (((arr_0 [i_0]) ? var_3 : (arr_4 [i_0]))) : var_5));
                        arr_14 [i_0] [i_1] [i_1] [i_0] = (((((var_14 ? (arr_9 [i_0 + 1] [i_1] [0] [0]) : var_4))) ? ((254465141 ? 254465153 : 7441600044008009710)) : (((-7441600044008009710 ? var_7 : var_8)))));
                        arr_15 [i_2] [i_1] [i_0] = var_15;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_1] [i_4] [i_5] [i_1] = ((var_2 ? var_14 : (arr_5 [i_0])));
                            var_18 = (arr_19 [i_0]);
                            var_19 *= (arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_20 = (((arr_8 [i_0 - 1] [i_0] [i_0 + 1]) && (arr_8 [i_0 - 1] [i_0] [i_0 + 1])));
                            var_21 = (min(var_21, ((((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) / var_14)))));
                            arr_26 [i_6] [i_0] [3] [i_1] [i_0] [i_0] [i_0] = ((var_6 ? (((179 >= (arr_11 [i_0] [i_0] [5] [i_0] [i_4] [i_6])))) : (arr_23 [i_0] [i_1] [i_2] [i_4] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_22 = var_9;
                            var_23 = (min(var_23, -920160033));
                            arr_29 [i_0 - 1] [i_0] [i_2] [i_2] [9] [i_7] = ((((((arr_0 [i_0]) ? var_14 : (arr_27 [i_0] [i_0] [i_2] [i_4] [4])))) ? (arr_20 [i_0] [i_2] [i_2] [i_0] [i_0] [i_1] [i_2]) : (arr_0 [i_0])));
                        }
                        var_24 = (min(var_24, ((min((min(((max(var_9, 254465119))), -7441600044008009710)), (arr_25 [i_0] [i_0] [i_4] [i_1] [i_2] [i_2] [i_2]))))));
                        arr_30 [i_0] [i_0] [i_2] [i_2] = (((((((((arr_22 [i_0] [i_0] [i_1] [i_1] [i_1] [i_4]) ? var_12 : (arr_8 [0] [i_0] [i_2])))) ? (arr_0 [i_0]) : var_5))) ? (~var_7) : var_7));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_25 = ((var_7 / (((max(254465153, (arr_28 [i_0] [i_8] [i_0] [i_8] [i_1] [i_2])))))));
                        arr_34 [i_0] [i_1] [i_2] [i_1] [i_0] = ((((((max(var_13, (arr_19 [i_0]))) * ((((var_10 && (arr_7 [i_0] [i_1] [i_0] [1])))))))) ? ((((((max((arr_1 [i_0]), var_14)))) % (((arr_28 [i_0] [i_0] [i_0] [i_2] [i_8] [i_8]) ? var_13 : (arr_5 [i_0])))))) : -var_0));
                        var_26 *= var_4;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_27 = (arr_39 [i_1] [i_10] [i_9] [i_1] [i_1] [i_1] [i_0]);
                                var_28 = max(((920160036 ? 240 : 240)), ((((max(var_12, var_14))) ? ((((arr_35 [i_2] [i_0] [i_2] [i_0 + 1] [i_0] [i_0 + 1]) <= (arr_39 [i_0 + 1] [i_0 + 1] [i_9] [i_0 + 1] [i_10] [i_0 - 1] [i_0 + 1])))) : (arr_6 [i_9]))));
                            }
                        }
                    }
                    arr_41 [i_0] [i_1] [i_2] = ((max(var_0, var_14)));
                }
                arr_42 [i_0] = (((~var_1) ? (((-254465126 >= (arr_10 [i_1] [i_0] [i_1] [i_0] [i_1])))) : (min(var_10, ((var_6 ? (arr_7 [3] [i_1] [3] [i_1]) : (arr_25 [i_0 + 1] [i_0 + 1] [i_0] [15] [i_0 + 1] [i_1] [5])))))));

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_29 = arr_28 [i_1] [0] [i_1] [i_1] [8] [8];
                    var_30 = (((-(max((arr_40 [i_0 - 1] [i_0 - 1] [17] [i_1] [i_0] [i_0] [i_1]), (arr_28 [i_0] [i_1] [i_0] [i_1] [i_0 - 1] [i_11]))))));
                    var_31 = (min(var_31, ((min((max(var_6, var_0)), (arr_12 [i_1] [i_1]))))));
                    arr_45 [i_0] [i_1] [i_0] [i_0] = (((((((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [7]) ? var_2 : (arr_10 [i_0] [i_0] [i_11] [i_0] [i_0])))) ? 7441600044008009710 : (((((arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) >= (arr_9 [2] [2] [i_11] [i_11]))))))));
                }
            }
        }
    }
    #pragma endscop
}
