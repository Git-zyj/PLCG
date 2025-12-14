/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_4;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 ^= var_13;
                                arr_15 [9] [i_4] [i_4] [9] [i_4] [i_4] = var_11;
                                arr_16 [i_0] [15] [i_2] [i_3] [i_4] = (min(var_9, ((var_3 ? var_4 : var_1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 ^= (max((((((max(var_6, var_4))) ? -var_8 : (var_3 - var_9)))), ((((var_10 ? var_9 : var_0)) % var_8))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    arr_27 [i_6] [i_7] [i_6] [i_5] = (-((((min(var_7, var_0))) ? (max(var_2, var_1)) : var_7)));
                    arr_28 [i_5] [i_6] [i_5] |= (max(((max(var_0, var_12))), ((var_7 ? (min(var_0, var_10)) : var_3))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_36 [i_6] = var_6;
                                var_16 = (((((~((var_8 ? var_1 : var_0))))) ? -var_7 : ((max(0, 26149)))));
                                arr_37 [i_5] [i_8] [i_7] [i_6] [i_5] |= var_13;
                                var_17 -= var_0;
                            }
                        }
                    }
                    var_18 = ((((38226 ? 1 : -21236))));
                }
            }
        }
    }
    #pragma endscop
}
