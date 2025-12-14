/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-894008477 ? 18165987718888227219 : 6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 &= -1801791453;
                var_14 = ((56630 ? 1 : 18372));
                var_15 = (max(var_15, (((((max(-89, ((1 ? var_5 : var_11))))) ? (((((arr_0 [i_0 - 1] [i_1]) || (arr_0 [i_0 - 1] [i_0]))))) : (min(8, 18)))))));
                var_16 = -1;
            }
        }
    }
    #pragma endscop
}
