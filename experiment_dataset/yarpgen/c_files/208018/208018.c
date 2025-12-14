/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 += (~(arr_1 [1]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 ^= ((var_7 < (min(3375901616, (arr_9 [i_1] [i_2 - 4] [1] [i_2 - 3])))));
                    var_17 = (arr_7 [i_0] [i_0]);
                    var_18 *= ((((((arr_1 [i_0]) % 1))) ? -1 : ((~(arr_10 [i_0] [i_1] [i_2] [i_0])))));
                }
            }
        }
        arr_11 [i_0] = (190 || (~449063813));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_17 [i_3] [i_4] [i_3] = (min((arr_15 [i_3] [i_4] [i_4]), (-36 + -8176511969165577830)));
            arr_18 [i_3] [i_4] |= ((((~((20 ? 11396142165312610829 : var_8)))) ^ ((min(-12350, 3375901616)))));
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_21 [i_5] [i_5 + 1] [i_5] = (min(((min((((!(arr_14 [i_5])))), var_2))), (arr_14 [i_3])));
            arr_22 [i_5] [i_5] = (var_14 >> 1);
        }
        arr_23 [i_3] = var_0;
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 19;i_7 += 1)
            {
                {
                    arr_29 [i_7] [i_7 - 3] [i_3] [i_3] = ((((max(19843, (var_2 - 1)))) + (((arr_16 [i_7 - 2]) ? (arr_16 [i_7 - 1]) : (arr_16 [i_7 - 1])))));
                    arr_30 [i_3] [0] [i_6 + 1] [i_7] = (min((((((arr_25 [i_6 - 3] [i_7]) ? var_0 : (arr_15 [i_3] [i_3] [i_3]))))), (((-(arr_16 [i_3]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_19 ^= (((arr_20 [i_9 + 2] [i_9 + 2]) - -47173));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_20 -= 19849;
                                var_21 = (min(var_21, (((-(!93))))));
                                arr_46 [i_12] [9] [i_10] [i_9] [i_8] = (arr_27 [i_8] [i_9 - 1] [i_9] [i_9 + 3]);
                            }
                        }
                    }
                    arr_47 [i_10] [3] [i_8] [i_8] = ((-(~3079556350)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                {
                    arr_54 [i_14] [i_14] [i_14] [i_8] |= ((-19849 ? (arr_50 [i_8] [i_13]) : ((110 ? (arr_39 [i_8] [i_8]) : (arr_13 [i_8])))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_22 = 201;
                                var_23 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, var_1));
    var_25 = var_3;
    var_26 &= var_11;
    #pragma endscop
}
