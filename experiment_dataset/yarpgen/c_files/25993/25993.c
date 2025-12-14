/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = ((var_8 && (((var_4 || 15107161742475387821) && (((-2147483647 - 1) || var_9))))));
    var_15 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (max(var_16, var_12));
                var_17 |= (min(6704102267942682370, ((((min((arr_2 [i_0] [i_1]), var_2))) / (3339582331234163795 % var_11)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((((((56294 ? 80 : var_9)) << (((((arr_11 [i_4 + 1] [i_3] [i_3] [i_0]) ? (arr_1 [16] [i_1]) : (arr_0 [i_3]))) - 54432))))) ? ((60370 | (arr_5 [i_2] [i_4] [i_4 - 2] [i_4 - 2]))) : ((((arr_10 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4]) << (var_1 - 94)))))))));
                                arr_12 [i_4] [i_1] |= (max((arr_9 [i_4] [i_4]), (((var_11 == 0) ? var_10 : (((~(arr_0 [i_3]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
