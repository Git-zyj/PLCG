/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = var_12;
                var_17 = (min(var_17, ((min(296641101, -69)))));
                var_18 = ((((((((var_6 ? var_13 : var_7))) ? (max(var_2, var_15)) : ((var_8 ? var_7 : var_12))))) ? var_7 : ((((min(var_9, var_7))) ? ((var_0 ? var_3 : var_14)) : (((var_1 ? var_7 : var_7)))))));
                var_19 = ((min(33553920, (var_13 >= var_3))));
            }
        }
    }
    var_20 = (~11);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_21 = (((~(var_8 ^ var_6))));
                                var_22 = ((!(((((max(var_1, var_10))) ? var_14 : (((var_0 ? var_15 : var_10))))))));
                            }
                        }
                    }
                }
                var_23 ^= ((~(((var_13 ? var_4 : var_9)))));
                arr_20 [i_2] |= (((var_6 && var_9) ? ((var_9 ? var_11 : var_2)) : (((var_14 ? ((var_9 ? var_1 : var_10)) : (~var_10))))));
            }
        }
    }
    var_24 = ((!((max(var_2, var_3)))));
    #pragma endscop
}
