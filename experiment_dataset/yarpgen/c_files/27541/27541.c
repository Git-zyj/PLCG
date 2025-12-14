/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((~(((!2016682842) ? ((var_10 ? var_7 : var_4)) : (~1))))))));
    var_15 = (max((((var_11 + var_3) ? var_4 : ((1950848619 ? var_12 : var_9)))), (((~(~60))))));
    var_16 = ((+((var_11 << (((-13404 + 13428) - 15))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = 6136;
                                arr_11 [i_4] [i_3] [i_4] [6] [6] &= ((~((((max(var_10, var_13))) ? ((197 ? 669980189598514995 : var_8)) : var_5))));
                            }
                        }
                    }
                    arr_12 [i_1] [i_0] [i_1] [i_2] = (((((1 == var_1) ? (-236229712 + 8532) : var_2)) ^ (max(var_1, (max(var_2, -8532))))));
                }
            }
        }
    }
    #pragma endscop
}
