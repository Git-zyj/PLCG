/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (!255);
        var_14 = (min(((min(255, 52215))), ((255 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 4])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = (((!var_7) < (var_9 % var_9)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] = (0 == 54);
                        arr_15 [i_2] [i_2] [i_1] [i_4 + 1] = ((307012258 ? 1142866755 : 66060288));
                        arr_16 [1] [i_2] [i_3] [i_3] [i_3] = var_13;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_15 = var_3;
                        var_16 = ((arr_4 [i_1]) + 0);
                        var_17 = (min(var_17, ((((arr_5 [i_1]) > 1)))));

                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            var_18 = (min(var_18, ((((arr_27 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1]) ? (arr_27 [i_6] [i_8 + 1] [i_6] [i_8] [i_8 - 1]) : (arr_27 [i_1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]))))));
                            arr_29 [i_1] [i_1] = (((~1) + (arr_23 [i_7] [i_6] [i_5] [i_1])));
                        }
                    }
                }
            }
            arr_30 [i_1] = (((arr_17 [i_5]) * (arr_17 [i_1])));
            var_19 = (var_6 && 255);
        }
        arr_31 [i_1] = (!0);
        var_20 = (arr_4 [i_1]);
        arr_32 [1] [i_1] = (var_12 ? (((arr_0 [i_1]) * var_12)) : (arr_7 [i_1] [i_1] [i_1]));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (((((-(0 / -66060289)))) ? (1 || 1) : 1));
                        var_21 = (max(var_21, (((524182383 || (((var_10 ? 65535 : 524182409))))))));
                        var_22 = ((~(arr_37 [i_9] [i_9] [i_12] [i_9])));
                        arr_42 [i_12] [i_12] [i_12] [i_12] = 23;
                        var_23 = (min(var_23, 8));
                    }
                }
            }
        }
        var_24 = 1;
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            {
                arr_49 [i_13 - 1] |= (min((((arr_44 [i_13 - 1]) ^ (arr_44 [i_13 - 2]))), (((arr_45 [i_13 - 2] [i_13 + 1]) - (arr_45 [i_13 - 2] [i_13 + 1])))));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            {
                                arr_56 [i_13] [i_14] [i_15] [i_16] [i_17] = (arr_44 [i_13 - 2]);
                                var_25 = 4515072726577045116;
                                arr_57 [i_13] [12] [i_13 + 1] [i_13] [1] = ((max(20761, (arr_54 [i_13] [i_14] [i_14] [i_16] [i_16] [i_16] [i_17]))));
                                arr_58 [i_14] [8] = ((41247 - 1292043297759545317) || (1 >= 39706));
                                var_26 = (max(var_26, ((max((((!((((arr_46 [i_15] [i_14]) + var_1)))))), 134217727)))));
                            }
                        }
                    }
                }
                arr_59 [i_13 - 2] [i_14] = -288503023;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 0;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            {
                arr_65 [i_19] = 21190;
                var_27 = ((-((0 ? (((arr_37 [i_18] [i_18] [i_19] [i_19]) | var_12)) : var_0))));
                var_28 = 232;
                var_29 = ((~(((((arr_47 [i_18 + 1] [i_18 + 1]) / 28983)) | (2147483647 || 29627)))));
            }
        }
    }
    #pragma endscop
}
