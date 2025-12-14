/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_7 [4] [i_0] [4] &= (((((arr_6 [i_0 + 2] [18]) / (arr_6 [i_0 - 1] [20]))) ^ var_10));
            arr_8 [i_0] [i_1] = 52531647;
            arr_9 [i_1] = -12675;
        }
        arr_10 [i_0] [10] = (min(195, 751056895));
        arr_11 [16] = var_8;
        arr_12 [i_0] = ((~((~(arr_0 [i_0 - 2] [i_0 - 2])))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_26 [3] [3] [i_2] [i_2] [i_2] [i_4] [i_3] = (((((!(arr_24 [2] [i_2] [i_2] [i_5 + 1] [2] [i_5] [i_5 - 2])))) >> (((arr_24 [i_5] [i_5] [i_5] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 2]) - 2717594594544357418))));
                                arr_27 [i_3] [1] [i_3] = var_11;
                                arr_28 [i_5] [i_3] [i_3] [i_3] [i_0] = (((max(751056904, 0)) * var_12));
                            }
                        }
                    }
                    arr_29 [i_0] [i_0] [2] [i_0] |= (min(((((arr_23 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3]) <= -751056894))), -var_4));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_36 [i_3] [i_7] [i_3] = (((((arr_25 [i_7] [i_7 + 1] [i_7] [19] [i_2 - 2] [i_7] [i_2 - 2]) + 15)) == ((((!(arr_33 [i_3] [10])))))));
                                arr_37 [i_3] [i_3] [i_3] [15] [18] = var_12;
                                arr_38 [i_3] [i_3] = max((arr_0 [i_0 - 1] [i_0 - 2]), (arr_0 [i_0 + 2] [i_0 + 1]));
                                arr_39 [i_3] [i_6] [i_0] [i_2] [i_3] = ((((-(arr_21 [i_3] [i_7]))) - ((min((0 - 1), 65520)))));
                            }
                        }
                    }
                    arr_40 [i_3] = var_6;
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        arr_43 [i_8 + 1] [i_8 + 1] = (((((!(arr_20 [6] [i_8] [i_8] [i_8 - 1])))) * (!-751056879)));
        arr_44 [i_8] = (arr_22 [2] [i_8] [12] [12] [2]);
        arr_45 [i_8] = ((((((15 | -42739001570041182) % (((12221 ? var_6 : var_10)))))) ? (((1 + 32767) ? (arr_32 [2]) : (arr_17 [i_8] [16] [16] [i_8]))) : (((9081214305331411949 && (arr_18 [18] [18] [i_8 + 1]))))));
    }
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        arr_48 [i_9] = ((-(arr_6 [i_9] [4])));
        arr_49 [i_9] [i_9] = (min(var_14, var_7));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                {
                    arr_56 [2] = (((arr_2 [i_11 - 2]) ? (((((max(7467, 134217728))) ? ((-(arr_41 [i_9] [i_10 - 1]))) : -var_12))) : 3203374987));
                    arr_57 [1] [i_10 + 1] [i_11] = (((((~(arr_22 [i_11 + 1] [i_11] [i_11] [11] [i_11])))) <= -2523307269016924530));
                }
            }
        }
    }
    var_17 = var_12;
    #pragma endscop
}
