/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 ^= (((((10196 ? 42231 : 5496949683357255261))) ? ((30 ? 127 : 23302)) : ((9223372036854775807 ? 42243 : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 -= (((((0 ? 103 : 23303))) ? (((62 ? 43 : 0))) : ((-3 ? 11534099215731170004 : 2835144543))));
                                var_18 += (13450604840361530293 ? 2575718617 : 4294967295);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_19 ^= ((28672 ? ((1073739776 ? 4557956012381583895 : 11534099215731170004)) : (((15453 ? 0 : 42245)))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] &= ((30029 ? 4 : (((-3926 ? 36856 : 91)))));
                        var_20 = (max(var_20, 706278950));
                        var_21 ^= -6;
                    }
                }
            }
        }
    }
    var_22 += var_14;
    #pragma endscop
}
