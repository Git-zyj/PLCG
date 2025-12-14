/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (min((((min(3932826833105729250, var_1)) & ((((arr_5 [i_0] [0] [i_1] [i_2]) ? var_8 : (arr_3 [i_2])))))), ((max((~140), (arr_1 [1]))))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_18 = ((-(3932826833105729240 < -7082004110331973966)));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_19 = 1;
                            var_20 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_21 = (arr_2 [i_0] [i_0] [i_0]);
                            var_22 = (arr_0 [i_5]);
                            var_23 = ((((min((arr_7 [i_3 + 2]), (arr_7 [i_3 + 2])))) ? (!var_14) : (arr_7 [i_3 - 1])));
                            var_24 = (arr_4 [i_0] [i_1] [i_1 + 1] [i_1 - 3]);
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_25 = ((+(((arr_1 [i_6 + 1]) ? (arr_1 [i_6 + 1]) : (arr_5 [i_6 + 1] [i_3 + 1] [i_1 + 1] [i_1 + 1])))));
                            var_26 |= (arr_15 [i_0] [2] [i_0] [i_0]);
                        }
                        var_27 = (arr_8 [i_1 - 3] [i_1] [i_1] [i_1] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_28 = 409543914;
                        var_29 -= ((((max(var_6, var_10))) ? (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 3]) : (((((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_2]) != (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 3] [i_2])))))));
                    }

                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_30 = (arr_3 [i_8 + 1]);
                            var_31 = (((arr_6 [i_9] [i_1 + 1]) * (2575491908 - 3832550437696961804)));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_32 = ((0 ? (arr_9 [i_0] [i_0] [i_2] [i_8] [3]) : (arr_14 [i_0] [i_1] [i_1] [i_1 - 2] [i_8 - 3])));
                            var_33 = (arr_15 [i_10] [i_8 + 1] [i_1] [i_1 - 3]);
                        }
                        var_34 = ((var_7 - (arr_10 [i_8] [i_2] [i_1] [i_1] [i_0] [1])));

                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            var_35 = (max(var_35, 31343));
                            var_36 = (((arr_26 [i_1 - 2] [i_1 + 1] [i_8 - 2]) ? 16476086702298515424 : (!var_7)));
                            var_37 = (max(var_37, (arr_9 [i_0] [i_1] [i_2] [i_8] [i_11])));
                            var_38 = (~var_6);
                            var_39 = (arr_29 [i_11 - 1] [i_8 - 1] [i_8 - 3] [i_8 - 3] [i_1 - 2]);
                        }
                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            var_40 = -6244351760068687857;
                            var_41 = (((arr_23 [i_12] [i_12 + 1] [i_8 - 2] [i_1 - 1]) / var_15));
                            arr_37 [i_12] [i_8 - 3] [i_2] [i_1] [1] [i_0] = ((~(arr_9 [i_12] [1] [i_12 - 2] [i_12] [i_12])));
                            var_42 = arr_23 [i_0] [i_0] [i_0] [i_0];
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                            arr_42 [i_13] = ((11150803523966985829 <= (arr_31 [i_13] [i_13] [8] [i_8] [i_8 - 2] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_43 *= min(var_2, ((((var_5 ? 0 : var_3)))));
    #pragma endscop
}
