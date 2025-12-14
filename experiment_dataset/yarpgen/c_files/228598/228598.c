/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_7 ? 6426867812924244992 : 1))) ? (((var_8 ? -24 : 61))) : -6426867812924244993));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] [i_2] [i_2] = (var_16 <= var_13);
                    var_19 = (arr_6 [i_0] [i_1] [i_2]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_14 [i_0] [i_0] [9] [i_4] |= (arr_4 [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((-24 - (~var_11))))));
                                arr_19 [i_6] = var_12;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 4; i_7 < 19;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_21 = (arr_22 [20] [i_8]);
            arr_25 [16] = ((-((-(max((arr_23 [i_7 + 2] [4] [i_7 + 2]), var_0))))));

            /* vectorizable */
            for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
            {
                arr_28 [i_8] = 2529211137;
                var_22 ^= ((arr_23 [i_7] [i_7 - 2] [i_9 + 1]) ^ var_15);
                arr_29 [i_7] [i_7] [i_7] [i_7] = -15;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((((((arr_21 [i_8]) ? 1 : (arr_27 [i_7])))) ? ((((arr_27 [i_10]) == var_4))) : ((7 ? (arr_34 [i_8] [i_7] [6]) : var_4)))))));
                            arr_36 [i_10] [i_8] [i_9 - 1] [i_8] [i_11] = (((10 != 122) > (((arr_20 [i_7 - 2]) / (arr_26 [i_9 + 1] [i_8] [i_11])))));
                            var_24 = (arr_35 [i_7] [i_7] [i_7] [2] [i_7] [i_7]);
                        }
                    }
                }
            }
            for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
            {
                arr_40 [i_7] [i_7] [1] = (((((((((-(arr_31 [i_7] [i_7] [i_7])))) || ((max(121, (arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1])))))))) >= (((arr_37 [i_12 + 1] [14] [i_8] [14]) ? (arr_20 [i_8]) : (arr_20 [i_8])))));
                var_25 = max((((arr_21 [i_7 - 3]) / (arr_30 [i_12 - 1] [i_8] [i_12]))), (+-127));
            }
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
        {
            arr_43 [4] [i_13] = (arr_26 [i_7 + 2] [i_13] [i_7 - 1]);
            var_26 = (arr_24 [i_7 + 2]);
        }
        arr_44 [17] |= (arr_42 [i_7] [i_7 - 3]);
        arr_45 [i_7 - 4] = ((((min(1, 15))) / 61));
        var_27 = max(-8, 328108520943655924);
    }
    for (int i_14 = 4; i_14 < 19;i_14 += 1) /* same iter space */
    {
        arr_50 [i_14 + 2] [17] = 907553075;
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_58 [15] [i_15] [i_15] [15] [i_15] [i_17] = ((9111877551959312310 ? 9111877551959312306 : 9111877551959312289));
                        var_28 = (max((min((arr_39 [6] [i_14 + 1] [i_14 - 3]), (arr_32 [i_14] [i_15 + 2] [i_14] [i_14] [i_15 + 1]))), (!var_12)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_18 = 1; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 20;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 19;i_20 += 1)
                {
                    {
                        arr_67 [i_14 + 2] [i_14 + 2] [i_19] [i_20 - 1] [i_14 + 1] [0] = (((arr_48 [20]) ? ((((-23313 < (arr_65 [20] [i_14] [19] [i_14 + 1]))))) : -6426867812924244994));
                        arr_68 [16] [i_14] [i_18] [i_14] = var_13;
                        var_29 = 142;
                    }
                }
            }
        }
    }
    var_30 = var_0;
    #pragma endscop
}
