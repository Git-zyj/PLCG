/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = 31;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = ((var_13 ? 1 : (max(14, 62))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = (max(var_18, (((((max(1263550308, 1683403086474242855))) ? -13901 : var_12)))));
            var_19 = ((+((max((arr_5 [i_0 - 1] [i_0] [i_0]), (arr_5 [i_0 + 2] [i_0] [i_1]))))));
            arr_6 [i_0] [i_0 + 2] [i_0] = -1;
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] &= (((((arr_1 [i_0 + 2]) > var_13)) ? 1 : ((((arr_2 [i_3] [i_0 + 2] [i_3]) < (arr_1 [i_0 + 2]))))));
                            var_20 |= (max(1, (((arr_8 [i_0] [i_1] [22] [i_3]) & (arr_9 [i_0] [i_1] [12] [i_3] [i_0 - 1])))));
                            var_21 *= var_12;
                            var_22 = (max(var_22, ((((((arr_10 [i_0] [i_3] [i_0] [i_0 - 1]) ? (min(var_14, var_9)) : (((65515 ? (arr_13 [i_0] [i_3] [i_3] [i_3] [i_4]) : var_11))))) - -228304160885988705)))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_19 [i_0] [i_0] = (!-1);
            var_23 = ((((max(((0 ? (arr_18 [i_5]) : (arr_2 [i_0] [i_5] [i_5]))), (((var_7 ? -1 : (arr_5 [i_0] [i_0] [15]))))))) ? var_9 : (1465328056 * 1)));
            arr_20 [i_0] [i_5] = ((((min((arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1]), var_6))) || (29707 * 24)));
            var_24 = var_10;
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_25 = (((arr_12 [i_0 - 1]) ? 3840 : (arr_5 [i_0 + 2] [i_0] [i_0 - 1])));
            arr_23 [i_0] [i_0] = ((-(arr_12 [i_0 + 2])));
        }
        arr_24 [i_0] [i_0] = (max(1, -1152791558966746541));
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        var_26 ^= (arr_13 [i_7] [16] [i_7] [16] [i_7]);
        var_27 = (max((((arr_18 [i_7 - 2]) ? ((68 ? 65515 : var_5)) : (((max(201, (arr_5 [i_7] [0] [0]))))))), (var_6 && var_2)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    arr_31 [i_8] = ((!(arr_29 [i_7] [i_8])));
                    arr_32 [i_8] [i_9] = 52;
                    var_28 = ((~(max((arr_15 [i_7 + 2] [4] [i_8] [i_8] [i_9] [i_9]), 17014103293497843927))));
                }
            }
        }
        var_29 = (max(((max((arr_27 [0] [0]), var_8))), 4252663192975185987));
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_30 = ((arr_35 [i_10]) - -82);
        var_31 = (min(var_31, (arr_35 [i_10])));
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 16;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                {
                    var_32 &= (359508581171368205 ^ 57);
                    var_33 = ((var_13 ? 750544731 : (arr_45 [i_11] [i_11] [3])));
                }
            }
        }
        var_34 = (arr_37 [i_11]);
        var_35 = ((32745 ? (arr_43 [i_11 + 1] [i_11] [i_11] [i_11 - 1]) : (arr_43 [5] [i_11] [5] [12])));
        var_36 = ((0 * (arr_11 [i_11] [i_11] [i_11] [i_11 + 1] [i_11] [i_11])));
        var_37 = (max(var_37, (((var_9 ? var_9 : ((-1197158843 ? (arr_34 [i_11]) : 27)))))));
    }
    #pragma endscop
}
