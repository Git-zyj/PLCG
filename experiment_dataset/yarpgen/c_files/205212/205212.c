/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (arr_7 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = ((0 ? -28759 : 1049383146));
                                var_21 &= var_2;
                                arr_17 [i_0] [i_1 - 3] [i_1 + 1] [i_1] [15] [i_3] = (+(max((arr_8 [i_0]), -8365099567634037271)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_9, var_10));
    var_23 += var_3;
    var_24 = ((((((var_5 || var_14) ? (28758 && 3245584161) : 54623))) ? (0 && 581638715667133086) : 6455231163474895243));
    #pragma endscop
}
