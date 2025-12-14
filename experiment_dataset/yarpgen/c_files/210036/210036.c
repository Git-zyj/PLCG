/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 &= ((((((arr_7 [i_2 + 3] [i_1] [i_1] [i_1]) ? var_4 : (((-9223372036854775807 - 1) / var_11))))) ? ((max(var_8, var_12))) : (!-401962053076882671)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_4] = (max(var_11, ((~(arr_12 [i_1] [4] [i_4] [i_4])))));
                                var_17 = var_13;
                                arr_15 [i_4] = ((((!(arr_13 [i_2] [i_1] [i_4] [i_4 - 1] [i_3] [i_4 - 1]))) ? (arr_0 [i_0]) : ((((arr_6 [i_1] [i_4]) && (((0 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : 0))))))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_2] = (max((((!((max(-9223372036854775804, (arr_1 [i_1] [8]))))))), -6507584324850559174));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = 1040187392;
                                arr_23 [i_0] [i_2] [i_5] [i_5] [i_6 - 2] [i_1] [12] = ((!((max((arr_13 [i_0] [i_1] [i_1] [i_2 + 1] [i_5] [i_6 - 2]), 65535)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(((((max(var_2, var_4))) ? 32767 : (max(249, -9223372036854775801)))), var_6));
    #pragma endscop
}
