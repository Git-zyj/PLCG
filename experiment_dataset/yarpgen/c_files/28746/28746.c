/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((((var_6 ? (arr_0 [i_0]) : 255)) + (arr_0 [i_0]))), var_4));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_5 [7] [i_0] [i_1 + 1] &= (max(-1, 91));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                arr_8 [0] [i_2] = (arr_1 [i_0]);
                arr_9 [i_0] [i_1] = (~26);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    arr_15 [2] [i_0] [i_1] [i_3] [i_4] = var_6;
                    arr_16 [i_0] = var_2;
                    arr_17 [1] = (((arr_1 [i_1 - 1]) ? (arr_14 [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_4]) : var_1));
                }
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    arr_20 [i_0] [i_1 - 1] [i_5] = (((arr_4 [i_1 - 1] [i_5 - 1] [9]) % (arr_4 [i_1 - 1] [i_5 - 1] [i_5 - 1])));
                    arr_21 [i_5] [i_3] [7] [i_5] = ((5 ? var_8 : (-127 - 1)));
                    arr_22 [i_0] [0] [8] [i_0] &= (((arr_10 [i_3] [i_3] [i_1] [i_0]) ? ((var_9 ? -11 : (arr_6 [7] [i_1] [10] [i_5 - 1]))) : (((var_5 >> (var_3 - 158))))));
                }
                arr_23 [i_0] [i_1] [i_1] = (-2147483647 - 1);
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_31 [i_0] [10] = ((((((max(-111, 110))) ? var_5 : ((var_6 ? 9 : (arr_19 [i_7] [i_6] [1]))))) | -8256461528473916477));

                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] = var_10;

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            arr_38 [i_8] [i_8] [i_7] [i_8] [i_9] = var_7;
                            arr_39 [i_0] &= (-2147483647 - 1);
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_43 [i_0] [7] [i_7] [i_8] = (arr_25 [i_7] [6] [i_0]);
                            arr_44 [10] [i_7] [i_8] [i_10] = -28729;
                        }
                        arr_45 [i_8] [i_7] = ((!((max((arr_42 [i_0] [i_0] [i_8]), (min((arr_28 [7] [i_7]), (arr_13 [i_7] [i_7] [i_6] [i_0]))))))));
                    }
                    arr_46 [i_0] = -118;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_53 [i_13] [i_12] [i_11] = var_2;
                        arr_54 [i_13] [i_12] [i_11] [i_0] = (arr_37 [i_0] [i_0] [i_12] [i_13] [i_13]);
                        arr_55 [i_0] = ((((min((min(32764, -1)), 5))) && ((max((arr_7 [i_13]), (((arr_47 [i_11]) ? (arr_50 [i_0] [i_11] [i_12]) : (arr_13 [i_13] [i_12] [10] [i_0]))))))));
                        arr_56 [i_0] [i_11] [1] [i_13] = ((-2147483646 > (arr_52 [i_0])));
                        arr_57 [i_0] [i_0] [i_0] = (max((max((((-5 ? var_7 : var_5))), (arr_49 [i_0] [8] [i_12] [i_13]))), (arr_29 [9])));
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_60 [i_14] = (min(33030144, (((78 < ((2147483647 ? var_8 : 0)))))));
        arr_61 [i_14] [14] &= -201138937;
        arr_62 [5] [8] = ((((max(var_7, (arr_59 [i_14] [i_14])))) * (max((var_6 % var_8), (arr_58 [14])))));
    }
    var_13 = (max((min((((var_5 ? var_3 : var_6))), (max(576460752303423488, 4490)))), var_7));
    var_14 = (~var_4);
    #pragma endscop
}
