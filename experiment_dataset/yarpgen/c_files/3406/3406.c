/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3406
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
                var_12 = var_3;
                var_13 = 703872962;
            }
        }
    }
    var_14 += max(((min(var_4, var_9))), (((var_9 != var_1) * (min(var_7, var_0)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_9 [i_3] [i_3] [7] = var_6;
                arr_10 [i_3] = var_6;
                arr_11 [1] [i_3] [1] = ((var_1 ? ((0 ? var_2 : var_3)) : (arr_3 [i_3 - 1] [i_3] [i_2])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 += (max(var_2, ((-8571140034147741350 | (arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                            var_16 = ((max(var_4, ((max((arr_13 [i_3 - 1] [i_3]), var_2))))));
                            arr_16 [i_3] [i_3] = (min((((var_10 * var_1) ? var_2 : (arr_2 [i_2]))), (var_6 && var_1)));
                        }
                    }
                }
                arr_17 [i_3] = max(2997230771, ((((arr_7 [i_3 - 1] [i_3 - 1]) ? (1 * -24633) : 1))));
            }
        }
    }
    #pragma endscop
}
