/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1730722129;
    var_13 = 31;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_3 - 1] = 1730722129;
                                arr_15 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = 1;
                                arr_16 [i_0] [6] [8] [6] [i_0] = ((min(-82, -109)));
                                var_14 = 1;
                            }
                        }
                    }
                }
                arr_17 [i_0] = -109;
                arr_18 [i_0] [i_0] = (((((1 ? 93 : 127))) & (min(1, -1616816521492188945))));
                arr_19 [i_0] [i_0] = 1;
            }
        }
    }
    var_15 = 607563803491306265;
    #pragma endscop
}
