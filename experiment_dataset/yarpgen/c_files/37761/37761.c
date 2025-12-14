/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (((arr_3 [i_2] [9]) ^ ((var_9 ? -5269041086709697467 : (arr_9 [i_2] [i_1])))));
                            var_14 *= (((max((arr_3 [i_0] [i_0]), var_3))) ? (max((arr_2 [i_1] [14] [i_1]), ((min((arr_5 [i_2 + 2] [i_2 + 2] [i_0 - 2]), 0))))) : ((max(5269041086709697443, 116))));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_0 - 2] [i_0 - 2] = 2;
                                arr_15 [i_1] &= (~1967074853156376510);
                                var_15 -= (-1 + 1183283220);
                                arr_16 [8] [2] [i_2] [i_3] [i_1] [i_0] [i_0] &= (((((35 ? (arr_13 [i_0] [i_2] [i_1] [10] [i_4 + 1] [18]) : 1))) && 16777216));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_1] = var_4;
            }
        }
    }
    var_16 = (~3111684077);
    #pragma endscop
}
