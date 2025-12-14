/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_2] [i_0] = (max((((((var_9 ? (arr_3 [i_3] [i_3] [4]) : (arr_11 [i_4] [5] [i_4] [13] [i_4] [i_4] [i_4]))) <= (var_8 | var_5)))), var_8));
                                arr_15 [i_2] [i_2] = (((((min(var_9, (arr_5 [i_0] [i_2] [i_2]))) ? (var_12 && var_1) : (65521 || var_8)))));
                                arr_16 [5] [i_2] [i_2] = (min(((((max((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] [i_0]), var_6))) ? ((159 ? var_7 : var_4)) : (1 >= 184))), var_3));
                                var_15 = (max(var_15, (((-((+(((arr_10 [i_3] [i_1] [i_1] [i_0]) + var_4)))))))));
                            }
                        }
                    }
                    arr_17 [6] [i_1] [1] [i_2] = ((((var_7 ? ((max(var_1, var_12))) : var_9)) <= (arr_5 [i_0] [i_2] [i_2])));
                }
            }
        }
    }
    var_16 = var_5;
    var_17 = ((var_7 != (!var_7)));
    #pragma endscop
}
