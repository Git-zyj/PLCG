/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = -23057;
                                arr_12 [1] [i_1] [i_2] [i_3] [i_4] = (((!(arr_10 [i_1 - 2] [i_3] [4] [i_3] [i_2] [i_2] [i_1]))) ? (arr_9 [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] [i_1 - 1]) : var_5);
                            }
                        }
                    }
                    arr_13 [i_2] [10] [10] = (((((arr_9 [17] [i_2] [i_1 + 1] [i_1 - 2] [i_1]) ? ((var_10 ? var_3 : var_1)) : var_6)) > (((40108 ? ((max((arr_9 [i_0] [i_2] [i_2] [i_2] [i_2]), (arr_4 [i_0])))) : (arr_4 [i_1 - 1]))))));
                }
            }
        }
        var_15 = ((var_11 ? ((~(arr_2 [i_0] [i_0]))) : ((-8192 ? (arr_2 [i_0] [i_0]) : var_12))));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        var_16 = (arr_0 [i_5 + 2]);
        var_17 = (((((((min(8211, (arr_8 [1] [22] [i_5] [10])))) ? (arr_15 [i_5] [i_5 + 4]) : (arr_8 [2] [i_5] [i_5 - 1] [i_5 + 1])))) ? 58166 : var_8));
        arr_16 [i_5] = (max((((arr_2 [i_5 + 2] [i_5 - 1]) > (arr_5 [16]))), ((!(arr_5 [24])))));
    }

    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        arr_20 [i_6] = (arr_4 [i_6 - 3]);
        arr_21 [i_6] [i_6] = ((-(var_7 >= -2266)));
    }
    #pragma endscop
}
