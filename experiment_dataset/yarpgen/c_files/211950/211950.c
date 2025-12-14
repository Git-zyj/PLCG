/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_20 = (min((var_15 & 0), 0));
        var_21 ^= (((((min(96, (arr_0 [i_0 - 1]))) + 9223372036854775807)) >> (((9223372036854775807 || (arr_0 [i_0 + 4]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = 55;
            var_23 = var_8;
        }
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            arr_11 [i_1] [i_1] = var_10;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    {
                        var_24 -= (((((((min(206, 2318))) - (64 / 1074156042)))) / (max((arr_4 [11]), 10218263846294888838))));
                        arr_17 [i_5 - 3] [i_5] [i_1] [i_5 + 1] [i_1] [14] = (0 | 200);
                    }
                }
            }
            var_25 = (max(((max((200 < var_9), (min(1, 112))))), (((arr_4 [i_3 + 2]) % (-32767 - 1)))));
            var_26 = (((2318 ^ -74) & var_4));
        }
        var_27 = (min(var_27, ((max((arr_13 [i_1] [16] [11] [i_1]), (min(var_6, ((0 ? 1 : 1)))))))));
    }

    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_28 = (((arr_9 [i_6]) / ((max((min(var_7, 1)), ((55 ? 41869 : 55)))))));
        var_29 = (arr_12 [i_6] [i_6] [i_6] [13]);
        arr_20 [12] &= 10;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_31 [i_7] [i_8] [i_7] [i_7] = (161 == 12);
                        arr_32 [i_7] [i_10] [i_9] [i_7] [i_7] [i_7] = ((arr_15 [i_7] [i_7] [i_8] [i_9] [i_10]) == 8208758058762593102);
                    }
                }
            }
        }
        var_30 = (arr_8 [i_7] [i_7] [i_7]);
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 9;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                arr_47 [i_11] [i_12] [i_11] [3] [i_15] [i_14] [1] = arr_41 [i_11] [i_11] [i_11] [i_11] [i_11];
                                var_31 = ((((min(((max(-114, 24))), ((var_8 + (arr_43 [11] [i_12 + 2] [i_13] [i_14 + 1] [11] [i_15])))))) * (max((((arr_5 [1] [i_12 + 2] [i_14]) - 28961)), ((max((arr_23 [i_11] [i_12] [i_15]), 1)))))));
                                var_32 = (67108863 - 211);
                            }
                        }
                    }
                    var_33 = ((arr_22 [i_12 + 3]) >= ((min(var_8, (var_1 && 1)))));
                }
            }
        }
        var_34 = (min(var_34, ((((8208758058762593093 ? (var_8 & -4379) : (arr_46 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 0;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 9;i_19 += 1)
                {
                    {

                        for (int i_20 = 3; i_20 < 9;i_20 += 1)
                        {
                            var_35 = (min(var_35, -4143597437402833923));
                            arr_62 [i_20] [i_19] [i_19] [i_19] [i_18] [i_19] [i_16] = ((arr_58 [i_20 - 3] [i_20 + 1] [i_19 + 1] [i_19 - 1]) ? var_6 : (1006873050 & var_14));
                        }
                        arr_63 [i_19] = ((((23677 ? var_15 : 16716237051223486530)) + (arr_0 [i_17 + 1])));
                    }
                }
            }
        }
        arr_64 [8] [i_16] = (((arr_26 [i_16] [i_16] [i_16]) - (arr_26 [i_16] [i_16] [i_16])));
    }
    #pragma endscop
}
