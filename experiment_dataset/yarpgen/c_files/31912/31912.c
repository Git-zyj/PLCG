/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (1 || 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 -= (((((arr_12 [i_1 + 1] [i_2 + 3] [i_3 - 1]) ? (arr_7 [i_1 - 1] [i_2 + 2]) : var_11))) ? var_11 : (max((arr_6 [i_1 + 1] [i_2 + 1] [i_3 - 1]), (arr_7 [i_1 - 1] [i_2 + 3]))));
                                var_15 = (arr_7 [i_3 - 1] [i_3 - 1]);
                                var_16 = (arr_3 [i_3 + 1] [i_2 + 3] [i_1 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                arr_20 [i_6 - 1] &= (((!0) ? (arr_19 [i_6] [i_5]) : (((var_3 - (arr_15 [i_6 - 1] [i_6 - 1]))))));
                var_18 = (arr_19 [i_6 - 1] [i_5]);
                arr_21 [8] [i_6] = ((((((((arr_19 [i_6 - 1] [i_6 - 1]) + 9223372036854775807)) << (((var_10 + 2009132662) - 53))))) ? (((max(1, var_4)))) : (arr_19 [18] [i_6])));
            }
        }
    }
    #pragma endscop
}
