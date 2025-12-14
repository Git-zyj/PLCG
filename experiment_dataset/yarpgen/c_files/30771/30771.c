/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_0] [i_0] = (((0 / var_5) ? (arr_3 [i_0] [i_1 + 1]) : ((((arr_0 [i_0 + 2]) > var_4)))));
                arr_7 [i_1] [i_0] = (min((max(var_8, var_1)), ((var_14 ^ (((arr_4 [i_0 - 2] [i_0 + 2] [i_0]) ? var_12 : (arr_4 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = ((((var_14 << var_2) ? (arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : var_13)));
                                arr_22 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] = (arr_19 [i_2] [i_5]);
                                var_18 = ((((min((arr_10 [i_2]), -2105955452))) ? (arr_8 [i_2] [i_5 - 3]) : (arr_20 [i_5] [i_5] [i_3] [i_4] [i_5 + 1] [i_6])));
                                var_19 = ((max((min((arr_19 [i_2] [i_3]), (arr_14 [i_3] [i_3] [i_3]))), var_11)));
                                arr_23 [i_6] [i_5 - 1] [i_5] [i_2] [i_2] = ((~(max(var_2, (arr_11 [i_2] [i_4 - 2] [i_5 - 3])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            arr_30 [i_2] [i_2] [i_3] [i_7] [i_8 + 1] |= var_8;
                            var_20 = (((var_2 / (arr_17 [i_3] [i_3] [i_8 + 1] [i_8]))));
                            var_21 |= var_3;
                            var_22 = (max((arr_29 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]), (arr_14 [i_2] [i_2] [i_8 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
