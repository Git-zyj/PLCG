/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 += (min(((var_4 || ((((arr_2 [i_0] [4]) ? (arr_5 [i_0] [8] [i_2] [i_2 + 1]) : (arr_3 [i_0] [i_0] [i_0])))))), ((!((min(var_4, (arr_3 [i_0] [i_1] [i_2 - 1]))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (min(var_13, (((~(arr_8 [i_1 + 1]))))));
                        arr_10 [i_3] [i_1] [i_3] [i_2] [i_1] [i_0] = (arr_4 [i_1] [i_2] [i_3]);
                        arr_11 [i_1] [i_1] = (((((arr_2 [1] [i_1]) >= (arr_4 [i_1] [i_2 + 1] [i_3]))) ? (arr_6 [i_0] [i_1 - 2]) : ((((arr_7 [i_0] [i_1] [i_3]) >= (arr_0 [i_0] [i_0]))))));
                    }

                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        arr_15 [i_1] [14] [14] [i_2] [i_2] [i_4] = ((-(arr_2 [i_0] [i_1])));
                        var_14 = ((((max((arr_3 [i_4 - 1] [i_4 - 2] [i_2 - 1]), (arr_3 [i_4] [i_4 - 2] [i_2 - 1])))) ? (((~(arr_12 [i_1] [i_0] [i_0] [i_0])))) : ((-((~(arr_8 [16])))))));
                        var_15 = (min(var_15, (arr_7 [i_1] [10] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_16 = (((((((var_5 >= (arr_14 [i_0] [i_0] [i_1 + 1] [i_2] [i_0] [i_5]))) ? (arr_8 [i_1 - 1]) : (((max((arr_12 [i_1] [i_1] [i_2] [i_5]), var_4))))))) ? (min(-var_10, (((var_1 >= (arr_17 [15] [10] [i_2] [i_5])))))) : (min((max((arr_2 [i_0] [i_1]), var_10)), (~var_3)))));
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_0] [i_5] [i_1] = (min((arr_1 [i_5] [i_2]), ((min(((var_10 ? (arr_16 [i_0] [i_1 - 2] [i_5]) : (arr_8 [1]))), ((-(arr_8 [i_5]))))))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_17 = (min(var_17, (((~(arr_9 [i_0] [i_0] [i_0] [i_1 + 2]))))));
                        arr_21 [i_0] [i_1] [i_2] [4] = (max(1, 1));
                    }
                    arr_22 [i_0] [i_1] [i_1] = var_8;

                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_18 = (min(var_18, (arr_4 [20] [20] [i_7])));
                        var_19 = (min(var_19, (arr_12 [10] [i_1] [i_2] [i_7])));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_20 = (max(var_20, ((((arr_1 [i_8] [i_8]) >= (arr_1 [i_8] [i_8]))))));
        arr_27 [i_8] |= (arr_2 [i_8] [0]);
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                {
                    arr_38 [i_9] [16] [i_9] = -2391059606668873968;
                    var_21 = (min(var_21, (((((~(arr_5 [8] [i_11] [i_10] [8])))) ? (((arr_13 [i_9] [i_10] [i_10] [i_10] [i_11 + 1]) ? (((-(arr_0 [i_9] [i_10])))) : (max((arr_33 [i_10]), var_11)))) : (((~((-(arr_2 [i_9] [i_11]))))))))));
                    var_22 -= (-((-(arr_5 [i_11 + 2] [i_10] [i_11] [i_11]))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_23 = var_10;
                                var_24 = (min(((-(~var_7))), ((((arr_14 [i_9] [i_9] [i_9] [i_11 + 1] [i_11] [i_11 + 1]) >= (arr_28 [i_9]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
