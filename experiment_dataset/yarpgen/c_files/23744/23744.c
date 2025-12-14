/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (~1)));
                    var_20 = (max(var_20, (((((((88338558 ? 45482 : 518124997)))) ? ((var_0 ? var_10 : var_13)) : -var_5)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 ^= (!-var_7);
                                var_22 ^= (((((var_17 ? var_15 : var_4))) ? ((var_15 ? var_16 : var_13)) : (((var_2 ? var_17 : var_0)))));
                                var_23 += (((((var_3 ? var_2 : var_6))) ? var_1 : ((-(!var_12)))));
                                var_24 -= var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] &= var_18;
                                var_25 ^= (((!var_18) ? var_9 : ((var_10 ? var_8 : var_6))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [i_1] |= (((((var_10 ? var_15 : var_8))) ? (((~var_7) ? ((var_13 ? var_4 : var_16)) : (((12435105576100680990 ? 2147483633 : -31450))))) : (!var_3)));
                }
            }
        }
    }
    var_26 = (min(var_26, (((((((((var_17 ? var_17 : var_4))) ? (((var_13 ? var_6 : var_3))) : ((var_15 ? var_16 : var_5))))) ? (((((var_16 ? var_16 : var_0))) ? ((var_17 ? var_8 : var_15)) : ((var_15 ? var_5 : var_3)))) : var_8)))));
    var_27 = (min(var_27, (((var_9 ? var_16 : (((((var_4 ? var_15 : var_5))))))))));
    var_28 -= (((((var_11 ? var_14 : (~518124997)))) ? (~var_0) : (((((var_13 ? var_16 : var_16))) ? (((var_13 ? var_5 : var_7))) : ((4494 ? 15508456407894031015 : 2293746537))))));
    #pragma endscop
}
