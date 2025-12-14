/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = max(var_1, (!var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 -= ((-((((max(56505, (arr_5 [i_0])))) / var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_4] = (max((arr_9 [i_2 + 1] [i_2 + 1] [i_4 - 2] [i_3]), (max((arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]), var_2))));
                                var_12 = (((((((arr_11 [i_4] [i_4] [i_3] [i_4] [i_4] [i_0]) ? 56505 : (arr_0 [i_0]))) != (arr_11 [i_2 + 2] [i_4] [i_2] [i_4] [i_4] [i_4 - 2]))) ? var_8 : (((((var_9 ? (arr_8 [i_0] [i_1]) : (arr_7 [i_0])))) ? (((!(arr_1 [i_2])))) : ((44 ? var_6 : (arr_6 [i_0] [i_0] [i_1] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
        var_13 += (arr_7 [i_0]);
        var_14 = (((arr_10 [i_0] [16] [i_0]) ? -var_3 : (((arr_11 [i_0] [10] [i_0] [i_0] [i_0] [i_0]) ? var_2 : (arr_10 [i_0] [20] [i_0])))));
        var_15 -= ((~((-19327 ? ((44689 ? 255 : var_1)) : (((arr_0 [i_0]) << (((arr_6 [i_0] [i_0] [i_0] [i_0]) + 139))))))));
    }
    #pragma endscop
}
