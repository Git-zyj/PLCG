/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (((((var_5 ? var_5 : var_1))) || (((var_2 ? var_16 : var_1)))));
                arr_5 [i_0] [i_0 - 2] [i_0] = ((((min(var_4, ((var_15 ? var_9 : var_12))))) ? (((((var_5 << (var_6 - 162)))) ? -0 : ((var_3 ? var_5 : var_13)))) : ((max(((var_11 ? var_3 : var_15)), (((var_13 ? var_4 : var_4))))))));
                var_18 = ((min(var_8, (var_5 || var_9))));
            }
        }
    }
    var_19 = var_16;
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_21 = (((var_4 | var_11) ? ((var_6 ? var_6 : var_2)) : (~var_2)));
                                var_22 = var_11;
                                var_23 = (63443 || 0);
                            }
                        }
                    }
                    var_24 -= (((((((min(0, 777558114))) ? ((0 ? 133693440 : 18446744073709551615)) : (((var_12 ? var_15 : var_1)))))) ? (min(var_16, var_5)) : ((max((~var_10), (var_4 & var_2))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_24 [i_2] [i_2] [i_3] = (!var_12);
                        var_25 = (var_15 + var_6);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_26 = ((var_6 ? var_4 : var_12));
                        var_27 |= var_0;
                    }
                }
            }
        }
    }
    var_28 = ((min(var_6, ((var_8 ? var_4 : var_1)))));
    #pragma endscop
}
