/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = -8611;
                arr_7 [0] [i_0] [0] = (!2147483647);

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = (+-14);
                    arr_11 [i_0] = var_8;
                    arr_12 [i_0] = (((max(0, (min(0, (arr_2 [i_0]))))) >= (((((((min(1, (arr_1 [i_0]))))) >= (arr_3 [i_0])))))));
                    arr_13 [i_0] [i_0] [i_2] [i_0] = ((-((~(arr_9 [6] [i_0])))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_16 [1] &= (((min(9223372036854775807, var_3)) * ((max(7, (~29))))));
                    arr_17 [i_0] [i_0] [i_0] [i_3] = ((-(arr_9 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_23 [i_5] [i_0] [i_1] [i_3] [i_1] [i_0] [i_0] = ((-((~(~18180718711765575540)))));
                                arr_24 [i_0] [i_3] = (i_0 % 2 == zero) ? (((-((13779477730385311492 >> (min(1, (arr_14 [i_0] [i_0] [i_0])))))))) : (((-((13779477730385311492 >> (((min(1, (arr_14 [i_0] [i_0] [i_0]))) + 195519532)))))));
                            }
                        }
                    }
                }
                arr_25 [8] = (!-35);
            }
        }
    }
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            {
                arr_32 [i_6] [1] [1] = -var_0;
                arr_33 [i_6] [i_7] = var_6;
                arr_34 [2] [i_7] [i_7] = (-(((0 && (2462155077 && 27)))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_40 [i_6] [i_7] [i_8] = (--200);
                            arr_41 [i_8] [i_8] [i_6] [i_6] = ((((33 | (arr_21 [i_7 - 1] [1] [i_8] [i_9] [i_8 + 1] [i_7 - 1]))) - ((~(arr_29 [i_6] [i_7])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_45 [12] = (arr_44 [i_10] [i_10]);
        arr_46 [i_10] = 2462155095;
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_58 [i_11] [i_12] [i_11] [12] = 200;
                        arr_59 [i_11] [i_11] [i_13] [i_11] = 1524123925;
                        arr_60 [9] [9] [9] [9] [i_13] [i_11] = -var_1;
                    }
                }
            }
        }
        arr_61 [i_11] [i_11] = var_9;
    }
    #pragma endscop
}
