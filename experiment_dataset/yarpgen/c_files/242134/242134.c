/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 &= (!var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!((((-(arr_3 [i_0])))))));
                var_19 = var_10;
            }
        }
    }

    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((((var_8 ? (((arr_2 [i_2] [i_2] [i_2 + 3]) >> (var_5 - 2610720599229656310))) : (arr_2 [i_2 + 2] [i_2 - 2] [i_2 + 2]))) <= var_4));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] [i_2] [2] [i_2] [i_2] |= (((((arr_6 [i_4 - 1]) ? var_8 : (arr_6 [i_4 - 3]))) & ((min((arr_6 [i_4 + 3]), (arr_6 [i_4 + 2]))))));
                        arr_17 [i_2] [i_3] [i_4 + 2] [i_2] [i_3] [i_4] = (arr_14 [i_5] [i_4] [i_2 + 3] [i_4] [i_2]);
                    }
                }
            }
        }
        arr_18 [i_2 - 1] = var_11;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_27 [i_2] [i_6] [i_8] = ((((((max((arr_14 [i_2] [6] [6] [i_2] [12]), (arr_11 [i_2 + 1] [i_2 + 2] [i_2])))) ? (max(var_8, (arr_1 [i_2]))) : (((~(arr_23 [i_6] [i_6] [i_7] [i_6])))))) >> (!var_14)));
                        var_20 = (max(var_20, (((!((max((arr_5 [i_2 + 1]), (arr_5 [i_2 + 2])))))))));
                        var_21 -= (((((var_10 ? var_5 : (max((arr_20 [i_2 - 1] [i_6] [3]), (arr_19 [i_7])))))) || -var_8));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    arr_34 [i_2] [i_9 + 1] [i_10] = ((+(max((arr_8 [i_9 - 1] [i_2 + 2]), (arr_22 [i_9 - 2])))));
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_22 = arr_25 [i_2 + 1] [i_9 + 1] [i_10] [i_11 + 1] [i_12];
                                arr_40 [i_2] [i_2] [i_10] [i_11] [12] [i_9] = var_9;
                            }
                        }
                    }
                    var_23 = (min(var_23, var_16));
                    var_24 = ((((((arr_22 [i_9 + 1]) ? (arr_22 [i_9 - 1]) : var_1))) ? (((arr_22 [i_9 - 2]) ? (arr_22 [i_9 - 1]) : (arr_22 [i_9 - 1]))) : ((((arr_22 [i_9 - 2]) || var_8)))));
                    arr_41 [3] [3] [i_10] [3] = ((-(((arr_35 [12] [i_2 - 1] [i_2 + 2] [i_2 + 2]) ? var_2 : var_15))));
                }
            }
        }
    }
    for (int i_13 = 2; i_13 < 10;i_13 += 1) /* same iter space */
    {
        var_25 = ((!((max((max(var_15, (arr_14 [i_13] [0] [i_13] [i_13] [i_13]))), (max((arr_30 [i_13] [i_13]), (arr_29 [i_13] [i_13] [i_13 - 2]))))))));
        arr_45 [i_13] = (((((((var_6 ? (arr_30 [i_13] [2]) : (arr_13 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13 - 1]))) * (((arr_24 [i_13] [i_13 + 3]) ? (arr_13 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 + 3] [i_13 + 3]) : var_3))))) ? ((((arr_43 [i_13 - 2]) >= (arr_15 [i_13 - 1] [i_13 + 1] [i_13 + 2] [i_13 - 2] [i_13 + 3] [i_13 + 2])))) : (arr_13 [i_13 - 1] [1] [i_13] [i_13] [i_13 - 1] [i_13])));
        arr_46 [i_13 - 2] = ((!(((~(((arr_39 [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 3] [9]) ? (arr_10 [i_13] [i_13 - 1] [i_13]) : var_11)))))));
    }
    for (int i_14 = 2; i_14 < 10;i_14 += 1) /* same iter space */
    {
        var_26 = arr_14 [i_14 - 2] [i_14] [i_14 - 2] [i_14] [i_14 - 2];
        arr_50 [i_14] [12] &= (((arr_30 [i_14] [i_14]) << (((max((arr_6 [i_14 - 1]), (arr_15 [i_14 + 3] [i_14] [i_14 + 2] [i_14 + 2] [i_14] [0]))) - 143))));
    }
    #pragma endscop
}
