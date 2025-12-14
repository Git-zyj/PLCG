/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_15 ? 29882 : (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))))) * 0));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((1 >> 0) < 75)))));
                                var_19 = (min(var_19, (arr_0 [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1 - 2] [i_2] [i_5] [i_6] = ((((-19 ? ((var_1 ? 1518542781 : -2)) : (((((arr_19 [i_6] [i_6] [i_1]) <= 1)))))) ^ ((((((arr_15 [i_1 + 1] [i_2] [i_2] [i_1 + 1] [i_0]) % var_5))) & ((16383 + (arr_15 [i_6] [i_1 - 2] [i_5] [i_6] [i_6])))))));
                                var_20 = 0;
                                var_21 = ((((((((var_14 ? var_16 : -69)) <= ((min(1206275092, var_12))))))) + (min((min(2091689395, (arr_15 [i_2] [i_1] [i_0] [i_0] [i_6]))), ((-23907 ? (arr_10 [i_6] [i_6] [i_1] [i_1] [i_1 + 1] [i_0]) : var_14))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, ((((arr_15 [4] [i_1] [i_0] [i_0] [i_0]) ? var_2 : 2203277900)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_23 [i_7] = ((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]) + (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]));
        var_23 = var_7;
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_24 *= (255 - var_13);
        arr_27 [i_8 + 2] [i_8] = (max((((arr_26 [i_8 + 3] [i_8 + 4]) / (arr_26 [i_8 + 3] [i_8 - 1]))), ((min((arr_26 [i_8 - 1] [i_8 + 1]), var_7)))));
        var_25 *= (min(((var_10 ? ((var_11 ? (arr_25 [1]) : 0)) : ((max((arr_24 [i_8]), 31))))), (((max((arr_25 [i_8]), var_16))))));
        arr_28 [i_8 + 4] = ((((min(268435455, (((-(arr_26 [i_8] [i_8 + 1]))))))) ? (((arr_26 [i_8 + 4] [i_8 - 1]) ? var_11 : (arr_26 [i_8] [9]))) : (((+((max((arr_26 [i_8] [i_8]), var_12))))))));
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_41 [i_11] = ((var_16 <= ((max(((3249498753 ? (arr_34 [i_9] [i_10 - 1] [i_11]) : (arr_7 [14] [i_10 - 1] [i_11] [i_12]))), ((((arr_8 [i_9] [i_9] [i_9 + 1] [i_11]) - 31563))))))));

                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            arr_45 [i_9] [i_10 - 1] [i_10 + 1] [i_9] [i_13] [i_11] [i_9] = 1;
                            var_26 = (arr_40 [i_9] [i_9] [i_9 + 1] [i_9 + 1]);
                            arr_46 [i_9 + 2] [i_11] [i_11] [i_9 + 2] [i_13] = (((min((arr_24 [i_9 + 2]), (arr_17 [i_13] [i_11] [i_11] [i_9])))) ? ((-((-1 ? var_14 : var_17)))) : ((((104 ? 26 : var_14)) << ((((4095 ? var_16 : var_6)) - 15601327430250898387)))));
                            var_27 = (((((arr_16 [i_9 - 1] [i_11]) ? (arr_16 [i_9 + 2] [i_11]) : (arr_14 [i_11] [i_10 - 1] [i_12] [i_12]))) / ((((arr_16 [i_11] [i_11]) * -12)))));
                        }
                        var_28 = (arr_34 [i_10] [i_11] [i_10]);
                    }
                }
            }
        }
        arr_47 [i_9 + 2] = ((+((((arr_44 [i_9] [i_9 + 1] [6] [i_9 + 1] [i_9 - 1]) && (arr_44 [i_9 + 1] [i_9] [6] [4] [i_9]))))));
    }
    var_29 = var_15;
    var_30 = (max(var_3, var_10));
    var_31 = (((((14697002485054500610 ? 6588 : -28174))) / 4294967295));
    var_32 = (min((255 | 0), (~var_9)));
    #pragma endscop
}
