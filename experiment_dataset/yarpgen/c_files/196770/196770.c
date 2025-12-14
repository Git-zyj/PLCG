/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = (max(1, 1190711282));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 = min((max((arr_12 [i_3]), ((min(var_2, var_7))))), (arr_4 [i_2]));
                            var_22 = (max(var_22, ((min(var_14, (max(var_3, (max((arr_2 [i_0]), (arr_13 [i_0] [i_0] [i_2] [i_0]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_23 = (max(var_23, var_1));
                            var_24 = var_15;

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_25 = (max(var_25, var_7));
                                arr_21 [i_4] [24] [8] [i_4] [i_1] [8] |= arr_6 [i_0];
                            }
                            var_26 = var_15;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                {
                    arr_29 [i_9] [i_9] [i_9] = (arr_13 [i_7] [i_8] [i_7] [21]);
                    arr_30 [i_9] [i_8 + 2] [i_8] [i_9] = var_15;
                }
            }
        }
    }
    var_27 = (min(var_7, var_14));
    #pragma endscop
}
