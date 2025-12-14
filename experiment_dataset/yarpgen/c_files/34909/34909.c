/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_9;
        var_13 = (min(var_13, (((((((arr_1 [i_0]) - 0))) ? (((var_2 ? 0 : 8191))) : (arr_1 [i_0]))))));
        arr_3 [i_0] = 1268046178;
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_14 = (arr_10 [i_1] [i_1] [i_1]);
                            var_15 = 8215;
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            arr_20 [i_1] [i_4] = -8755;
                            arr_21 [i_3] = ((var_7 ? 65535 : (arr_10 [i_6 - 1] [i_6 + 1] [i_6 - 1])));
                            var_16 ^= ((!((var_11 || (arr_5 [i_2])))));
                            arr_22 [i_1] [i_1] [i_3] [i_4] [i_6] = (((arr_19 [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]) ? 8191 : 7684));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_17 = (!8185);
                            arr_26 [i_1] [i_1] [i_3] [i_4] [i_7] = var_4;
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_29 [i_1] [i_2] [i_2] [i_3] [i_4] [i_2] = arr_15 [i_1] [i_1] [i_4] [i_8];
                            arr_30 [i_8] [i_4] [i_1] [i_3] [i_3] [i_2] [i_1] = (((max((arr_15 [i_1] [i_1] [i_4] [i_8]), (arr_15 [i_1] [i_1] [i_1] [i_1]))) - ((var_2 ? (arr_15 [i_1] [i_2] [i_2] [i_2]) : (arr_8 [i_4] [i_4] [i_1])))));
                            var_18 = (((!2147483647) + (!15457195684349881026)));
                            var_19 -= (((max(((16777215 ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : 65526)), var_3)) > 8164));
                            arr_31 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = ((((((32767 >> 10) | ((var_11 ? 615879324 : var_1))))) ? (((var_9 == (arr_12 [i_3] [i_3] [i_3] [i_3])))) : var_4));
                        }

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            arr_34 [i_9] [i_4] [i_4] [i_4] [i_4] = (var_6 ? (arr_17 [i_2] [i_9 + 3] [i_9 + 2] [i_9] [i_9]) : var_1);
                            var_20 = ((((-24 ? 7086 : (arr_18 [i_1] [i_2]))) & (((arr_19 [i_9 - 1] [i_4] [i_3] [i_2] [i_2] [i_1]) ? 536822296 : (arr_16 [i_1])))));
                            var_21 = (!var_10);
                        }
                        arr_35 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = max(64302, (((-615879324 + 2147483647) >> 10)));
                        var_22 = (min(var_22, (arr_33 [i_1])));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        var_23 = var_2;
                        var_24 = var_4;
                    }
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        var_25 = ((((-(max(4095, -615879324)))) & ((-615879324 / (arr_12 [i_2] [i_2] [i_11 - 1] [i_11 - 1])))));
                        var_26 = (((~((max(var_5, (arr_28 [i_11] [i_1] [i_3] [i_2] [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 10;i_12 += 1)
                    {
                        var_27 = ((-1298773836 ? 65532 : 16777215));
                        arr_43 [i_1] [i_2] [i_1] [i_3] [i_12] = (408 < (!-1298773837));
                    }
                    arr_44 [i_1] [i_1] [i_1] [i_1] = (((((var_5 * (!65535)))) ? ((max(14706, 19))) : 8191));
                    var_28 = ((((0 ? 65510 : 0))) ? (((arr_17 [i_1] [i_2] [i_2] [i_3] [i_3]) ? 615879324 : 1)) : ((max(8191, 57338))));
                }
            }
        }
    }
    var_29 = (min(var_29, (((((((!16777215) ? ((var_10 ? var_7 : 7)) : ((65524 ? 13255 : (-32767 - 1)))))) ? var_8 : (max(var_11, ((var_10 ? 8191 : var_0)))))))));
    var_30 ^= var_5;
    #pragma endscop
}
