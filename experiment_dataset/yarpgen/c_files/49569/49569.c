/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((~(min(-1548258341, var_5))));
                    arr_8 [i_0] = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_0] [i_1] [i_1] [i_0] = (!var_18);
                                arr_14 [4] [i_3] [24] [i_1] [i_0] [i_0] = ((!(((arr_0 [i_1 + 2]) <= (arr_3 [i_0])))));
                                var_19 = ((((-27044 <= (arr_3 [i_4]))) && (!-1941443000)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_19 [19] [19] [i_2] [i_2] [i_2] = ((~((~(arr_5 [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 + 2])))));
                                var_20 = ((((((((var_8 ? (arr_12 [i_0] [i_0] [4] [i_0 - 1] [i_0]) : (arr_9 [i_5])))) ? var_10 : (arr_2 [18] [17])))) || (max(((!(arr_12 [i_0] [24] [i_2] [i_5] [10]))), (((arr_11 [i_6] [2] [2]) || 211106232532992))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_25 [i_8] [i_2] [i_1] [i_0] = (((arr_21 [i_7 - 1] [i_1] [i_2] [i_1] [i_8] [i_1 + 2]) << (!var_10)));
                                var_21 = (max((((2249142820 >= ((max((arr_16 [i_0] [i_0]), (arr_9 [i_0]))))))), (((~8877809073362494002) / 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_14;
    var_23 = (max(var_23, var_13));
    #pragma endscop
}
