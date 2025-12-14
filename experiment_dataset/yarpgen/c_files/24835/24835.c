/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) & 0));
        arr_3 [i_0] [i_0] = ((~(((arr_0 [i_0 + 1] [i_0 - 1]) ^ 1))));
        var_20 = ((!(((~(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_8 [1] = ((((((((var_9 / (arr_6 [i_1])))) ? (((arr_7 [i_1] [i_1]) ? (arr_4 [8] [i_1]) : (arr_4 [6] [8]))) : 1))) ? 32767 : ((~(arr_0 [i_1] [i_1])))));
        var_21 = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_22 = ((((~(var_18 * 32767))) <= (!0)));
        var_23 = ((-(((arr_11 [i_2] [i_2]) ? 0 : (min(-1514423282, (arr_0 [i_2] [16])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_19 [i_4] = (~var_3);

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_24 = (max((((((max(var_19, (arr_4 [i_4] [10])))) ? ((-(arr_21 [i_4] [i_4] [i_4] [8] [i_4]))) : ((min((arr_6 [6]), (arr_17 [i_2] [i_2] [i_4] [0]))))))), 6));
                        arr_22 [2] [i_4] [i_4] = ((0 ? (arr_21 [i_4] [4] [i_5 + 1] [i_4] [i_3]) : (arr_21 [i_4] [i_2] [7] [i_4] [i_5 + 1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_25 = -var_12;
                        var_26 = (min(var_26, ((((((arr_1 [i_2]) + 9223372036854775807)) >> (var_2 + 1834))))));
                        var_27 = 1;
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_28 = var_17;
                        var_29 += (((((arr_12 [i_2] [i_3] [i_7 + 1]) + 2147483647)) << (((((arr_12 [i_2] [i_2] [i_7 - 1]) + 1126303488)) - 8))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            {
                                arr_34 [i_3] [i_4] [i_3] [i_3] = -54783502;
                                var_30 = (((min((((arr_1 [i_4]) <= var_3)), (-406288860 != 0))) ? (arr_1 [i_4]) : ((((((min((arr_6 [4]), 34688))) < ((min((arr_33 [i_4] [1] [3] [i_8] [1] [i_3] [i_4]), (arr_33 [i_4] [5] [i_3] [i_4] [i_8] [i_9 + 3] [i_9]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (var_14 != (((((var_8 ? var_13 : var_8))) * ((var_11 ? var_16 : 4328)))));
    #pragma endscop
}
