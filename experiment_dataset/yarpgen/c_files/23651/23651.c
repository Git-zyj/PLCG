/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = 0;
                    arr_8 [i_2] [i_1] [i_0] = (arr_5 [i_2] [i_1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = var_1;
                                arr_16 [i_1] [i_1] = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_31 [i_9] [i_8] [i_7] [i_7] [i_7] [i_6] [i_5] = (arr_11 [i_7] [i_6] [i_7] [i_6] [i_9] [i_7]);
                                arr_32 [i_5] [i_7] [i_7] [i_8] [i_9] = var_2;
                            }
                        }
                    }
                }
                arr_33 [i_5] = -2068604569;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_49 [i_10] = (min(((max(201326592, -9058))), (((arr_48 [i_10] [i_10] [i_10] [i_11]) - var_0))));
                            arr_50 [8] = (32749 + var_0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_56 [i_10] [i_10] [i_14] [i_15] = ((((4895118264142129869 ? 8626148227800195229 : 843)) >= (((var_5 ? (arr_29 [i_11 - 1] [i_14 - 2] [i_10]) : -16)))));
                            arr_57 [i_15] [i_10] [i_14] = (-17 * (max(((var_4 ? (arr_26 [i_10] [i_11] [i_14]) : 114)), 4294967295)));
                            arr_58 [i_10] [i_11] [i_15] [i_14] [i_15] = ((((((2068604550 ? 140 : 268434944))) ? (max(var_4, var_2)) : -var_7)));
                        }
                    }
                }
            }
        }
    }
    var_14 = var_12;
    #pragma endscop
}
