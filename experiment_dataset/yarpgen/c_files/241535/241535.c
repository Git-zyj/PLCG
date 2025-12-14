/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (max((min(var_0, (arr_0 [i_0 - 3] [1]))), (arr_0 [i_0 - 1] [i_0])));
                                var_17 += 127;
                                var_18 += ((var_6 & ((min((~140), (~var_1))))));
                                var_19 = (min((((-796360601 < 46) ? ((-(arr_7 [i_4] [i_0] [i_0 - 2]))) : ((min(var_13, var_9))))), (arr_9 [i_2])));
                                arr_15 [i_0 - 3] [i_1] [i_1] [i_0] [i_4 - 2] = 9223372036854775807;
                            }
                        }
                    }
                }
                var_20 = (max(var_20, 4255971980405281098));
            }
        }
    }
    var_21 |= ((~(((~var_10) ? 1 : var_8))));
    var_22 = ((1 ? (((min(13430, 125)))) : ((((min(var_9, 1))) ? var_6 : (var_10 < var_9)))));
    var_23 += ((0 >> (255 - 232)));
    #pragma endscop
}
