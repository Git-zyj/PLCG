/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max((~27773), var_1)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_0] [i_3] [i_0] = (max(((max(-6283, 255))), (arr_7 [i_0] [i_1] [i_1] [i_3])));
                        var_15 = (max(var_15, (((~(arr_4 [i_0] [i_0]))))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] [i_3] = ((((min((arr_5 [i_1 - 1] [i_1] [i_1 - 1]), ((max(2509, -2491)))))) ? var_5 : ((((arr_3 [i_0]) >= var_8)))));
                            var_16 = (min(2157311679, 3707));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] [i_2] = ((~((~(arr_6 [i_1 + 1] [i_0] [i_1] [i_2 - 1])))));
                            var_17 = 2509;
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_3] [i_6] = (((((((-127 - 1) ? 3 : (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))) ? ((((min(var_1, var_9))) ? (arr_18 [i_1 + 1] [i_0] [i_0]) : 3406617782)) : -2510));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_6] = (arr_1 [i_0]);
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 35;
                        }
                    }
                }
            }
        }
        var_18 = (max(var_18, (((~((~(arr_0 [i_0] [0]))))))));
        var_19 |= ((-((((min(var_6, (arr_5 [i_0] [i_0] [i_0])))) ? 4 : 105))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            arr_26 [i_8] = (max(var_10, (max((arr_12 [i_7] [i_8] [i_7] [i_8] [i_8] [i_7]), ((9200070076636185902 << (var_11 - 142)))))));
            arr_27 [i_7] [i_8] [i_8] |= (arr_10 [i_7] [i_8] [i_7] [i_7] [i_8]);
        }
        var_20 -= ((var_10 ? (((var_5 && (arr_22 [i_7] [i_7])))) : var_10));
    }
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        arr_30 [i_9] = ((~(arr_0 [i_9] [0])));
        arr_31 [i_9] |= var_12;
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {

        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            arr_39 [i_11] &= ((((((arr_36 [i_11 - 2] [i_11 - 1] [i_11 + 4]) ? (arr_36 [i_11 - 2] [i_11 - 1] [i_11 + 4]) : (arr_36 [i_11 - 2] [i_11 - 1] [i_11 + 4])))) ? (min((arr_32 [i_11] [i_11]), ((~(arr_36 [i_10] [i_10] [i_10]))))) : (max((~var_9), (~var_3)))));
            arr_40 [i_10] = (((((arr_32 [i_10] [i_11 - 1]) ^ ((var_2 ? var_10 : (arr_36 [i_10] [i_10] [i_11]))))) < (max((arr_36 [i_10] [i_11 + 3] [i_11]), (arr_36 [i_10] [i_11] [i_11])))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    {
                        arr_45 [i_13] [i_13] [i_10] [i_13] = (arr_44 [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_11] [i_13]);
                        var_21 = (max(var_21, ((((arr_35 [i_11] [i_11] [i_13]) > ((max((arr_35 [i_11] [i_10] [i_12]), (arr_42 [i_12])))))))));
                    }
                }
            }
            var_22 = (max(var_22, (arr_44 [i_11] [i_11] [i_10] [i_10] [i_10])));
            var_23 = (min(var_23, (((~(((arr_32 [i_11] [i_11 + 2]) ? (arr_32 [i_11] [i_11 - 1]) : (arr_32 [i_11] [i_11 + 4]))))))));
        }
        for (int i_14 = 1; i_14 < 20;i_14 += 1)
        {
            var_24 = -2510;
            var_25 = (((max(((var_0 * (arr_38 [i_10] [i_14]))), var_5)) * -7));
        }
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                {
                    var_26 |= (max(var_4, (((((-(arr_53 [i_15] [i_16])))) ? (((arr_52 [i_16] [i_16] [i_16]) >> (((arr_36 [i_10] [i_15] [i_16]) - 20636452055564507)))) : (48 - var_4)))));

                    for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                    {
                        arr_56 [i_10] = ((+(((arr_53 [i_15] [i_15 - 1]) >> (((arr_53 [i_15] [i_15 - 1]) - 1152610357))))));
                        arr_57 [i_10] [i_10] [i_10] [i_17] = ((arr_38 [i_15 + 1] [i_15 - 1]) ? (arr_38 [i_15 - 1] [i_15 - 2]) : ((var_0 ? (arr_38 [i_15 + 1] [i_15 - 2]) : (arr_38 [i_15 - 1] [i_15 - 2]))));
                        var_27 = (min(var_27, (((+((((arr_41 [i_15 - 2] [i_15 - 1] [i_15 + 1] [i_15 + 1]) && (!-16464)))))))));
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {
                        arr_60 [i_10] [i_15] [i_16] [i_10] [i_16] [i_10] = (arr_42 [i_10]);
                        var_28 = (arr_43 [i_15] [i_15]);
                    }
                }
            }
        }
    }
    var_29 = var_7;
    var_30 = (204 - var_4);
    #pragma endscop
}
