/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_2 ? ((-9436 ? 1 : 1)) : ((max(var_8, 1)))))) ? var_11 : ((~((var_11 ? var_5 : var_7))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = var_15;
        var_18 &= (max((4068190402 + 9852), ((-((var_1 ? 8496988915847151416 : var_7))))));
    }
    var_19 = ((var_2 ? (((((1 ? var_11 : 6))) ? var_9 : 48)) : ((min(var_14, var_9)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            {
                var_20 = (min(1, 18446744073709551600));
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_14 [i_5] [i_4] [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_1] = (min((min(-10, -620194604)), ((max(var_4, var_14)))));
                                arr_15 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] = (((((min(var_13, var_6))) ? 53 : (min(17817, var_5)))));
                                arr_16 [i_2] [i_2] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
