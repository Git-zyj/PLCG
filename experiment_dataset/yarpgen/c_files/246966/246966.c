/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (max((((var_6 & 54) ? var_6 : (149 != 6596096429898536984))), var_9));
    var_13 = ((106 ? 146 : 124));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((arr_1 [i_0 - 1] [i_0 + 1]) == ((((((arr_3 [i_1] [i_0]) ? (arr_4 [4] [1]) : (arr_1 [i_1] [i_0 - 1])))) ? (~var_2) : 149)));
                var_15 += (arr_4 [4] [i_1]);
                var_16 = (max(var_16, ((-(((((arr_4 [i_0] [5]) ? 140 : 57906)) >> (140 - 118)))))));
            }
        }
    }
    #pragma endscop
}
