/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_17, var_15));
    var_19 = (var_15 || (~11975831172983197346));
    var_20 = max(var_14, (~var_7));
    var_21 &= (~31);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 &= (arr_1 [i_0]);
        arr_3 [i_0] = (min(6470912900726354269, (arr_0 [i_0] [i_0])));
        arr_4 [6] [i_0] = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_16 [i_0] [i_1 + 2] [i_0] [i_3] = (max(((~(arr_0 [i_1 + 1] [i_1 - 3]))), (~-940816370)));
                        arr_17 [i_0] [i_1 - 2] [0] [i_2] [i_2] [i_3] = 51;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_23 = (arr_10 [i_4] [i_5] [0]);
                    var_24 = (min(var_24, (max(((max(var_15, (arr_1 [i_4])))), ((var_8 ? (~-940816350) : var_0))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_25 = (min(var_25, (~var_3)));
                        arr_28 [i_5] [6] [i_6] [i_7] = ((~(arr_15 [i_6])));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_26 = (arr_21 [i_5] [i_5] [1]);
                        arr_32 [i_4] [i_5] [i_4] [i_6] &= ((((arr_15 [i_8]) ? var_5 : ((max((arr_26 [i_4]), var_8))))));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_35 [i_5] = ((((~(arr_21 [i_5] [i_5] [i_9]))) >= (arr_21 [i_5] [i_8] [i_9])));
                            var_27 &= (max((((var_12 ? (arr_31 [i_4] [i_5] [i_6] [i_9]) : (arr_31 [i_4] [i_4] [7] [i_8])))), (((arr_31 [i_4] [i_5] [5] [i_9]) ? (arr_31 [i_4] [i_5] [i_6] [i_8]) : 1268705233))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_39 [i_4] [i_5] [i_5] [i_6] [i_8] [i_10] = (((~-30156) ? ((+(((arr_1 [i_5]) + var_10)))) : var_16));
                            arr_40 [i_4] [i_5] [i_6] [i_8] [i_6] [i_10] = var_14;
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            arr_43 [4] [i_8] [i_5] = (~1268705236);
                            var_28 &= (1268705236 & 65);
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_29 &= (~-1900639880);
                            arr_47 [i_4] [i_5] [i_5] [i_8] [i_12] = var_5;
                            arr_48 [i_4] [i_5] [i_5] [2] [i_6] [i_8] [i_12] = (~var_14);
                        }
                        arr_49 [i_4] [i_6] &= (max(var_0, (arr_34 [i_4] [i_4] [8] [i_6] [i_8])));
                        arr_50 [i_4] [i_4] [i_5] [i_5] [i_8] = ((~((((arr_44 [i_5]) >= 97)))));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        arr_53 [i_4] [i_5] [i_6] [i_6] &= (max(var_14, (32767 ^ 196)));
                        var_30 &= (max((((var_11 ? var_14 : (max((arr_38 [1] [i_5] [2] [i_6] [11] [i_6] [11]), var_7))))), (1 + 7132778128269869961)));
                    }
                }
            }
        }
        var_31 = (max(var_31, (~var_13)));
    }
    #pragma endscop
}
