/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((var_9 ? ((var_3 ? var_15 : var_14)) : ((var_1 ? var_5 : var_15)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        arr_4 [i_0] = (32019 / 11531955617165547762);
        arr_5 [i_0] [i_0] = (((((var_14 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) || var_13));
        var_17 = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_18 [i_5] [i_3] = (arr_11 [i_1] [i_5] [i_3]);
                                arr_19 [i_1] [i_2] [i_3] [2] [i_4] [i_4 + 1] [i_1] = (~-6914788456544003874);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_18 = (2958197032971125414 % 88);
                                arr_26 [i_7 + 1] [i_6] [i_6] [i_2] [i_1] = (((arr_23 [i_3 + 2] [i_3 + 3] [i_6]) % (((min(var_0, (arr_13 [i_7] [i_6] [i_3] [i_1]))) ^ (((arr_20 [i_6]) ^ (arr_2 [i_6])))))));
                            }
                        }
                    }
                    arr_27 [i_3] [i_2] [i_1] = max((max((min(var_13, (arr_2 [i_1]))), (max(var_9, (arr_8 [i_1] [i_1]))))), 6914788456544003853);
                    arr_28 [i_1] [i_1] [i_1] [i_1] = ((-((((max((arr_25 [i_1] [i_1] [14] [i_1] [i_1]), (arr_24 [i_1] [i_1] [i_1] [2] [i_1] [i_1] [0])))) ? ((max(var_4, 0))) : (((arr_25 [i_1] [1] [i_2] [i_1] [i_2]) & (arr_12 [i_3] [i_3] [i_2] [i_1])))))));
                    arr_29 [i_3] = (min((max((7285 & 1), (arr_15 [i_3 + 1] [i_3 + 4] [i_3] [i_3] [i_3]))), ((((max((arr_25 [i_1] [i_2] [i_3] [i_1] [i_3]), (arr_25 [6] [i_2] [i_3] [i_1] [i_3])))) << (((max(var_13, var_3)) - 5699533754034837324))))));
                }
            }
        }
        arr_30 [i_1] [i_1] = (arr_25 [i_1] [i_1] [6] [i_1] [i_1]);

        /* vectorizable */
        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    {
                        var_19 = var_1;
                        var_20 = (arr_7 [i_1]);
                    }
                }
            }
            var_21 = ((var_7 << ((((235 * (arr_33 [i_1] [1] [i_1]))) - 12674))));
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    var_22 = (arr_41 [i_1] [i_1]);
                    var_23 = (35 & 1);
                    arr_45 [i_12] [i_11 + 2] [i_12] = (~235);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_24 = (var_9 <= 505326464466087143);
                                arr_52 [i_14] [i_14] [i_14] [i_12] [i_14] = ((((17 ? (arr_12 [i_11 + 1] [i_1] [i_14] [i_13]) : (arr_51 [i_11]))) % ((((((arr_37 [i_14]) & (arr_20 [i_12]))) < ((((arr_38 [i_13] [i_12]) ? (arr_50 [i_11] [i_11] [i_12] [i_12] [i_13] [i_13]) : (arr_8 [i_1] [i_11])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 15;i_15 += 1)
    {
        arr_56 [i_15] = ((((-var_14 - (min((arr_2 [i_15]), (arr_0 [i_15] [i_15]))))) ^ (47 > 82)));
        arr_57 [i_15] = var_6;
        arr_58 [i_15] [i_15] = ((((((((arr_55 [i_15]) || (arr_53 [i_15] [i_15]))))) <= (max(var_2, (arr_1 [i_15]))))));
        arr_59 [i_15] = (arr_54 [i_15] [i_15]);
    }
    var_25 = ((!((min(-2831939028501626343, (!1))))));
    var_26 = var_0;
    #pragma endscop
}
