/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = 1;
                arr_5 [i_0] = (((1 / 1) ? (min(((((arr_2 [i_0]) / 29))), 9223372036854775807)) : (~-var_5)));
                var_12 -= (min((var_0 <= var_6), var_4));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] = min((((max(var_2, 18446744073709551600)) > (arr_10 [i_3 + 1]))), (arr_14 [i_2] [14] [i_2] [i_5 - 1]));
                            var_13 = (min(var_13, ((((arr_12 [i_2] [i_3] [23]) & (max((arr_15 [i_3 + 2] [i_3 + 2] [i_3 - 1]), (min((arr_11 [i_2] [i_5]), var_7)))))))));
                            var_14 = (max(var_14, ((max((((((arr_15 [1] [i_3] [i_4]) + (arr_14 [1] [i_3 + 2] [i_4] [i_5]))) * (((!(arr_12 [i_5 - 1] [i_4] [i_2])))))), (~var_6))))));
                        }
                    }
                }
                var_15 = var_0;
                var_16 = 243;
                var_17 = ((((max((1 > var_2), (((arr_15 [1] [1] [1]) ? 232 : var_6))))) <= (min((min(15, (arr_12 [i_3] [i_3] [i_2]))), var_2))));
            }
        }
    }
    #pragma endscop
}
