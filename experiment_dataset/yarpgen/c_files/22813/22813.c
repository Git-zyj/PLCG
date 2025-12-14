/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 ^= (var_4 ? (((((var_10 ? var_0 : var_8))))) : var_13);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 &= ((((-(var_10 + var_9))) - ((((var_0 & var_5) ? var_11 : var_0)))));
        arr_3 [i_0] [i_0] = (min((max(var_1, (min(1, -11)))), var_4));
        arr_4 [i_0] = var_11;
        arr_5 [i_0] = (!(((var_13 ? var_13 : var_3))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 11;i_3 += 1)
            {
                {
                    var_18 = 1229099457;
                    var_19 += (((max(125, 2047))));
                    var_20 += ((((max(var_9, ((var_7 ? var_11 : var_6))))) ? -var_12 : var_6));
                    var_21 = (((var_13 & var_4) ? -11 : (((min(var_3, var_0))))));
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {
        arr_16 [i_4] = (((((var_0 ? var_9 : var_14))) || (((~(max(var_6, var_4)))))));
        var_22 ^= var_10;
        arr_17 [i_4] &= var_0;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_23 *= (((((var_14 ? var_7 : var_8))) ? var_14 : var_6));
                                var_24 = ((var_6 ? (max(var_3, var_10)) : (((max(134, 5368))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((-var_12 ? (~var_1) : ((var_1 ? ((var_2 ? var_14 : var_3)) : var_5)))))));
                                arr_36 [i_10] [i_5] [i_6] [i_5] [i_4] = min(var_4, var_11);
                                var_26 -= -var_12;
                            }
                        }
                    }
                }
            }
        }
        var_27 = ((!((max(((var_9 ? var_2 : var_5)), (~var_14))))));
    }
    #pragma endscop
}
