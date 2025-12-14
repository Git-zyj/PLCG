/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((-(((var_13 ? var_9 : var_2))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_16 -= var_2;
        arr_4 [i_0] = var_3;
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = var_2;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_17 = (~var_1);

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_18 += (((1636884272 ? (arr_13 [i_1 - 3] [i_2]) : (arr_13 [i_1 + 2] [2]))));
                            var_19 = (((min(var_10, ((min((arr_7 [15]), (arr_15 [i_1] [i_2] [i_2] [i_4])))))) | (arr_2 [i_3])));
                            arr_19 [i_1] [i_2] = (arr_10 [i_4] [i_1]);
                            arr_20 [i_1] = (arr_1 [i_1]);
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_0 [i_1]);
                        }
                        var_20 = (min(var_20, 255));
                        var_21 = (max(var_21, var_12));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_3] [12] [i_6] = arr_22 [i_1 + 1] [5] [6];
                            arr_25 [i_4] [16] [6] [i_4] [6] [2] [16] |= 242;
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_28 [i_1] = (arr_6 [i_1]);

            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                arr_31 [i_1] [i_1] = (min((arr_30 [i_8] [i_8 + 1] [i_8]), 1438150225));
                arr_32 [i_1] = 2;
                var_22 = (min(var_22, (arr_18 [i_1] [i_7] [i_8] [i_7] [i_1])));

                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    arr_35 [i_1] = -var_4;
                    arr_36 [i_1] [i_1] = var_5;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_39 [11] [i_1] = -1264786423519320432;
                        var_23 ^= (((arr_29 [i_8 + 2] [i_9 - 2] [i_8 + 2]) << (var_10 + 1949932468)));
                        arr_40 [i_10] [i_1] [i_1] [i_1] = (162 ? -0 : (arr_38 [i_1] [0] [0] [15] [0]));
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    var_24 ^= 161509145;
                    var_25 = ((+((var_8 ? (arr_18 [i_11 - 1] [i_1] [1] [i_1] [1]) : (arr_29 [i_1] [i_8] [i_11 + 1])))));
                }
            }
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                var_26 = ((~(((arr_23 [i_1 - 1] [i_1 - 4]) ? (arr_23 [i_1 - 1] [i_1 - 1]) : var_6))));
                var_27 ^= ((~(arr_43 [10] [7])));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_48 [6] [i_1] [i_13] = (161509128 || 161509132);
                var_28 |= (var_13 | var_4);
            }
            var_29 = (arr_38 [2] [2] [i_1 + 1] [12] [16]);
        }
    }
    #pragma endscop
}
