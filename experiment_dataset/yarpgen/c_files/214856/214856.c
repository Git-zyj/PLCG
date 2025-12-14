/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = (((arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 1]) ? 43168 : 22368));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] = 43167;
                                arr_16 [i_0] [18] [i_2] [18] [i_0] = ((var_4 ? (arr_13 [i_2] [i_2] [i_2] [i_3] [i_4 + 2]) : 32759));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_21 [i_0] = 12864;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_6] [i_8] [i_8] [i_8] = (arr_2 [i_0] [i_0] [19]);
                            arr_32 [i_6] [i_5] [18] = 43172;
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_35 [i_0] = (arr_28 [i_9]);
            arr_36 [i_0] = (arr_19 [i_0] [i_0]);
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
        {
            arr_40 [i_10] [i_10] [i_10] = 1;
            arr_41 [i_10] [i_10] [10] = (arr_11 [18] [18] [i_10] [15]);
            arr_42 [i_10] = var_2;
        }
        arr_43 [i_0] = -33;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] = (((arr_34 [15] [12] [15]) ? ((43167 ? (arr_39 [i_11]) : -871070637)) : 10));
        arr_47 [i_11] = arr_18 [i_11] [i_11] [i_11];
        arr_48 [i_11] = 10;
        arr_49 [i_11] [i_11] = (arr_2 [i_11] [i_11] [i_11]);
    }
    var_16 = var_3;
    #pragma endscop
}
