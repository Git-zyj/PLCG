/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((max(255, (var_8 * var_9))), ((((((875071661 ? 92 : -111))) ? (max(var_11, 114)) : (255 + 18030))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_9;
        arr_3 [i_0] [i_0] = (arr_0 [2]);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1 - 1] [i_1 - 1] = ((~(arr_6 [i_1])));
        arr_8 [i_1] = ((!(arr_5 [i_1 - 1])));
        arr_9 [i_1] = max(-121, (max((((35 ? -111 : (arr_6 [i_1 + 3])))), (arr_5 [i_1 + 2]))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [i_1] [i_2] [i_1] = -0;

            for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
            {
                arr_15 [i_1] [i_1] [i_2] [14] = ((~(arr_4 [i_1 + 3])));
                arr_16 [i_1] [i_1] [i_1] = var_2;
            }
            for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_27 [i_1 + 3] [i_6] [i_6] = (((arr_18 [i_1 - 1]) ? (arr_10 [i_2]) : (arr_10 [i_2])));
                            arr_28 [i_4] [1] [i_4] = (arr_22 [i_1 - 1] [i_1] [i_1] [i_1 + 2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_36 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1] = 8384512;
                            arr_37 [i_1] [i_2] [i_4] [i_4] = (3 - 102);
                            arr_38 [i_1] [i_2] [i_4] [i_7] [i_2] = (((((~(arr_18 [i_7])))) ? (~115) : var_5));
                        }
                    }
                }
                arr_39 [7] [7] [i_4] = (((arr_32 [i_1 - 1] [i_4] [i_4] [i_2] [9]) ? (((((arr_29 [i_4] [i_4] [14] [i_4] [13] [i_2]) || 79)))) : (((arr_17 [3] [3]) ? (arr_17 [i_1 - 1] [i_1 - 1]) : 98))));
                arr_40 [12] [i_1] [i_1] [i_1 + 3] = (26 > 98);
            }
            for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_45 [i_1 + 2] [i_10] [0] [4] = (((((arr_21 [i_1 + 1]) - -1))) ? (arr_24 [i_10]) : (arr_24 [i_10]));
                    arr_46 [i_9 - 1] [i_9 - 1] [i_9] [i_10] = (((!61487) == var_10));
                }

                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_49 [i_1] [i_1] [i_1] = (((((var_11 ? 3462816671 : -96))) ? (var_11 - var_8) : (arr_23 [10] [i_1 + 3] [2] [i_1 - 1] [i_1 + 2] [i_1 + 2])));
                    arr_50 [i_1] [i_1 + 3] [i_1 + 1] = ((var_7 || ((((arr_21 [i_11]) ? var_9 : var_0)))));
                }
                arr_51 [i_1] = var_9;
                arr_52 [i_2] [i_9] = ((var_5 < (arr_26 [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1])));
                arr_53 [i_1] [i_2] [i_9 + 1] = ((var_0 ^ (((arr_17 [i_2] [i_9]) ? var_3 : 248))));
            }
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                arr_56 [i_12] [i_2] [i_2] [i_2] = ((-1 ? (arr_48 [i_12 + 1]) : ((-(arr_22 [i_1] [i_1] [i_1] [i_1])))));
                arr_57 [i_1] [i_2] [i_12] = (((var_7 ? (arr_34 [i_1] [i_1] [i_12] [i_12] [i_12]) : 47)) - (~1045782939));
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            arr_61 [1] [i_13] = ((~(arr_20 [i_1] [i_1] [4] [i_13])));
            arr_62 [2] [i_13] = ((var_8 ? var_10 : (~var_1)));
            arr_63 [11] = (~var_0);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            arr_68 [i_1] [10] [i_14] = (-(~var_7));
            arr_69 [i_1] [8] |= ((var_1 ? (arr_21 [i_14]) : 206));
            arr_70 [9] [i_14] = ((var_4 ? (var_0 % var_10) : 92));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 12;i_16 += 1)
                {
                    {
                        arr_77 [i_1 + 1] [i_16] [i_16] = (arr_54 [i_1] [i_16] [i_1 + 1] [i_16]);
                        arr_78 [i_16] [i_16] [12] [i_16] [i_16] = ((~(~var_2)));
                        arr_79 [i_1] [i_14] [i_16] = ((var_3 > (arr_33 [i_1] [i_1 + 3] [i_16 + 2] [i_16] [i_16])));
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        arr_82 [i_17] = var_11;

        /* vectorizable */
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            arr_85 [i_17] [1] = ((((var_2 ? var_11 : var_4)) | (arr_17 [i_17] [i_17])));
            arr_86 [i_17] [i_17] [i_17] = (((((8838293662223907737 ? -121 : 863681622))) ? (((arr_75 [i_17] [i_17] [i_17] [i_17] [i_18] [3]) ? 1114974835944158431 : -58)) : (arr_80 [i_17])));
            arr_87 [8] [2] = (1 % var_5);
            arr_88 [10] [10] [10] = ((-(((arr_81 [i_17] [i_18]) ? -111 : (arr_13 [i_17] [i_17] [i_17])))));
        }
        arr_89 [i_17] = ((~(~var_2)));
    }
    var_13 = (((((209 >> (-111 != 1781691061)))) || var_9));
    #pragma endscop
}
