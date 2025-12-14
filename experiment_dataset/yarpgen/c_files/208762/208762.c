/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(var_11, (min(var_11, var_4)))), var_17));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] = ((((((10624 ? (arr_4 [i_2]) : 65535))) ? (((arr_0 [1] [i_1]) | (arr_2 [3]))) : (54923 & 54920))));
                    var_20 ^= ((7380543708915519465 ? (arr_1 [0]) : 0));
                    var_21 = ((!((((min(7, -14)) | (((max(var_2, var_15)))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_15 [7] [i_4] [7] = (min((arr_9 [i_3]), (arr_1 [i_4])));

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_22 &= (min((((((max(1, 10621))) ? ((105 | (arr_3 [19] [16]))) : 1))), ((7125187789526595079 ? 18446744073709551615 : (-4390349520461519515 <= 4611686018427387903)))));

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_23 -= (max((((((var_6 ? 87 : (arr_3 [i_4] [i_5])))) ? 10 : (arr_19 [i_3] [10] [i_6]))), (arr_10 [i_5 + 1])));
                        var_24 = ((var_8 ? ((var_18 - (arr_6 [i_6 - 1] [i_6] [i_6] [15]))) : ((var_9 - (arr_17 [i_5 - 1] [i_5 + 1] [i_6 + 1] [1])))));
                        arr_20 [i_4] [i_5] [i_4] = ((((((((1 ? var_12 : var_6))) ? (min(1, 11321556284182956534)) : (arr_17 [i_4] [i_3] [0] [i_4])))) ? (((18446744073709551615 ? (((arr_18 [i_4] [i_4] [1]) & 1)) : (!153)))) : (max((24065 & 4), ((1 ? var_4 : var_13))))));
                    }
                    var_25 = (max(var_25, (arr_6 [19] [i_3] [i_5 - 1] [i_5])));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_26 += (-((5 ? 14 : (min(1769950491812656428, (arr_19 [i_3] [12] [i_7]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_27 |= (((min(0, (arr_8 [i_4]))) & (((-(((26 < (arr_12 [i_3] [i_3] [4])))))))));
                                var_28 = (max((arr_28 [i_9 - 2] [i_9] [i_4] [i_9 + 1] [i_9 - 2] [i_9 + 1] [3]), (arr_26 [i_9 + 1] [i_4] [i_9] [i_9 + 1] [i_9])));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_29 = var_6;
                        arr_31 [i_3] [i_3] [i_4] [i_7] [i_10] = ((min(14088451435066155862, 10502992634578724475)) & var_5);
                        arr_32 [4] [i_4] [i_10] = ((((0 ? 14 : (arr_29 [5] [i_7] [i_7] [i_7]))) < (((!54941) | (!var_18)))));
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        arr_38 [i_3] [i_4] = 18446744073709551601;
                        var_30 = (min(var_30, (3678196665 && var_11)));
                        var_31 = (arr_28 [i_12] [i_11] [i_4] [i_4] [i_4] [i_3] [i_3]);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_32 ^= 784484225;
                                var_33 = var_11;
                                var_34 = (((((-1 <= (arr_41 [i_4] [i_4] [i_11])))) < var_7));
                            }
                        }
                    }
                    var_35 = ((var_12 < ((((((arr_21 [i_3] [i_3] [10]) + 2147483647)) << (var_7 - 5979710163572652600))))));
                }
                arr_45 [i_4] [i_4] = 1;
            }
        }
    }
    #pragma endscop
}
