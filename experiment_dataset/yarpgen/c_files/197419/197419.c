/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-970176289, (max(((max(-1, var_15))), (max(14302901545632748537, var_11))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 - 1] = ((((!((min(-1, (arr_0 [15]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_0] = ((min(((~(arr_6 [i_0] [13] [i_2]))), (min((arr_6 [i_0] [i_0] [i_0 - 1]), (arr_5 [i_0 - 1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((-(max(var_6, var_8))))));
                                arr_15 [15] [15] [15] [i_2] = ((-((-(~var_6)))));
                                arr_16 [i_4] [i_4] [i_2] = ((~(min((max(var_15, (arr_7 [i_0 - 1] [i_1]))), (arr_12 [0])))));
                                arr_17 [4] [i_0] [i_1] [i_2] [i_2] [12] = (max((min((max(1, var_12)), ((min((arr_7 [i_1] [6]), -28))))), (min(((max(var_11, -1))), (arr_14 [i_4] [i_2] [i_1] [i_0])))));
                            }
                        }
                    }
                    var_22 = var_5;
                }
            }
        }
        var_23 = (min(var_23, (min(((min((arr_4 [i_0 - 2]), var_9))), (min((max(var_9, var_6)), (arr_7 [i_0] [i_0])))))));
    }
    var_24 = (!-var_11);
    #pragma endscop
}
