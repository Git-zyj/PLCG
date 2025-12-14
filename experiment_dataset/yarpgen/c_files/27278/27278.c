/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((var_2 ? (((var_7 ? (min(var_4, var_1)) : (!var_3)))) : var_10));
                var_11 = (min(-var_9, ((~(!var_7)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 ^= (min(((var_4 ? var_7 : var_2)), (min(var_2, var_10))));
                                arr_14 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] = (~var_6);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [i_1] [i_1] [i_6] [i_1] = ((~((~(!var_10)))));
                            var_13 = ((!((min(var_2, var_3)))));
                            var_14 = (min((((var_6 ? var_6 : var_10))), (min(var_3, var_2))));
                            arr_20 [i_0] [i_6] [i_0] [i_0] [i_0] = ((((min(var_9, (max(var_6, var_9))))) ? (((-((min(var_0, var_0)))))) : (((((var_10 ? var_2 : var_7))) ? ((var_4 ? var_2 : var_5)) : (((var_9 ? var_4 : var_10)))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((((var_9 ? var_3 : var_4)))) ? (~var_8) : (min((((var_9 ? var_5 : var_10))), (max(var_2, var_3))))));
    var_16 = var_7;
    #pragma endscop
}
