/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_5, var_8));
    var_21 = var_11;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 -= ((((~(arr_3 [i_0] [i_4 - 1]))) % ((32753 ? 64 : 1))));
                                var_23 = (max(var_13, (((arr_7 [i_4 - 1] [i_2] [i_0] [i_0]) + (arr_4 [i_0] [i_0] [i_0])))));
                                var_24 = (arr_3 [i_1] [i_0]);
                                var_25 = ((64749 ? (((787 * (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))) : 575334852396580864));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, var_10));
                        var_27 = ((((((var_3 & 37887) + (((34359738367 ? 65535 : 1)))))) && (((-((max(var_13, (arr_9 [i_0] [i_1] [i_1] [i_5])))))))));
                    }
                    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, (((((arr_13 [i_0] [i_1] [i_2] [13]) ? (arr_13 [i_0] [i_0] [i_0] [i_6]) : (arr_13 [i_0] [i_0] [i_2] [i_6 - 1]))) / var_17))));
                        arr_16 [6] [i_1] [6] [i_2] [i_1] = ((~((-(arr_7 [i_2] [i_2] [i_6 + 2] [15])))));
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_29 -= (arr_18 [i_0] [i_1] [i_2] [i_7]);
                        var_30 = (max(var_30, ((((((65408 ^ 64740) ^ var_10)) | ((min(((min((arr_15 [i_7]), 1))), (arr_11 [i_0] [i_7] [i_2] [9] [i_7] [i_0])))))))));
                    }
                    var_31 ^= var_4;
                    var_32 -= -812;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_33 = (max(var_33, (((((min(134201344, (max((arr_4 [i_1] [i_8] [i_9]), var_3))))) ? (((arr_2 [i_0] [i_1]) ? var_7 : (arr_2 [i_2] [i_8]))) : (((38 ? 0 : (~4028702592)))))))));
                                arr_28 [i_9] [i_1] [i_1] [i_1] = ((((((min(3939070442, -1906505432))) ? 17 : 64762)) * ((((arr_9 [i_9 + 1] [i_9 + 3] [i_1] [i_9 + 1]) ? (arr_9 [i_9 + 2] [i_9 + 1] [i_1] [i_9 + 1]) : (arr_9 [i_9 + 1] [i_9 + 1] [i_1] [i_9 + 2]))))));
                                var_34 = (min(var_17, (((arr_26 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 - 1] [i_1] [i_9 + 3]) ^ (~var_2)))));
                                arr_29 [i_1] [i_0] = var_4;
                            }
                        }
                    }
                }
            }
        }
        arr_30 [i_0] [i_0] = (arr_12 [1] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_34 [i_10] [i_10] = (((((((((4294967282 >= (arr_15 [i_10]))))) == ((var_12 ? (-32767 - 1) : var_0)))))) == (min((10340612106875959717 | 207358389), (var_13 || 764))));

        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        var_35 -= ((((var_8 ? 444747089441333210 : (min(var_19, -7111889360005366337)))) ^ ((((100 ? 5 : -4412392431425820263)) << 1))));
                        arr_42 [i_10] [i_12] [14] = ((((min((((arr_21 [i_10] [i_11] [i_12] [19] [i_10] [i_10]) / var_18)), ((min(var_11, var_12)))))) % 7761053844800963073));
                        var_36 = (arr_20 [i_10] [i_10] [i_12] [i_12]);
                    }
                }
            }
            var_37 -= (((16646365728037012921 || var_17) * (((-118 * var_12) ? (var_4 + var_16) : var_1))));
        }
    }
    var_38 = min(var_7, (((((0 ? var_15 : -6496499187075235223))) ? var_9 : ((min(300, var_2))))));
    #pragma endscop
}
