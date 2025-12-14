/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_8, var_0))) ? 30 : var_1));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = (min(var_14, 208));
        var_15 = (min(((((-(arr_0 [i_0] [i_0]))) * 929913849591626828)), ((((arr_0 [i_0] [i_0]) == (((arr_1 [i_0]) & (arr_0 [i_0] [i_0 - 1]))))))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_16 *= (arr_6 [i_1 - 2]);
            arr_7 [i_0] [i_1] = var_0;
            var_17 = (((max(1, (((arr_2 [0] [1]) || (arr_3 [i_1 - 2] [1]))))) ? var_7 : (arr_3 [i_0] [i_1])));
        }
    }
    var_18 = (~var_1);

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_19 += (((arr_8 [i_2 + 1] [i_2 + 1]) + (((arr_9 [i_2 + 1] [i_2 + 1]) ? (arr_9 [i_2 + 1] [i_2 + 1]) : (arr_8 [i_2 + 1] [i_2 + 1])))));
        arr_10 [i_2] = (min((min(97, (((arr_8 [i_2] [i_2]) ? 28 : 33)))), var_6));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_13 [i_3] [i_3 - 1] = 69;
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {

                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_6 [i_3]) % -474278051612425304)))));
                            var_21 -= 146;
                            var_22 += var_11;
                        }
                        arr_25 [11] [i_3] [i_5] [3] [11] [i_3] = (arr_4 [i_6]);

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            arr_28 [12] [i_4] [i_3] [i_6] [i_4 + 1] = (arr_11 [i_3 - 1] [i_5 - 1]);
                            arr_29 [i_3] [i_4] [i_5] [i_3 - 1] [i_3 - 1] [i_8 - 2] [i_5 - 1] = ((-33 ? ((var_7 ? var_1 : var_5)) : (arr_17 [3] [i_5 - 1] [i_5 - 1])));
                            var_23 = (min(var_23, 1));
                            var_24 = (min(var_24, ((((((var_5 ? (arr_18 [i_5 - 1]) : var_6))) ? ((56 ? 72 : 7977944427501710848)) : (!var_8))))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_25 |= ((var_6 / (-17433 % 32)));
                            var_26 *= ((((~(arr_31 [i_4] [i_4] [i_4] [i_6] [i_9] [i_6] [i_4]))) + (((arr_1 [i_6]) - var_10))));
                            var_27 = (arr_2 [i_5] [i_5]);
                        }
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            var_28 = (max(var_28, (((0 ? -8121577652181566256 : 124)))));
                            var_29 = (min(var_29, ((((((arr_32 [i_3] [i_4] [6] [i_6] [i_10 + 1] [i_10]) ? var_1 : (arr_11 [i_3 - 1] [9]))) | ((((!(arr_16 [i_3] [i_3] [i_5 - 1]))))))))));
                            arr_35 [i_10] [i_3] [i_5] [i_4] [i_3] = ((+(((arr_33 [i_5]) ^ 123))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 14;i_12 += 1)
            {
                {
                    arr_41 [i_3] [i_3] = (!(arr_33 [i_3 + 1]));
                    var_30 = (arr_0 [0] [i_12]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 21;i_13 += 1)
    {
        arr_44 [i_13] = (((arr_42 [i_13 - 1]) ? (arr_43 [i_13 + 2]) : (arr_43 [i_13 - 1])));
        arr_45 [i_13 + 1] |= 69;
        var_31 = ((+(((arr_42 [i_13 - 1]) & (arr_42 [i_13])))));
        var_32 += var_8;
    }
    #pragma endscop
}
