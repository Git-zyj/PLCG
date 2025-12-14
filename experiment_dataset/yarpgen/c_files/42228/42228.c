/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = var_0;
                                var_17 = (max(var_17, ((min(var_2, (max(var_0, var_6)))))));
                                var_18 -= (((((111 ? var_6 : var_11))) ? (~var_6) : ((((max(-1, var_8))) ? 61 : 176))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = min(var_7, ((0 ? -49 : var_13)));
                                var_20 = (min(((max((min(24, 176)), 86))), var_11));
                            }
                        }
                    }
                    var_21 = var_4;
                }
            }
        }
    }
    var_22 = (min(var_22, var_12));
    #pragma endscop
}
