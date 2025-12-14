/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((((min(96, var_7))) >= (32505 || 2047)))), (max(var_8, ((88 ? var_9 : var_5))))));
    var_11 = ((-((((17280136189518248362 >= 87) >= ((var_8 ? -739795316475256910 : 739795316475256927)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_2] [i_2] [i_3] [i_2] [i_3] [i_4] = var_1;
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] = ((((((arr_2 [i_2 - 1]) >= (arr_8 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_3] [i_3])))) >= (((arr_2 [i_2 + 1]) ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 + 1])))));
                                var_12 = (((max(((var_9 ? (arr_7 [i_1] [i_2] [8] [22]) : (arr_6 [i_3] [i_3] [i_3] [i_3]))), (((arr_6 [i_3] [i_1] [i_2] [i_1]) * -27848))))) ? var_2 : (arr_9 [i_4] [i_3] [i_2 - 1] [i_0] [i_0]));
                            }
                        }
                    }
                }
                arr_13 [i_1] [19] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
