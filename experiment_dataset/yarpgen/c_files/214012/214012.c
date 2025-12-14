/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(55, -55))) ? ((((!(18446744073709551615 - var_3))))) : (min(((var_10 ? var_0 : var_1)), (((var_7 ? 46 : -65)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (!-106)));
                                arr_15 [i_0] [i_1 - 1] [i_2] [i_3] = (-127 - 1);
                                var_21 = var_9;
                                arr_16 [10] [10] = (-84 ? (min((arr_6 [0] [i_1] [i_2] [i_3]), var_4)) : ((max((arr_0 [i_0]), (33 & 93)))));
                                var_22 = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 = (~var_18);
                                var_24 = 7285812587271621751;
                                arr_21 [i_6] = (((((arr_18 [i_1] [i_6 - 1]) ? -64 : -65))) ? -105 : (max(var_17, (arr_18 [i_5 - 1] [i_6 + 1]))));
                                var_25 = (max(var_25, (arr_12 [i_1 + 2])));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (((((-(18446744073709551615 && 77)))) ? (!95) : (max(((105 & (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (~69)))));
    }
    #pragma endscop
}
