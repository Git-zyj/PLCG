/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? var_2 : var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (arr_7 [i_0] [i_1] [8]);
                    arr_8 [i_0] [i_0] [i_1] = ((((min(0, 0))) ? -0 : (((arr_1 [i_1] [i_1 - 3]) ? (arr_1 [i_1 - 1] [i_1 + 1]) : 4294967273))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = (((arr_6 [i_1] [i_1 - 4] [i_1]) ? (arr_0 [i_1 - 2]) : (arr_13 [i_0] [6] [i_2] [i_3] [i_4])));
                                arr_15 [i_0] [i_1] [i_0] = ((var_13 ? (arr_1 [4] [i_1]) : (min((((4294967295 - (arr_6 [i_0] [i_0] [i_1])))), 3946949955591374485))));
                                var_17 = ((((((arr_10 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 4] [i_1 - 4]) / (arr_10 [i_1 - 1] [i_1] [4] [i_1 - 1] [i_1 - 4] [4])))) ? (arr_10 [i_0] [i_1] [i_2] [i_1] [i_4] [3]) : (arr_11 [i_0] [i_1] [6] [i_3] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_18 = ((((arr_24 [i_7] [5] [i_7]) / (arr_22 [i_6] [i_7]))));
                                var_19 = (min(var_19, (((max((((arr_2 [i_8] [i_6] [i_6]) ? 19 : (arr_0 [i_9]))), (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                                arr_26 [i_8] [i_8] [i_7] [i_5] [i_5] = (min(4294967295, 2042608249));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 7;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_20 = (min(((((((3946949955591374472 ? 1158153873 : -1))) ? ((-1846294956 ? 0 : 1994570875)) : (((arr_3 [3] [3] [i_7]) ? (arr_3 [i_5] [9] [9]) : (arr_24 [i_7] [i_6] [i_7])))))), -6960266974298643341));
                                arr_31 [i_7] [i_6] = (arr_5 [i_7] [i_6] [1] [0]);
                                var_21 = (arr_30 [i_5] [i_5] [i_5]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_36 [1] [i_6] [i_7] [i_7] [3] = (max((arr_10 [i_5] [0] [i_7] [8] [i_13] [6]), (((arr_10 [1] [i_7] [i_7] [i_6] [i_5] [i_5]) ? 8 : (arr_10 [i_5] [i_6] [i_7] [i_6] [i_13] [i_6])))));
                                var_22 = (min(13217, (arr_4 [i_13] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
