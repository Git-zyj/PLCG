/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((((var_1 ? var_13 : var_15))) ? (((var_12 ? var_14 : var_17))) : (((((var_1 ? var_11 : var_4))) ? var_12 : var_7)))))));
                            var_21 = (((((var_8 ? var_14 : var_3))) ? ((var_15 ? var_10 : var_5)) : var_7));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [17] = var_6;
                            arr_17 [i_0] [i_0] [i_4] [16] [14] = (((((var_9 ? var_1 : var_6))) ? var_13 : (((((var_16 ? var_7 : var_6))) ? ((var_1 ? var_14 : var_3)) : var_0))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
