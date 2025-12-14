/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 13835058055282163712;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [2] = (arr_3 [i_0] [i_0]);
                arr_7 [0] = min(((((arr_2 [i_1 - 1]) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1])))), 562949945032704);
                arr_8 [i_0] [i_1] = ((((!(4611686018427387904 || var_17)))) != (~-32763));
                arr_9 [i_0] [i_0] [i_1] = ((max((arr_3 [i_1 - 1] [i_0]), (arr_3 [i_1 + 1] [i_0]))));
                arr_10 [i_0] [i_0] = (max(((~(arr_5 [i_1]))), -1758736293));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_17 [i_3] = (((arr_13 [8]) + (min(4294967295, ((((arr_14 [i_2]) != 4294967287)))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_26 [i_3] [i_5] [i_3] [i_3] = ((~(max((min(8191, (arr_14 [18]))), 0))));
                                arr_27 [i_5] [i_5] [i_3] [i_5] = 0;
                                arr_28 [i_5] [i_3] [i_3] [i_5] [i_6] [i_4] = ((((((arr_20 [i_3] [i_5 + 2]) ? (arr_20 [i_3] [i_5 + 2]) : 4294967287))) ? (((-1409948619 ? (min(0, (arr_21 [i_3] [i_4] [i_3]))) : (arr_16 [i_3])))) : (min(((min(var_11, (arr_21 [i_2] [i_2] [i_3])))), ((8033929616465456511 ^ (arr_13 [i_2])))))));
                                arr_29 [i_4] [i_3] = var_6;
                            }
                        }
                    }
                }
                arr_30 [i_3] [i_3] [i_3] = ((-(((arr_12 [i_3] [i_2]) + 0))));
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                arr_39 [8] [i_3] [i_7] [i_8] = var_13;
                                arr_40 [i_2] [i_7] [i_8] [i_8] [2] [i_3] [i_7] = (min((~2694614514), (min((max(var_18, (arr_15 [i_7]))), (arr_24 [i_7 + 1] [i_2 - 4] [i_3] [i_8] [i_9 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    arr_48 [8] |= ((((((arr_36 [i_11 - 2] [2] [i_11 - 2] [2] [i_11] [i_10]) - (arr_36 [i_11 - 1] [14] [i_12] [i_12] [i_10] [16])))) ? (arr_25 [i_11 + 1] [i_11 + 1] [i_11 - 3] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1]) : (min(((-(arr_43 [1]))), 63))));
                    arr_49 [i_10] = arr_35 [i_10] [i_11 - 2] [i_12] [8];
                    arr_50 [i_10] [i_10] [i_12] [1] = (((((~(arr_20 [8] [i_11])))) > 1221832645015393741));
                    arr_51 [10] [18] = ((-63 ? (arr_19 [i_11 + 2] [2]) : -5731833928067323458));
                    arr_52 [i_10] [14] [i_12] = ((((((arr_12 [i_11 - 1] [i_11 + 2]) - (arr_12 [i_11 - 2] [i_11 - 1])))) ? -63 : (((arr_12 [i_11 - 3] [i_11 - 2]) ? (arr_12 [i_11 - 1] [i_11 - 3]) : (arr_12 [i_11 + 2] [i_11 + 1])))));
                }
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
