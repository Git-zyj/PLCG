/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (min((var_12 <= var_9), (max(var_3, (max((arr_2 [i_0] [i_0] [i_1]), (arr_0 [i_0])))))));
            arr_6 [0] &= (var_1 & (arr_2 [i_0] [0] [0]));
        }

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            arr_11 [i_0] = ((((var_9 >= (arr_0 [i_2 + 1])))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                        arr_19 [i_0] [i_4 - 1] [1] [i_0] [i_0] [i_0] = min((arr_15 [i_2 - 1]), (((arr_12 [i_4 + 1] [i_0]) <= (arr_12 [i_4 - 1] [i_0]))));
                        arr_20 [i_0] = (~(~12132390757434396689));
                    }
                }
            }
            arr_21 [8] [0] [i_2] = (arr_9 [i_0]);
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            arr_25 [i_0] [7] = (var_4 && var_8);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_30 [i_0] [0] [i_0] [0] = (max((arr_16 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_0]), (arr_10 [i_5 - 2] [i_7 - 4])));
                        arr_31 [i_0] = var_8;

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [3] = var_4;
                            arr_36 [i_0] [i_0] [i_0] [i_6] [i_8] [i_5] [i_6] = (-(arr_15 [i_8]));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_22 [i_7] [i_7]);
                            arr_38 [6] [6] [i_0] [i_7] [i_0] [i_6] [i_0] = (arr_9 [i_7 + 1]);
                            arr_39 [i_8] [i_0] [i_7] [i_6] [i_0] [i_0] = (1 >= 32256);
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0] [2] [i_0] = (arr_2 [i_0] [i_0] [3]);
                            arr_43 [i_0] [i_0] [i_0] [i_7] [9] [i_0] [1] = (arr_9 [i_7 + 1]);
                            arr_44 [i_0] [i_5] [3] [i_0] [i_9] [i_9] = 1;
                            arr_45 [i_0] [i_7] [i_5] [i_0] [i_5] [i_0] [i_0] = (((var_10 != var_3) || ((!(arr_13 [i_0] [i_0] [i_6])))));
                        }
                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            arr_49 [i_0] [i_0] = ((!((((arr_14 [i_0] [1] [i_6]) * (((var_0 <= (arr_15 [i_10])))))))));
                            arr_50 [1] [i_0] [i_6] [i_0] [i_0] = var_3;
                            arr_51 [i_0] [i_5] [i_5] [i_6] [8] [i_6] [8] = (max(((~(arr_40 [i_5] [i_10] [i_10 - 2] [i_7] [i_5]))), var_9));
                            arr_52 [i_7] [i_10] [i_7] [i_0] [i_6] [i_5] [i_0] = (arr_17 [i_0] [i_5 - 2] [i_6] [i_0] [i_0] [i_0]);
                        }
                        arr_53 [i_0] [i_5] [i_5] [i_5] [i_0] = ((~(((arr_41 [6] [6] [i_7 - 2] [i_7] [i_7]) * (arr_2 [i_0] [i_0] [i_7])))));
                    }
                }
            }
            arr_54 [i_0] = ((((min(var_11, var_0))) && ((((-(arr_4 [i_0]))) >= (arr_15 [i_0])))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            arr_64 [i_5] [i_11] = (arr_48 [i_0] [i_12] [i_11] [i_0] [i_0]);
                            arr_65 [i_0] [i_5] [5] [i_0] [i_13] [i_13] = ((~(min((arr_28 [i_13] [2] [i_5] [i_0]), (arr_28 [i_13] [i_11] [i_11] [i_5 + 1])))));
                            arr_66 [i_0] [9] [7] [7] [3] [i_0] = ((min((arr_28 [4] [i_5 + 1] [i_13] [i_13]), (arr_28 [i_0] [i_5 + 1] [i_13] [3]))));
                        }
                    }
                }
            }
        }
        arr_67 [i_0] = (min((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_24 [i_0])));
    }
    for (int i_14 = 1; i_14 < 20;i_14 += 1)
    {
        arr_71 [i_14] [i_14] = (!var_0);

        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            arr_75 [13] [i_14] = (arr_69 [i_15] [i_14]);
            arr_76 [i_15] = ((((!(arr_70 [i_15 - 2])))));
            arr_77 [i_15 - 1] [i_15] = (((min(var_10, (arr_68 [i_15])))));
            arr_78 [i_14] [i_14] = var_5;
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        arr_83 [7] = (arr_79 [5]);
        arr_84 [i_16] = (~var_8);
    }
    var_14 = (max((112 != 1), -31607));
    var_15 = ((var_13 >> (((~var_9) - 3858728942))));
    #pragma endscop
}
