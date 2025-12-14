/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min(var_6, 20111)), var_0));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((20111 ^ (((!var_3) ? (arr_6 [i_0] [i_0] [i_2 + 3]) : (arr_6 [i_2 + 2] [i_0] [i_0])))));
                    arr_10 [i_0] = (!18446744073709551590);
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                {
                    arr_23 [i_3] [i_4] = ((-(arr_17 [i_4])));
                    arr_24 [i_5] [14] [14] [i_3] |= var_9;
                    arr_25 [i_3] [i_4] [i_5 - 1] [6] = ((var_6 ? (arr_14 [i_5 - 3]) : (arr_12 [i_5 - 2])));
                }
            }
        }

        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            arr_29 [i_3] [i_3] = (arr_26 [i_3] [i_3]);

            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                arr_32 [i_3] [i_6] [1] = ((var_5 ? (arr_27 [i_6 - 2] [i_7 + 2] [i_7]) : var_8));
                arr_33 [i_3] [i_3] [i_3] [i_3] = (var_0 < var_1);

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_39 [i_3] [i_6] [i_3] [i_7] [i_9] = (arr_21 [i_6 + 1] [i_9]);
                        arr_40 [4] [i_6] [i_6] [i_6] [i_9] [i_6] = ((20111 && (((var_1 ? (arr_13 [i_7]) : var_7)))));
                        arr_41 [i_3] [i_6] [i_7] [i_8] [i_8] &= (((arr_18 [i_6] [i_6 + 1] [i_6 - 2]) | (arr_28 [i_7 + 1] [i_6 + 1])));
                        arr_42 [i_8] [i_6 - 2] [i_7] [i_8] [20] = (((arr_27 [i_6] [i_3] [i_3]) || 20129));
                    }
                    arr_43 [i_3] [i_3] [i_7] [i_7] = ((-(arr_37 [i_7 + 3] [i_7 + 4] [i_7 + 2] [i_7 + 2] [i_6])));
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_50 [i_3] [i_3] [4] [16] [i_6] [i_3] [i_3] |= var_1;
                            arr_51 [i_10] [i_10] = ((-(arr_19 [i_6 - 2] [i_11 - 1] [i_10])));
                            arr_52 [i_3] [i_10] [i_10] [12] = var_0;
                        }
                    }
                }
            }
            arr_53 [i_6] = -9223372036854775552;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        arr_60 [i_14] [i_14] [i_13] [i_13] [i_13] [i_13] = var_6;
                        arr_61 [i_14] [i_6 - 1] = (~var_9);
                        arr_62 [i_3] [i_14] [i_3] [i_3] = ((45424 ? var_4 : (arr_48 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6])));
                        arr_63 [i_3] [i_6] [i_13] [14] = var_3;
                    }
                }
            }
        }
        arr_64 [7] = var_6;
        arr_65 [i_3] = (arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        arr_69 [7] = 45425;
        arr_70 [i_15] [i_15] = 20111;
        arr_71 [i_15] = ((((((13485904 ? 3 : 47314409) == (arr_67 [14]))))));
    }
    var_11 = var_5;
    var_12 = (min(var_9, ((min(1, 1)))));
    #pragma endscop
}
