/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_3 ? var_3 : var_1)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = ((((max(284220429, 0))) ? ((var_13 ? var_5 : var_15)) : var_15));
                    var_17 = ((!(((~((var_8 ? var_0 : var_1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_0] [i_0 + 2] = (max(87, -624827007));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] = ((max(var_5, ((var_0 ? var_6 : var_12)))));
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] = var_7;
                                var_18 -= (max((((var_1 ? ((var_0 ? var_0 : var_2)) : var_10))), (max(var_11, var_12))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                var_20 = (max(((var_13 ? var_1 : var_9)), (!-624827035)));

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_21 = (max(((max(var_13, var_0))), (max(15640696236398291279, 624827006))));
                    var_22 ^= var_10;
                }
            }
        }
    }
    #pragma endscop
}
