/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_14 = ((-93 ? ((~(((arr_1 [i_2 + 3]) ? 141863388262170624 : 0)))) : ((((((92 ? var_13 : -6528423787056512089))) ? 92 : (-93 ^ 93))))));
                        arr_9 [i_0] &= var_8;
                        arr_10 [i_0] [i_0] [i_2 + 1] [i_3] = ((!((((arr_3 [i_0 - 2]) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 2]))))));
                        arr_11 [8] [i_1] [i_3] [i_1 - 4] [8] [i_1 - 4] = (((((arr_8 [i_0 - 1]) ? (arr_8 [i_0 - 2]) : var_5)) | (arr_8 [i_0 + 2])));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_15 = (((((var_0 ? (arr_5 [i_0 - 2] [i_1 - 2]) : 607619731))) || (arr_2 [7] [i_1 - 4] [i_2 + 2])));

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_16 = (max(var_16, ((((((arr_5 [i_0] [i_1 - 3]) ? ((min(1, (arr_0 [6])))) : (arr_4 [i_4 - 1] [i_4 - 1]))))))));
                            var_17 &= ((~((((arr_5 [i_2] [i_4 - 1]) == (arr_7 [i_0] [i_0] [i_2] [i_0]))))));
                            var_18 = ((var_8 || (arr_7 [i_0] [i_1 + 2] [i_2] [i_4])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_24 [12] [i_0] [i_2] [i_6] = ((-(((arr_2 [i_0] [i_1 - 2] [i_6]) ? var_1 : (arr_2 [i_1 - 1] [1] [i_1 - 1])))));
                                var_19 = ((!((((arr_5 [i_0 - 1] [i_0 - 1]) | (arr_5 [i_0] [i_0 + 3]))))));
                                var_20 = (arr_7 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_1]);
                                var_21 = (min(var_10, (max((((arr_1 [i_2 + 1]) ? 0 : var_12)), 65535))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    var_22 = (((((min((arr_27 [i_8]), 3584)) >> ((((-607619732 ? -607619731 : (arr_27 [i_10]))) - 18446744073101931844)))) == ((((((arr_26 [i_9 + 3]) == var_1)) ? var_9 : var_12)))));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_39 [i_8] [i_11] [i_12] = var_11;
                                var_23 = (min(((var_3 ? (((-66 ? var_7 : (arr_32 [i_12] [i_9] [i_8])))) : (~var_1))), (arr_26 [i_10])));
                                var_24 = (((((arr_29 [i_8] [i_10] [i_11 + 1]) ? -607619732 : var_9))) ? ((1896376968 ? (arr_29 [i_8] [i_10] [i_11 - 3]) : (arr_29 [i_8] [i_9 - 1] [i_10]))) : ((min((arr_29 [i_8] [i_11] [i_12 - 1]), (arr_29 [i_8] [i_9 + 3] [i_12])))));
                                var_25 = (((((607619731 << (!3893913420)))) ? (arr_29 [i_8] [i_10] [i_12]) : ((((arr_25 [0]) && ((max((arr_35 [i_8] [i_8] [i_8]), var_7))))))));
                                arr_40 [i_8] [i_11] [i_10] [i_9] [i_8] = (((((var_12 ? 493651018 : var_0))) ? 93 : (((arr_34 [i_8] [i_8] [12] [i_8] [i_8]) ? (((arr_26 [i_11]) ? 15872 : 0)) : ((-(arr_38 [5] [i_8] [i_11])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_26 = ((((var_9 && (~var_2))) ? ((((((arr_26 [i_13]) ? var_7 : (arr_41 [i_8] [i_8] [i_8]))) | (~46563)))) : var_3));
                                var_27 = (-((3291874544150717931 ? (arr_31 [i_9 + 1] [i_14] [i_14] [i_8]) : (arr_31 [i_9 - 1] [i_14] [i_14] [i_8]))));
                                var_28 = var_11;
                            }
                        }
                    }
                }
            }
        }
        var_29 = 0;
        var_30 = var_5;
    }
    #pragma endscop
}
