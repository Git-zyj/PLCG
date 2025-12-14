/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((!(arr_3 [i_1])));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 += (arr_4 [17]);
                    var_19 = ((var_11 ? ((((((arr_3 [12]) + 9749))) ? (arr_7 [i_0 + 3] [i_0] [i_0] [i_0 + 3]) : (((!(arr_3 [i_1])))))) : (((!(((var_14 ? var_11 : (arr_7 [i_0] [1] [11] [i_2])))))))));
                    var_20 = 65535;
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_11 [i_3] [i_3] = ((((var_16 ? 0 : 498603469)) ^ var_8));
                    arr_12 [i_3] [14] [i_3] = (((arr_1 [i_1] [i_3]) ? (arr_3 [i_0]) : (((-(((arr_1 [3] [3]) ? 1 : (arr_7 [i_0 - 3] [i_0 - 3] [16] [i_0]))))))));
                }

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_21 = 0;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_22 [1] [i_1] [i_1] [1] [1] = (arr_13 [i_0] [4]);
                                var_22 = -1304231431;
                                var_23 = 1;
                            }
                        }
                    }
                }
                for (int i_7 = 4; i_7 < 15;i_7 += 1)
                {
                    var_24 = ((+(((((arr_9 [7] [7]) ? 90 : (arr_17 [i_0])))))));
                    var_25 = (min(var_17, (((-101 ? 3671893632657833295 : (arr_6 [i_0] [i_0] [i_7]))))));

                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_26 += (!var_13);
                        var_27 += var_8;

                        for (int i_9 = 4; i_9 < 17;i_9 += 1)
                        {
                            var_28 = (((((arr_8 [i_1] [i_7 + 3] [i_8] [i_9]) + (max(var_1, 0)))) / var_16));
                            var_29 = (max(-15752, 1018198751));
                            arr_29 [2] [1] [0] [0] [i_9] = 3860988509229299196;
                            var_30 = -5872978469663500606;
                        }
                        var_31 = ((!((min((arr_15 [1] [i_7 - 2] [i_7 - 3]), 155)))));
                        var_32 = ((((arr_21 [14] [i_7] [12] [i_0]) + (arr_21 [16] [i_7 + 2] [15] [i_0 - 2]))));
                    }
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        var_33 = ((~(((arr_2 [i_0] [i_7] [i_0]) ? var_0 : (var_11 * -29482)))));
                        var_34 = (~(((95 != (arr_16 [i_0] [i_1])))));
                        var_35 = ((((((arr_23 [i_7 - 4] [10] [i_7]) || (arr_16 [1] [i_7])))) | 26407));
                        var_36 = 11164573688965485161;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_37 = (max((arr_0 [6]), (min(((max(var_1, (arr_18 [0] [i_1] [i_7])))), var_0))));
                                var_38 += var_5;
                                arr_40 [8] [i_1] [2] [i_11] [i_12] [i_12] [13] = ((1 == ((~((var_4 ? 1 : (arr_6 [i_0] [i_1] [i_7])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 = var_3;
    var_40 = -1136646283;
    #pragma endscop
}
