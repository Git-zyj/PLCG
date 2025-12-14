/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_1 ? var_13 : var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((!(arr_0 [i_0] [9])));
                    arr_9 [6] = 112;
                    arr_10 [i_2] [i_1] [i_0] = ((-(arr_6 [i_0] [i_1] [i_1] [i_2])));
                    arr_11 [i_0] [i_1] = (((((arr_5 [i_0] [i_1] [i_2]) ? 51 : (arr_1 [i_0]))) != 177));
                }
            }
        }
        arr_12 [i_0] = ((((var_9 ? var_6 : 128)) == (arr_6 [i_0] [7] [i_0] [i_0])));

        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = (((((107 ? var_4 : var_0))) || var_7));
            arr_17 [i_3] = 124;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_3] [8] = 98;
                        arr_24 [i_0] [i_3] [i_0] [i_0] = (((arr_1 [i_0]) || 77));
                        arr_25 [i_0] [i_3] [10] [i_4] [i_5 + 1] [i_4] = (((arr_14 [i_0] [i_0] [i_0]) < (2558031271 >= 4294967276)));
                        arr_26 [i_3] [9] [i_3] [i_3] [i_3] = arr_18 [i_0] [i_0] [i_0];
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_30 [i_0] = (((arr_18 [i_0] [i_0] [4]) ^ ((var_16 ? (arr_4 [i_6]) : (arr_1 [i_0])))));

            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                arr_34 [i_0] [i_7] [8] [i_7] = var_10;

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_38 [i_0] [i_7] = (arr_35 [i_6] [i_7 - 2] [i_6] [i_0]);
                    arr_39 [i_0] [i_7] [i_7] [i_7] = var_12;
                    arr_40 [i_7] [i_7] [i_0] = (arr_15 [i_0] [i_0] [i_0]);
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_46 [i_10] [i_10] [i_9] [11] [i_6] [10] = (((arr_37 [i_0] [i_6] [i_9] [i_6] [i_6] [i_6]) ? var_1 : (arr_13 [i_0])));
                        arr_47 [i_0] [i_9] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                        arr_48 [i_6] [i_6] [i_0] |= arr_41 [i_6] [i_10];

                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            arr_51 [i_0] [i_0] [i_9] [i_10] [i_11] = 206;
                            arr_52 [i_0] [i_0] [i_0] [i_0] = (((((var_4 ? (arr_32 [i_0] [i_6] [i_9] [i_0]) : (arr_36 [i_0])))) ? (arr_44 [10] [i_6] [i_9] [i_10]) : ((0 ? (arr_35 [i_0] [i_0] [i_0] [i_0]) : 88))));
                            arr_53 [i_0] [15] [i_9] [i_9] [i_10] [i_11] = (arr_7 [i_0] [14] [i_9]);
                            arr_54 [i_0] [i_6] [i_9] [i_10] [i_11] |= 0;
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            arr_59 [i_0] = (arr_42 [i_12] [i_10] [i_9]);
                            arr_60 [i_0] [i_0] [i_6] [i_9] [i_6] [i_12] [i_12] = (((arr_19 [7] [i_12]) != (((~(arr_50 [i_6] [i_6] [i_6] [i_6] [i_12] [i_0]))))));
                            arr_61 [i_0] [i_6] [i_9] [i_9] [i_12] |= (((arr_45 [i_0] [5] [i_9] [i_10] [i_12] [i_12]) ? (arr_45 [i_0] [i_0] [i_9] [i_0] [i_12] [11]) : (arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_62 [i_6] [i_6] [i_6] [i_6] [5] [i_6] [8] = arr_55 [6] [i_12] [i_12] [i_12] [i_12];
                        }
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            arr_65 [4] [i_6] [10] [i_10] [i_13 + 2] = (((((var_13 ? (arr_36 [i_0]) : var_16))) ? (((!(arr_19 [1] [i_6])))) : (((15 && (arr_35 [i_6] [i_6] [i_6] [i_6]))))));
                            arr_66 [i_10] = (((arr_0 [i_13 + 2] [i_13 - 1]) ? (arr_0 [i_13 + 1] [i_13 + 1]) : (arr_0 [i_13 - 1] [15])));
                        }
                    }
                }
            }
            arr_67 [i_6] = (((arr_56 [i_0] [i_0] [i_0] [i_0] [i_0]) & (arr_56 [i_0] [i_6] [i_6] [i_0] [i_6])));
            arr_68 [i_0] = (~173);
        }
        arr_69 [13] [i_0] = ((((255 ? (arr_45 [2] [i_0] [i_0] [i_0] [12] [i_0]) : (arr_36 [i_0])))) ? 13 : 102);
        arr_70 [i_0] = ((131 ? (arr_45 [i_0] [i_0] [1] [12] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_74 [i_14] = ((255 ? (arr_71 [i_14] [i_14]) : (((arr_71 [i_14] [i_14]) ? 197 : (arr_71 [i_14] [i_14])))));
        arr_75 [i_14] = (27 | 64);
    }
    var_19 = var_0;
    #pragma endscop
}
