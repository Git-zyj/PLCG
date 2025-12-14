/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                        {
                            var_19 *= (var_8 >> (arr_0 [i_0 - 1]));
                            var_20 = (min(var_20, var_2));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                        {
                            var_21 = arr_9 [i_2 + 2] [i_1] [i_0];
                            var_22 = ((var_14 ? 246 : (arr_0 [i_1])));
                            var_23 = (((((max((arr_12 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5 + 1]), (arr_6 [i_0 + 2]))))) + (max((((~(arr_1 [i_0])))), (arr_8 [i_0] [i_0] [1])))));
                        }
                        arr_17 [i_0 + 1] [i_0] [i_3] [i_0] [i_0] [i_0 - 1] = 1;

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_2 + 1] [i_3] [i_0] [i_6] [i_3] = var_9;
                            arr_21 [i_3] [i_1] [i_2 - 1] [12] = ((((arr_3 [7] [i_2 - 1] [i_2 + 1]) ? (arr_3 [i_2] [i_2 + 2] [i_2]) : var_5)));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] = (!1);
                            arr_23 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((min((arr_4 [i_0 + 1]), 1))) == ((max((arr_4 [i_2 - 1]), (arr_4 [i_3]))))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_24 ^= (arr_5 [i_1]);
                            arr_27 [i_0 - 1] [i_3] [i_3] [i_3] [1] [i_0 - 1] = (max((((!(((arr_18 [i_0] [i_3] [i_0] [i_0] [i_7] [i_1]) < (arr_14 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_7])))))), ((-(arr_1 [i_0 + 2])))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 = arr_16 [i_0 + 2] [i_1] [i_2] [i_3] [i_3];
                            arr_31 [i_3] [i_3] [i_0] [i_1] [i_3] = ((max((arr_29 [i_2 + 2] [i_3] [i_8] [i_8] [i_8] [i_8] [i_8]), 18446744073709551602)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_26 = ((((var_10 || ((max((arr_36 [i_10] [i_9 + 3] [i_1] [i_1] [i_0]), (arr_32 [i_9])))))) ? ((-18545 ? 193755255 : 1)) : ((((((var_1 || (arr_11 [i_0 - 1] [i_0] [i_9] [i_0] [i_0 - 2])))) | (arr_25 [i_0] [i_1] [i_2 + 2] [i_9] [i_10]))))));
                                var_27 = (min((((arr_33 [i_0] [i_1] [i_2] [i_9 + 2] [i_10]) ? (arr_26 [i_9] [i_2] [i_10]) : 0)), (arr_38 [i_9 + 2] [i_9] [i_9] [i_9 + 2] [i_9 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 6;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_28 *= (((((arr_44 [i_12 + 4] [i_12 + 4] [i_12 + 2] [i_12 - 1]) ^ (arr_44 [i_12 + 4] [i_12] [i_12 + 4] [i_12 + 4]))) & (((~(arr_28 [8] [i_14] [i_12] [8]))))));
                                var_29 = ((!((((arr_38 [i_12] [i_12] [i_12] [i_12 + 3] [i_12 - 1]) / (arr_38 [i_12] [i_12] [i_12] [i_12 + 3] [3]))))));
                            }
                        }
                    }
                }
                arr_51 [i_11] [i_11] = (((max((arr_9 [i_12 + 2] [i_12 + 3] [i_12 + 3]), var_6)) ^ (((max((max(var_2, (arr_33 [i_11] [i_11] [i_11] [1] [i_12]))), (arr_40 [i_12 + 1] [i_11])))))));
            }
        }
    }
    #pragma endscop
}
