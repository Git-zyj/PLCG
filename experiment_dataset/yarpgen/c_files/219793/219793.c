/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? var_0 : (((!(var_1 + var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((((((arr_3 [i_0 - 1]) / var_9))) ? ((-((var_3 ? var_5 : var_4)))) : (var_6 || var_7)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 += ((var_10 ? ((var_3 & (max((arr_7 [i_4 - 1] [i_1] [8] [i_3]), var_10)))) : ((((var_8 <= (((((arr_10 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0]) || var_10))))))))));
                                var_14 = (max(var_14, (arr_7 [i_0 + 3] [i_0] [i_0] [i_0 - 1])));
                            }
                        }
                    }
                    arr_13 [i_0] [18] [i_2] = ((var_8 || (arr_2 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
