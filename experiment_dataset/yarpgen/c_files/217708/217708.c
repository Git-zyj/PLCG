/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] [2] = (max((min(9, 1)), var_9));
                            var_20 = ((min((min(var_13, var_11)), var_9)));
                        }
                    }
                }
                var_21 = var_17;
                arr_11 [i_0] [i_1] [i_1] = ((((max(var_5, var_11))) ? var_10 : (var_3 || var_10)));
                arr_12 [3] [i_1] [i_1] = (var_5 ? ((min((((var_5 ? var_16 : var_8))), (max(var_0, var_2))))) : (max(-10, 14194200085662942042)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            {
                arr_19 [i_4] &= max(((max(var_9, (min(var_18, var_15))))), 4294967295);
                var_22 = (((((min(var_18, var_14)))) == var_10));
                var_23 = (min(var_23, ((min(((var_11 ? var_17 : var_5)), (var_2 || var_12))))));
                var_24 = (min(var_24, ((((min(var_2, var_14)) + (max((min(var_3, var_18)), var_9)))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((min((var_14 / var_4), ((min(var_4, var_5))))))));
                            var_26 = (max((min(var_15, var_7)), ((max(var_6, var_6)))));
                            arr_26 [i_4] [i_5 - 1] [i_6] [15] [19] = (min(((var_0 ? var_5 : (min(250601343, 1)))), (((var_4 ? ((var_12 ? var_9 : var_8)) : var_10)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
