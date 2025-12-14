/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 13714644623009447318;
    var_18 -= var_8;
    var_19 ^= ((((min(709450637, (max(1799777912, -26662))))) ? ((((min(10695836563448597618, 1))) ? var_4 : (max(7750907510260953987, 427303054)))) : ((var_9 ? (var_5 - 7750907510260953985) : ((874898087905992155 ? var_6 : var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 -= (((((arr_4 [i_1] [i_1] [i_0]) ? 1 : 1)) * ((((var_7 || 7750907510260953977) && var_0)))));
                arr_5 [i_0] = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_21 -= (min(10695836563448597612, (arr_0 [i_1])));
                            var_22 = ((((max((~10695836563448597642), ((7750907510260953988 ? 1 : 103661610043946362))))) ? (max(7750907510260953944, var_6)) : (arr_4 [i_0] [i_1] [i_3])));
                            var_23 = (((((((95 != 82) > var_16)))) & (((arr_1 [i_0]) ? -10010 : (min(150, (arr_4 [i_0] [5] [i_2])))))));
                        }
                    }
                }
                var_24 = var_4;
                var_25 |= ((var_13 ? -4997159187647326931 : (~var_1)));
            }
        }
    }
    #pragma endscop
}
