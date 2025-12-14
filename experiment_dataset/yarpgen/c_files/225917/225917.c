/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(var_9 - var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = (min(((min((arr_7 [i_0] [i_0] [i_0]), 0))), -5490329062522897441));
                                arr_15 [i_0] [i_1] [1] [i_0] [1] = var_3;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((((((arr_11 [i_0] [i_0] [i_0] [i_3]) ? 3937169585457012878 : (arr_12 [i_0] [i_1] [i_0] [i_3] [i_0])))) ? var_2 : (arr_11 [i_0] [i_1] [i_2 - 1] [i_2 - 2]))), (((arr_6 [i_0] [i_2] [i_3]) ? ((-(arr_10 [i_0] [i_0]))) : (var_9 > var_8)))));
                            }
                        }
                    }
                }
                var_11 = ((var_3 ? var_1 : (1023238961040038330 != 1)));
            }
        }
    }
    #pragma endscop
}
