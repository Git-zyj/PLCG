/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_10 / var_0) ? (~var_4) : var_6));
    var_12 = (1 | var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [9] [5] [i_1] [i_3] [9] = (((((arr_5 [i_1] [i_1 - 2] [i_2]) ? var_0 : (arr_5 [i_1] [i_1 - 2] [i_2]))) / ((var_10 ? (arr_5 [i_1] [i_1 - 2] [i_2]) : (arr_5 [i_1] [i_1 - 2] [i_2])))));
                                var_13 = (arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_0]);
                                var_14 += ((((55560 * (arr_6 [i_1] [i_1] [i_1 - 1] [i_1])))) ? ((4095 ? 0 : 1)) : ((max((arr_3 [i_0] [i_0]), (arr_3 [i_1] [i_1])))));
                                arr_15 [i_1] [i_1] [i_2] [i_4] [i_4] [i_4] = var_5;
                            }
                        }
                    }
                    arr_16 [i_1] [1] [1] = (((!(var_5 >> 0))) ? 1 : 1);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 = var_10;
                                var_16 = (min(var_16, ((max((((!(arr_13 [i_0])))), (arr_13 [i_0]))))));
                                arr_23 [2] [6] [i_1] [i_2] [7] = (((arr_0 [i_0] [i_1]) ? ((13408 ? 1674933030971652207 : 80)) : (((arr_11 [i_0] [i_1] [i_1] [i_5] [i_5 - 2] [i_1] [i_6]) ? var_0 : var_10))));
                                var_17 ^= var_0;
                            }
                        }
                    }
                    arr_24 [i_1] [i_1] [i_2] [6] = (min(2568249688518537867, (((!((max(var_2, 3681261595))))))));
                }
            }
        }
    }
    #pragma endscop
}
