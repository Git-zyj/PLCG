/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_1 - 1] [i_0] = (arr_5 [i_0] [i_3] [i_2] [i_0]);
                            var_14 = (min((max((((arr_9 [i_0] [i_1] [i_2] [i_0] [i_0] [i_3]) ? (arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]) : (arr_5 [i_3] [i_2] [i_1] [i_0]))), ((min((arr_7 [i_0] [i_1] [i_2] [i_0]), (arr_2 [i_0] [i_2])))))), (((arr_7 [i_0] [i_1 + 1] [i_3] [i_3]) ? (arr_7 [i_3] [i_2] [i_1 - 1] [i_0]) : (arr_7 [i_0] [i_1] [i_0] [i_1])))));
                            arr_11 [i_0] = (max(((((arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1]) ? (arr_7 [i_0] [i_0] [i_2] [i_3]) : (arr_5 [i_1 - 1] [i_1] [i_1] [i_3])))), (arr_5 [i_0] [i_1] [i_0] [i_3])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_23 [i_6 + 2] [i_5] [i_4] [i_0] [i_0] = (arr_2 [i_6 + 3] [i_1 + 2]);
                                var_15 = (max((arr_15 [i_4] [i_5] [i_6 - 2]), (arr_16 [i_4] [i_1])));
                            }
                        }
                    }
                }
                var_16 = (arr_6 [i_0] [i_0] [i_1 + 1] [i_1]);
                var_17 -= (min(((((!(arr_22 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 2] [i_1] [i_1]))) ? ((((arr_14 [i_0] [i_1] [i_1 + 2]) ? (arr_8 [i_0] [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_1]) : (arr_9 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])))) : (arr_0 [i_0]))), (((-188 ? (arr_14 [i_0] [i_0] [i_1 + 2]) : ((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 + 1]))))))));
            }
        }
    }
    var_18 += ((((((var_5 ? var_7 : var_9)) ? (max(var_12, var_9)) : var_4))));
    var_19 &= (~var_12);
    #pragma endscop
}
