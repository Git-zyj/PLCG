/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((((max((arr_1 [i_0 - 1]), (var_13 > 255)))) ? (max(var_4, (((arr_3 [i_1] [i_1]) - var_2)))) : (((((((var_13 ? var_7 : var_6))) && ((max(var_3, 18781)))))))));
                arr_4 [i_1] [i_1] = ((-(((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : var_5))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = (max((arr_3 [i_0 - 1] [i_0 - 1]), 52));
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_2] [i_3] = (min(4294967295, 2097024));
                        }
                    }
                }
            }
        }
    }
    var_18 = -var_1;
    var_19 = (max(((var_13 ? ((var_5 ? -18781 : var_5)) : (-32327 + var_3))), var_4));
    var_20 = var_6;
    #pragma endscop
}
