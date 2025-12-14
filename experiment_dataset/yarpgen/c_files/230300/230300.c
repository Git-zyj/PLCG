/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = max((max((arr_2 [i_0]), (arr_0 [i_1]))), (arr_3 [i_0] [i_0]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_0] [i_1] [i_0] = min(((((max((arr_10 [i_4] [i_4] [i_2] [i_4] [i_4]), (arr_8 [i_0]))) > (arr_2 [i_3])))), (((min((arr_0 [i_0]), (arr_3 [i_0] [i_0]))) * (max((arr_9 [i_4] [i_2] [i_2] [i_1]), (arr_11 [11] [i_1] [11] [15] [i_1] [i_1]))))));
                                arr_14 [i_4] [i_4] [6] [i_4] [i_0] = arr_6 [i_4] [i_4] [i_4];
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_5] [i_6] = arr_18 [i_6];
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_5] [i_5] [i_5] [22] [22] [i_6] = ((((((arr_16 [i_7]) < (arr_20 [i_5])))) >> (((max(3011808927, (((2283072705 != (arr_15 [i_5])))))) - 3011808917))));
                                arr_30 [i_5] [i_8] [i_6] [i_5] [i_5] = (((arr_15 [i_9]) || (arr_17 [i_5])));
                                arr_31 [i_9] [i_9] [i_6] [i_7] [i_6] [i_5] [i_5] = max((arr_19 [i_6] [i_7 - 1]), (arr_17 [i_9]));
                                arr_32 [23] [23] [i_6] [i_8] [i_9] = max((arr_16 [i_5]), (arr_26 [i_5]));
                                arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = (i_6 % 2 == 0) ? (((arr_24 [i_7] [i_7]) << (((((arr_22 [i_5] [i_6]) >> (((((arr_15 [i_6]) - (arr_17 [i_6]))) - 796720942)))) - 17768)))) : (((arr_24 [i_7] [i_7]) << (((((((arr_22 [i_5] [i_6]) >> (((((arr_15 [i_6]) - (arr_17 [i_6]))) - 796720942)))) - 17768)) - 28469))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    arr_44 [i_10] [i_10] [i_10] = arr_2 [i_10];
                    arr_45 [i_10 - 3] [i_10 - 3] [i_12] = arr_23 [i_10] [i_10];
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_53 [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1] = arr_40 [i_10];
                                arr_54 [i_10] [7] [i_12] [i_13 + 2] [9] = arr_41 [i_12];
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 17;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 16;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 16;i_19 += 1)
                        {
                            {
                                arr_67 [i_15] [i_15] [i_15] [i_16] [8] [i_18 + 2] [i_15] = ((((min((arr_3 [i_15] [i_15]), (arr_1 [i_16] [i_16]))) + (((arr_64 [6]) - (arr_17 [i_15]))))) | (arr_11 [i_15] [i_16 + 3] [i_17] [i_18] [i_19 - 2] [i_18 - 1]));
                                arr_68 [i_15] [i_16 + 1] [i_17] [i_17] [i_17] [i_17] = arr_58 [i_15];
                            }
                        }
                    }
                    arr_69 [i_15] [i_16] [i_16] [i_15] = arr_2 [i_15];
                }
            }
        }
    }
    var_11 = var_1;
    #pragma endscop
}
