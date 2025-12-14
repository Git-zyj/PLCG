/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((var_11 ? 42230 : ((65533 ? 3909308589 : (arr_3 [11] [i_0] [i_1]))))) % (((max(908, (arr_2 [i_1]))))));
                var_21 = ((!var_4) ? ((((!(arr_2 [i_0]))))) : ((1611602051 << (2683365245 - 2683365219))));
                var_22 = (max(var_22, (((-(!var_18))))));
                var_23 = (max(var_23, ((max((((arr_2 [i_0]) | 2683365245)), (min((max(var_16, 1796313307)), (max(1611602047, var_15)))))))));
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
