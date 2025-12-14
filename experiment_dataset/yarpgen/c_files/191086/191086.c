/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min(var_11, 2291412191)), var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = arr_6 [i_1] [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 *= 70;
                                var_16 = 80;
                                var_17 -= -37407;
                                var_18 = ((((!(arr_0 [14] [i_1]))) ? ((((!(arr_4 [i_1 + 1]))))) : ((((arr_4 [i_0]) ? var_12 : (arr_13 [i_0]))))));
                                var_19 = ((var_1 >= ((var_12 ? var_0 : (0 + var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = var_9;
    #pragma endscop
}
