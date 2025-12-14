/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204712
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
                var_17 = (~var_0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = ((((min(-229, -var_0))) ? ((((max((arr_10 [i_2]), (arr_6 [i_0] [i_1] [i_3] [i_4])))) ? 58 : (((38071 ? (arr_10 [i_2]) : var_9))))) : (arr_10 [i_2])));
                                var_19 = (((!var_2) ? ((min((arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4]), 1393))) : (!25)));
                                var_20 = ((20417 ? (arr_10 [i_2]) : -var_15));
                            }
                        }
                    }
                }
                var_21 |= ((+(((arr_1 [i_1] [i_1]) ? ((0 ? 3370362481 : (-127 - 1))) : (((min(var_2, (arr_3 [i_0])))))))));
            }
        }
    }
    var_22 = (min((min(((max(-70, var_2))), var_11)), (((-var_8 ? ((var_3 ? -60 : var_16)) : (!9223372036854775807))))));
    #pragma endscop
}
