/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (!var_13);
    var_19 = (min(var_19, ((min((max(var_1, var_7)), (((!(!254)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((max(((((arr_2 [i_0] [i_1]) ? (arr_0 [3]) : 16231516917381775466))), ((((arr_0 [i_1]) != var_15))))))));
                var_21 = ((((-92 - (-2147483647 - 1))) | (1771912790 >= var_9)));
                var_22 = (arr_3 [i_0]);
            }
        }
    }
    var_23 = (min(var_23, var_7));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_14 [i_4] [i_3] [i_2] = (~3709464626);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_22 [i_5] [i_5] [i_4] [i_3] [i_5] = var_6;
                                var_24 = (max(var_24, ((max(((~(max(var_13, (arr_12 [i_6] [i_4] [i_3] [i_2]))))), ((var_9 ? -79 : ((4127126798 / (arr_11 [i_2] [i_5]))))))))));
                            }
                        }
                    }
                    arr_23 [i_4] [13] [i_2] = (((arr_13 [i_2] [i_2] [i_4]) ? (max(var_0, (max(64, (arr_1 [i_2] [i_3]))))) : (!var_13)));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_25 = (max(var_25, ((((var_16 ? (arr_28 [i_8 + 1] [i_2] [i_8] [i_8 + 1] [i_7] [i_2] [i_4]) : (arr_20 [i_8] [8] [i_2] [i_8 - 3] [i_2] [i_4] [i_4])))))));
                                arr_29 [i_2] [i_3] [i_4] [i_4] [i_7] [i_7] [i_8 - 3] = ((-(-2147483647 - 1)));
                                var_26 = (min(var_26, ((((-((-(arr_21 [i_2] [i_3] [i_4] [i_8])))))))));
                                arr_30 [i_2] [i_2] [i_7] [5] [i_7 - 3] [i_8 - 1] [i_8] = (min(-63, (--18298524272382041048)));
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((((max((arr_28 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 1] [i_2] [i_9 - 1]), (arr_35 [i_2] [i_3] [i_9] [i_10])))) ? (((max((max(var_6, var_7)), (!var_9))))) : ((-18 ? -68 : (arr_20 [i_9 + 1] [i_3] [8] [i_10] [i_2] [i_2] [i_10]))))))));
                                var_28 = (min(var_28, (((~(max(var_10, ((var_8 ? (arr_11 [i_2] [i_2]) : 33)))))))));
                            }
                        }
                    }
                    arr_39 [i_9] [i_9] [i_2] = ((~(~var_3)));
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_29 = (18298524272382041048 ? ((max((1 && 32745), (!-6335225831609315087)))) : 118);
                                arr_50 [i_2] [i_13] [i_12] [i_13] [i_2] [1] = ((arr_33 [i_13 + 3] [i_13] [i_13] [i_14]) ? (~-1) : (min((arr_43 [i_13] [i_13 + 2] [i_13] [7]), (arr_43 [i_3] [i_13 + 3] [i_13 + 3] [i_14]))));
                                var_30 = (min(var_30, ((min((((-((-32754 ? 23 : 3952355776))))), (((arr_43 [i_14] [i_14] [i_13 - 1] [12]) ? var_15 : (arr_43 [i_13] [i_13 + 3] [i_13 + 3] [i_2]))))))));
                                arr_51 [i_2] [i_2] [i_2] [i_13] [2] = (max((((arr_32 [i_13]) ? -57 : (arr_34 [i_12] [i_13] [i_13] [i_13 + 2]))), ((min(-71, var_6)))));
                                arr_52 [i_2] [i_2] [i_2] [i_13] [i_12] [i_13] [i_13] = ((+((~((max((arr_4 [12] [i_12]), 1)))))));
                            }
                        }
                    }
                }
                var_31 = -1;

                for (int i_15 = 3; i_15 < 13;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            {
                                var_32 += (min((((((max(2885173884, 4294967295))) ? (((!(arr_4 [i_2] [i_17])))) : var_0))), (max((min(65535, 555836301)), -var_12))));
                                arr_61 [i_15 - 3] [i_3] [i_16] = 0;
                                var_33 = (min(var_33, (!var_2)));
                            }
                        }
                    }
                    var_34 = (min(((-(arr_41 [i_15 - 1] [i_15 - 3] [i_15 - 1] [i_15 + 1]))), (arr_41 [i_15 + 1] [i_15 - 1] [i_15 - 3] [i_15 - 3])));
                    arr_62 [i_2] [i_2] [i_2] [i_2] = ((max((min(var_0, (arr_1 [4] [i_15])), (arr_56 [i_15 - 2] [6] [i_15] [1] [6] [i_15 + 1])))));
                    var_35 |= (arr_4 [3] [i_3]);
                    var_36 = (min(var_36, 58230));
                }
                arr_63 [i_2] [i_3] [i_3] = var_3;
            }
        }
    }
    #pragma endscop
}
