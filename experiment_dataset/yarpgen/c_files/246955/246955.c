/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_3 >> (((~var_1) - 6233412944998527188))));
    var_19 &= ((var_5 != ((var_2 ? var_16 : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1] = (((((!5104967485537958574) ? 0 : 1))) ? ((((max(12, 1))) ? var_2 : 1)) : (~1));
                var_20 = (min((arr_3 [i_0]), -512191320));
            }
        }
    }
    #pragma endscop
}
