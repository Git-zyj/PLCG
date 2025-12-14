/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 += -669485978;
                var_14 = (max(var_14, var_9));
                var_15 = (((((arr_2 [i_0] [i_0]) ? var_11 : (arr_1 [i_0] [i_1]))) / ((max(17024, (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [17] = (1 / 1);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [i_3] [i_3] [i_3] [18] [i_3] [i_3] = (((arr_15 [i_2 + 1] [i_2] [i_3] [i_2] [i_2] [1]) - (-1 != var_6)));
                                var_16 ^= (min((arr_18 [i_2] [i_3] [i_4] [i_6]), (var_6 > 28)));
                            }
                        }
                    }
                    var_17 = (((((-1 ? var_1 : var_1)))) | (1 != 549755813887));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_25 [i_8] [i_3] [i_3] [i_3] [i_2 + 2] = ((((((((arr_20 [i_3] [i_3]) % (arr_11 [i_3] [i_3] [8]))) != -1))) > var_11));
                                var_18 = ((((arr_22 [i_8] [i_7 - 1] [i_4] [i_3]) >= var_7)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_5;
    var_20 = var_0;
    #pragma endscop
}
