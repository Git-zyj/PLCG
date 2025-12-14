/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_7 <= 3200) / ((var_3 ? var_9 : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = ((var_10 < ((((6946385487415620682 ? 1048575 : var_15)) | ((((arr_2 [i_0] [i_0]) | var_1)))))));
                var_20 = ((max((-35 <= 0), 255)));
                var_21 = ((+(((arr_3 [i_0] [i_0] [i_0]) ? (arr_1 [i_1]) : (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_2 [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_22 ^= (arr_1 [i_3]);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_23 = (min((1073741823 | 96), (((var_8 <= (arr_2 [4] [i_2]))))));
                                var_24 = (max((min((min(16711741850986079060, var_12)), ((min(var_16, (arr_12 [9] [i_2] [8] [8] [i_4] [i_5] [i_6])))))), (((((arr_3 [i_2] [1] [i_6]) <= (arr_5 [i_2] [1]))) ? (772364803360273031 % var_17) : var_2))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_25 = var_13;
                                var_26 += (max((((27685 ? 56719 : -3270))), (min((arr_17 [i_2] [i_3] [i_7] [i_9 - 4]), (min((arr_1 [i_2]), 1503157561992096901))))));
                                var_27 += (max(((min((arr_11 [i_3] [i_9 - 1] [i_9 + 1] [i_9 - 1]), var_14))), (max(17910371290218030406, 8778379718934381873))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            {
                var_28 = max(((((arr_21 [i_10] [13]) ? (arr_21 [i_10] [i_10]) : (arr_21 [i_10] [i_11])))), ((-2079571620 ? (min((arr_23 [i_10] [i_10] [i_11]), -1)) : (arr_22 [19]))));
                var_29 = ((((max((arr_22 [i_11]), (max(var_7, (arr_22 [i_10])))))) >= (arr_24 [7] [i_11])));
                var_30 = (max(var_30, var_12));
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_31 ^= (min(((((arr_28 [i_14 - 1] [i_14 + 1] [i_14] [i_14 + 3]) && ((((arr_28 [i_10] [i_12] [2] [i_14]) ? var_16 : var_4)))))), (((arr_30 [i_14 + 2] [i_14 + 1] [i_14 + 3]) & (arr_30 [i_14 + 1] [i_14 + 3] [i_14 + 1])))));
                                var_32 = (((min(((1034275517 ? -24255 : (arr_23 [i_11] [i_12] [i_14 + 3]))), (!787162468)))) ? (~var_10) : (arr_29 [i_10] [i_13] [i_12] [i_13]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
