/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [1] [i_2] [1] = ((arr_4 [i_3]) ? (arr_2 [i_0 - 3]) : var_4);
                            var_11 &= var_7;
                            var_12 = (arr_4 [7]);
                        }
                    }
                }
                arr_14 [i_1] = var_8;
                arr_15 [5] = (max((((arr_1 [i_0 - 1] [i_0 - 4]) ? (arr_1 [i_0 - 4] [i_0 + 1]) : 1020)), 71));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                arr_21 [i_5] |= (min((arr_4 [i_4]), (max((((arr_20 [i_4]) ? (arr_10 [i_4] [i_5] [i_4] [i_5] [i_4] [i_5]) : 4095798293566311103)), ((max(var_1, var_5)))))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_31 [i_8] [i_8] [7] [i_8] [i_8] [2] = max((max((arr_16 [i_6 + 1]), (arr_25 [8] [i_4] [i_4] [i_4] [i_6 + 1] [i_7]))), (((arr_25 [i_5] [6] [i_5] [i_6 + 3] [i_6 + 1] [i_7]) ? 1035 : (arr_16 [i_6 + 3]))));
                                arr_32 [i_8] [1] [1] [i_5] [i_8] = (arr_10 [i_8] [5] [5] [i_4] [i_7] [i_8]);
                            }
                        }
                    }
                }
                var_13 -= (max((((arr_16 [i_5]) ? (((arr_2 [1]) ? var_4 : (arr_4 [i_5]))) : (arr_2 [i_5]))), (((((35 == (arr_25 [i_4] [11] [1] [11] [9] [2]))) ? (((506693386 && (arr_16 [i_4])))) : var_9)))));
            }
        }
    }
    var_14 &= (((((((max(var_8, var_0))) ? (((3745394057 ? 0 : 225))) : (max(var_0, var_7))))) ? 384 : var_1));
    #pragma endscop
}
