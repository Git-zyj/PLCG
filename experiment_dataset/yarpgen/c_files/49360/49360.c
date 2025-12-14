/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_7 ? (max(1, var_7)) : (((-1305657865 ? var_8 : var_12)))))) ? 1285941105 : (((var_12 ? (2697421213 < 1765403933) : 2285893016603683803)))));
    var_15 = ((((min((min(var_2, var_7)), var_12))) ? ((((max(-6464759304413285363, 44861))) ? var_3 : ((var_6 ? var_6 : 3117758801)))) : (!var_6)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 -= (max((!546868600562108035), 1777533226));
                var_17 += (((arr_3 [i_0 + 2] [16] [1]) / 113));
            }
        }
    }
    var_18 = (max((~var_9), var_4));
    #pragma endscop
}
