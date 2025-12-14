/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (-((-5522151129991188554 ? (arr_4 [i_0]) : (arr_4 [i_1]))));
                var_18 = (59156 & 6024177397629333230);
            }
        }
    }
    var_19 = (min(var_19, var_15));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 ^= (~-var_6);
                                var_21 = (min(var_21, ((((((((var_8 ? (arr_9 [i_3] [i_3]) : 2147482624))) && (((var_1 ? var_6 : var_11))))) ? (max((((var_4 ^ (arr_11 [13])))), (max(0, var_16)))) : (~1))))));
                                var_22 -= (((((var_14 ? 59140 : (((!(arr_6 [i_4] [11]))))))) ? var_13 : (arr_9 [i_3] [i_5])));
                            }
                        }
                    }
                    arr_17 [i_2] [i_2] [i_2] [i_4] &= var_6;
                    var_23 = var_1;
                }
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
