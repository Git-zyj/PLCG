/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (818675973 + 0);
        var_11 = (min(var_11, (((0 << (((((min(32634, var_2))) <= (arr_0 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((~(arr_3 [i_1] [i_1 + 1])));
        arr_6 [i_1] [i_1] = var_4;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_12 = min(6952040557494841506, (min(((min(var_7, (arr_7 [i_3])))), ((-(arr_3 [i_4] [i_2]))))));
                    arr_13 [i_3] [i_3] = (((min(var_3, var_4)) / ((max((-1456897153 / var_10), var_6)))));
                }
            }
        }
        var_13 = (max(var_13, (46 == var_9)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_18 [i_2] [i_2] [i_2] = (((arr_14 [i_2] [1] [1]) | (arr_16 [i_2] [3] [i_6] [i_2])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_14 = -1048898128;
                                var_15 = (arr_16 [i_5] [i_7] [i_6] [i_5]);
                                arr_24 [i_2] [i_2] [3] [i_2] [i_8] [i_8] = 13068000059489311531;
                                var_16 = 209;
                            }
                        }
                    }
                    arr_25 [i_6] [i_5] [i_2] = var_2;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_39 [1] [i_2] &= var_2;
                                arr_40 [i_9] [i_9] [i_9] [i_9] [i_12] = ((~((var_9 + (max(-1868324480988730680, var_1))))));
                            }
                        }
                    }
                    arr_41 [i_2 + 1] [i_9] [4] [i_10] = ((((min((~218), var_1))) * (max((min(var_2, -6952040557494841507)), (arr_4 [i_2])))));
                }
            }
        }
        arr_42 [7] [7] &= (var_9 - -84);
    }
    for (int i_13 = 2; i_13 < 14;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 14;i_16 += 1)
                {
                    {
                        var_17 = (((((-3609626524166363967 | (arr_53 [i_13] [i_14] [2])))) | (((max(5249919949100932765, var_3)) | 1))));
                        arr_58 [i_13] [i_13] [i_13] [i_13] = -2682057321519522443;
                        arr_59 [13] [13] [i_15] [13] |= -8202031794648998762;
                        arr_60 [i_16] [i_14] [i_15] [i_16] = (((min((min(var_9, 3476291323)), ((max((arr_57 [i_13] [i_13] [i_13] [i_13]), 584644768))))) & (min(((min(1637844495, var_4))), 7549196668606499232))));
                    }
                }
            }
        }
        arr_61 [i_13] [1] = (-var_7 + 0);
        var_18 = (min(var_10, 1));
        arr_62 [i_13] = ((~((~(arr_37 [i_13] [i_13] [i_13] [i_13 + 2] [i_13] [i_13] [i_13])))));
        arr_63 [i_13] = var_8;
    }
    var_19 = ((818675973 % (max((-35 | 29), (max(var_3, var_2))))));
    #pragma endscop
}
