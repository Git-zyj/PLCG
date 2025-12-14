/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 -= (((!2032) ? -0 : (max(-3977832908064436619, (~255)))));
                    var_17 *= ((((((9223372036854775807 ? 0 : -8))) * (var_9 / var_14))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_18 *= (61537425 >= 75);
                                var_19 = (((((1 / (1308956465 < 1615421514331910603)))) && ((max(2240079676456015367, ((1615421514331910603 ? 16206664397253536240 : var_7)))))));
                                arr_14 [i_1] = ((((((((max(35390, 3)))) >= (min(1930574702314319243, -1615421514331910604))))) >= ((-(var_14 && var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((!-1615421514331910603) && (((3216978994710523861 ? ((1615421514331910614 ? -1 : -4)) : ((0 ? 1975820248 : 1615421514331910614)))))));
    #pragma endscop
}
