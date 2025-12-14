/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((min(var_9, 7102)))), (min(var_5, var_4))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_2] [i_1] [i_0] &= ((~(~2815494381621602189)));
                    arr_13 [i_0] [i_2] = var_0;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_16 [i_2] [i_1] [i_3] = (min(77, (max((arr_9 [i_0]), (arr_9 [i_2])))));
                        var_12 = (min(var_12, var_2));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 = 4191129485875752679;
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] [i_0] |= var_3;
                            arr_20 [i_0] [i_1] [i_2] [0] [i_2] = arr_9 [i_0];
                            arr_21 [i_0] [i_0] [i_2] [i_2] [i_2] = var_8;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_14 = (max(var_14, ((max(((((arr_17 [i_0] [i_0] [7] [i_0] [i_0] [i_0]) ^ ((((arr_14 [i_3] [i_1] [i_2]) < var_8)))))), ((var_9 ? 7102 : (((arr_18 [0] [i_3]) ? -1 : var_2)))))))));
                            arr_25 [i_2] [i_1] [i_1] [i_3] [i_5] = (arr_9 [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_2] [i_0] [i_0] = (((arr_2 [i_2]) ? (max((arr_6 [i_0] [i_0] [i_0]), (arr_24 [i_0] [i_1] [i_0] [i_3] [i_6]))) : ((max(var_9, (((arr_24 [i_2] [i_2] [i_2] [i_0] [i_0]) ? 79259487 : var_2)))))));
                            var_15 = 89;
                        }
                        arr_31 [i_2] = (min(((-(min(15064191773210027015, 6356)))), ((((-12311 & 2815494381621602189) / (((-7100 ? var_0 : var_4))))))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_16 = ((((max((arr_14 [6] [i_2] [i_8]), (((-7095 ? 32 : (arr_28 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] [i_0]))))))) ? -7100 : ((-var_9 / (var_0 - var_10)))));
                            var_17 = var_7;
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_41 [i_2] = var_4;
                            arr_42 [i_0] [i_2] [i_2] [i_2] [i_0] = (((((((2815494381621602189 ? var_0 : 119)) + (var_10 & var_2)))) | (((!7102) ? (((arr_0 [i_0]) ? 1575114899 : (arr_38 [i_7] [i_7] [i_7] [i_7]))) : (~var_2)))));
                            var_18 = var_6;
                            var_19 = ((((((!(arr_27 [i_7] [i_1] [i_0]))) ? ((0 ? -2815494381621602186 : 11218878602529208590)) : (1 && -19312))) ^ (((var_6 ? var_2 : (arr_9 [i_0]))))));
                            var_20 ^= var_7;
                        }
                        arr_43 [0] [i_7] &= (min((((var_3 && ((max(var_2, -2815494381621602194)))))), (((!208) ? (arr_4 [i_0] [i_1] [i_0]) : var_0))));
                        arr_44 [i_7] [i_2] [i_2] [i_0] = (((arr_22 [i_0] [i_0] [i_2] [i_0] [i_1]) ? ((4 ? 79 : -8727187943785909721)) : ((min(61569, ((3951465123652459058 ? (arr_6 [i_7] [i_2] [i_1]) : var_10)))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_21 += -var_6;

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_22 += arr_1 [i_0];
                            var_23 = 3012572693;
                            arr_51 [i_0] [i_1] [i_2] [i_2] [i_10] [i_0] [i_11] = var_2;
                        }
                    }

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_24 = var_5;
                            arr_57 [i_2] = (((((!(~var_6)))) / (((((arr_9 [i_13]) | (arr_47 [i_0] [i_1] [i_2] [i_2] [i_13])))))));
                        }
                        var_25 *= ((((max(var_8, var_2) + var_0))));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_26 = ((((min((arr_49 [i_1]), (arr_49 [i_0])))) ? ((((arr_49 [i_2]) ? 249 : var_5))) : 7026920334354343117));
                        var_27 = (arr_15 [i_14] [i_1] [i_14] [i_14]);
                        var_28 = var_1;
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        var_29 = (min(var_29, (((!(((min((arr_22 [i_15] [i_15] [i_15] [i_15] [i_15]), 0)))))))));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    {
                        var_30 = var_2;
                        var_31 = 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
