/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] [i_0] [i_2 - 1] |= ((var_12 / (arr_6 [i_0] [i_0] [i_0])));
                        var_18 = (min(var_18, ((((arr_0 [i_3]) ? 20 : (arr_0 [i_1]))))));
                        arr_11 [i_0] [i_0] = -6680839999847885204;
                        arr_12 [i_0] [i_1] [i_0] [i_3] = (((~var_8) ? var_14 : (arr_7 [i_0] [i_1] [i_1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_19 = (((arr_8 [i_0] [i_4] [16] [i_4 + 3]) ? (arr_8 [i_0] [i_4] [17] [i_4 + 3]) : -116));

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_20 = -103;
                        var_21 = (arr_16 [i_0] [i_4 + 3] [i_6]);
                    }
                    arr_21 [i_0] [i_4 + 2] = ((-(((arr_6 [i_0] [i_4] [i_5]) % var_4))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_22 += 12540;
        var_23 = (min(var_23, (arr_14 [i_7])));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            arr_40 [i_12] [i_11] [i_9] [i_9] [i_9] [i_8] = ((-var_10 && (arr_17 [i_9] [i_8])));
                            arr_41 [i_9] [i_11 + 1] = 18121;
                        }
                    }
                }
            }
            var_24 = (max(var_24, (arr_35 [i_8] [8] [i_8] [i_8])));
            arr_42 [i_8] [i_9] [i_9] = var_8;
            var_25 |= ((-(arr_38 [0])));
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                {
                    arr_49 [i_8] = (max(((~(!var_11))), (~var_2)));

                    for (int i_15 = 2; i_15 < 14;i_15 += 1)
                    {
                        arr_54 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((-(min(((-(arr_46 [i_15] [i_13 + 1] [i_14]))), (!var_16)))));
                        arr_55 [i_8] [i_8] [i_8] [i_15] = 0;
                        arr_56 [i_8] = ((max((((65535 ? 2147483647 : 3500855379605403451))), 10100043972284326815)));
                        arr_57 [i_8] [i_13 - 1] [i_14] [i_14] = (max(var_16, (max(var_2, (!var_4)))));
                    }
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        arr_60 [i_14] [i_13] [i_14] [i_16] [i_8] [i_16] = ((255 & (((9223372036854775793 ^ (arr_7 [i_14] [i_13] [i_16]))))));

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                        {
                            arr_64 [i_8] [i_8] [7] [7] [i_8] [i_8] [i_8] = var_2;
                            var_26 = (min(var_26, ((((((arr_29 [i_13 + 1]) + 2147483647)) << (!var_16))))));
                        }
                        for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
                        {
                            arr_67 [i_8] [i_8] [1] [i_16] [1] [i_14] = (max(((((max((arr_59 [i_8] [i_13] [i_14] [i_14]), -9223372036854775794))) ? (min((arr_65 [i_8] [i_13] [i_14] [i_14] [i_18]), var_11)) : var_15)), (arr_9 [i_14])));
                            arr_68 [i_8] [i_13] [i_14] [i_13] [6] [i_14] = (arr_14 [i_8]);
                            arr_69 [i_8] [i_8] = (min((min(((min(var_16, (arr_34 [i_18])))), 65535)), var_1));
                            var_27 += ((~((((((arr_51 [i_8] [i_14] [i_16] [i_18]) ? (arr_19 [i_8] [11] [i_8]) : var_4))) ? (((var_9 ? var_9 : var_8))) : ((var_0 ? (arr_63 [i_8]) : (arr_23 [i_8] [i_14])))))));
                        }
                        var_28 = arr_3 [i_16] [i_8] [i_8];
                        arr_70 [i_8] [i_8] [i_16] [i_16] [7] [i_14] = var_10;
                    }
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        arr_73 [i_8] [i_13] [i_13] [i_14] [10] = (+-0);
                        arr_74 [i_8] [i_14] [i_14] [i_14] = (arr_31 [i_19] [i_19]);
                    }
                    var_29 = (min((arr_7 [i_14] [i_8] [i_14]), ((-(min(96, (arr_66 [i_8] [i_8] [i_14])))))));
                }
            }
        }
    }
    var_30 += ((var_10 ? var_3 : var_9));
    #pragma endscop
}
