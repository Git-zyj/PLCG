/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!-4466501459737108252) < (max((~-1), var_9))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] = var_10;
                                var_14 = (min(var_14, (((-((((min(var_8, var_9))) ? ((3546922887566520088 << (628978699 - 628978657))) : ((var_6 ? 1269772818 : var_7)))))))));
                            }
                        }
                    }
                }
                var_15 = ((((max((25443 != 13159), 221))) ? 910185371452928122 : 92));
                var_16 = ((((~var_5) | var_8)));
            }
        }
    }
    #pragma endscop
}
