/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 - 3] = (arr_0 [0] [i_0]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] |= arr_4 [8] [i_0 + 1] [i_0 + 1];
            arr_6 [i_1] [i_0] = var_11;

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_9 [i_2] [5] [0] = var_4;
                arr_10 [i_2] [i_1] [i_0] = arr_4 [i_0] [1] [i_0 + 1];
                arr_11 [i_0 - 3] [i_1] [i_2] [i_2] = var_6;
                arr_12 [i_2] [i_1] [i_0] [i_0] = (arr_3 [i_1] [i_1]);
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_1] [i_3] = var_11;
                arr_17 [i_0] = (arr_15 [i_3] [i_3]);
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
            {
                arr_20 [1] [i_0] = (arr_15 [i_0 - 2] [i_1]);
                arr_21 [i_0 - 1] [6] [6] [i_4] = ((~(arr_4 [6] [i_1] [i_0])));
            }
        }

        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            arr_24 [i_5 - 2] = (arr_18 [i_5] [i_5] [i_5 - 1] [i_0]);

            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_27 [i_6] [i_5] = (arr_0 [i_0 - 3] [i_5 - 1]);
                arr_28 [6] [i_0] [1] [i_0] = ((!(arr_23 [i_5 + 3] [i_5 - 1] [i_0 - 1])));

                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    arr_31 [i_7 - 1] [i_6] [i_7] [i_7] [i_0] [i_0] = var_7;
                    arr_32 [i_0 - 1] [i_7] [i_6] [i_0 - 1] = (arr_30 [i_6] [i_6] [i_7] [i_6] [0]);
                    arr_33 [i_7] [i_5] [i_5] [i_0 - 2] = var_7;
                    arr_34 [i_0] [i_0 - 2] [i_7] = var_8;
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_39 [i_0] = var_0;
                    arr_40 [3] [i_6] [i_5] = (~1);
                }
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                arr_43 [i_0 + 1] [i_5] [i_5] = ((-(!var_5)));
                arr_44 [i_0] [i_0 - 2] [i_0] [i_0 - 2] = arr_22 [i_5 + 3];
                arr_45 [i_9] [i_9] [9] = var_1;
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_48 [i_0] [i_5] [i_5 - 2] [5] = (arr_1 [i_0 - 3]);
                arr_49 [i_0] [11] = arr_19 [1] [i_10] [1];
            }
            arr_50 [i_0] [i_0] = var_8;
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            arr_53 [i_0] &= var_7;
            arr_54 [i_11] = var_0;
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            arr_57 [i_0 - 3] [i_12] = (arr_22 [i_12]);
            arr_58 [i_0] [i_0 - 3] [i_0 - 2] = (arr_51 [i_12]);

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                arr_61 [i_0] [i_0] = var_6;
                arr_62 [i_12] [i_13] [i_12] [i_0 - 1] = var_18;

                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    arr_67 [i_13] = (arr_65 [1] [1]);
                    arr_68 [i_0 + 1] [i_12] [i_13] [i_14] = var_17;
                    arr_69 [i_13] [i_14] [i_13] [1] [i_12] [i_0] = (arr_35 [i_0] [i_13] [i_13] [i_13] [i_13]);
                }
            }
            arr_70 [i_12] [i_0] = ((-(arr_37 [1])));
            arr_71 [i_0 + 1] [i_12] = var_10;
        }
    }
    var_19 = var_11;
    #pragma endscop
}
