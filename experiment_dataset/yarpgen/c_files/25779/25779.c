/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_4] [i_2 + 1] [i_3 + 2] [14] = ((var_6 ? ((var_11 << (arr_6 [7] [i_1] [i_1] [14]))) : (arr_6 [i_4] [i_1] [i_1] [i_1])));
                                arr_13 [i_1] [8] [i_1] = (arr_2 [i_0] [11] [i_4]);
                                arr_14 [6] [i_1] = ((~(((max(1, 94))))));
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_1] [3] [i_3 - 2] [9] = (arr_7 [i_3 + 3] [15] [i_3 + 1] [i_4]);
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] = (max((arr_8 [1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), 94));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [5] [i_1] [4] [0] = (max((arr_4 [1] [i_2 + 1] [6]), (arr_0 [i_2 - 1])));
                                arr_23 [i_0] [0] [i_1] [i_5] [i_6] = ((-((var_0 & (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                                arr_24 [i_1] [3] [i_5] = (max(((~(var_9 * 1))), ((((arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (arr_21 [i_6] [i_1] [i_2 + 1] [i_2 - 1] [i_1] [i_0]) : var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_30 [i_7] [7] [i_8] = var_9;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_41 [i_7] [i_8] [i_9] [i_7] [i_9] = ((~(arr_10 [16] [i_9] [i_9] [i_9] [i_7])));
                            arr_42 [i_7] [0] = (max(var_1, (max(-77, (min(160, var_4))))));
                            arr_43 [i_7] [i_7] [i_11] = (((!var_9) != ((~((min(-72, (arr_8 [i_7] [i_9] [i_10] [i_11]))))))));
                        }
                    }
                }
            }
            arr_44 [i_7] [i_8] = (max(var_12, ((-((17 ? var_10 : (arr_36 [5])))))));
            arr_45 [4] [i_7] [i_7] = (arr_40 [i_7] [4] [i_7] [4] [7] [4] [i_8]);
        }
        for (int i_12 = 3; i_12 < 9;i_12 += 1)
        {
            arr_49 [i_7] = var_3;
            arr_50 [i_7] [i_7] [i_12] = (arr_5 [2] [1] [13]);
            arr_51 [4] [i_12] [i_12] = ((-436367031 - (max(3047905926, 1365746288404960184))));
        }

        for (int i_13 = 1; i_13 < 8;i_13 += 1)
        {
            arr_55 [5] [2] = (((~(arr_48 [i_7] [i_7]))));
            arr_56 [5] = ((var_6 ? (((((43691 ? var_7 : (arr_26 [3])))) ? (arr_46 [i_7] [i_13 + 1]) : var_7)) : var_2));
        }
        arr_57 [i_7] = ((((max((arr_2 [12] [7] [12]), var_5))) - ((+((var_11 ? (arr_1 [i_7]) : var_4))))));

        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            arr_61 [i_7] [i_7] = -17;
            arr_62 [4] [9] = ((+(max((~var_10), (min(var_6, var_7))))));
        }
        arr_63 [i_7] = ((~(((((arr_8 [i_7] [i_7] [i_7] [4]) ? (arr_18 [1] [i_7] [i_7] [i_7]) : -436367045)) * ((133 ? (arr_28 [0] [2]) : (arr_6 [i_7] [2] [i_7] [8])))))));
    }
    #pragma endscop
}
