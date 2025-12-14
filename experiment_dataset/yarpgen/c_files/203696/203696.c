/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((var_0 ? var_9 : var_4))) ? var_4 : ((var_5 ? var_6 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_3] [i_3] = (!var_1);
                            var_14 = ((((((var_11 ? var_2 : var_2))) ? (min((-9223372036854775807 - 1), 21429)) : var_4)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_15 += ((((((((var_9 ? var_2 : var_9))) ? ((var_5 ? var_8 : var_1)) : var_8))) ? ((max(var_8, var_7))) : ((((var_12 ? var_0 : var_9))))));
                                var_16 = (min(var_16, var_6));
                                var_17 = (max((max(var_11, var_8)), (max(var_0, var_7))));
                                arr_20 [i_5] [6] [i_4] [i_1] [i_5] = (!var_1);
                                arr_21 [i_5] [19] [13] [i_5] [i_5] = (((((var_6 ? ((min(var_6, var_5))) : (min(var_3, var_9))))) ? (((!var_2) ? (((max(var_5, var_9)))) : (min(var_5, var_7)))) : ((max(var_4, ((var_3 ? var_1 : var_5)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
