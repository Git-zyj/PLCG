/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_9, (~var_16)));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min((((max(-23220, 127)) << (10221636874291618536 - 10221636874291618515))), (-2147483647 - 1)));
                var_21 = (max((((arr_0 [i_1]) + (((arr_0 [i_0]) ? -2147483640 : var_9)))), ((min((!10021620046830777893), (~var_11))))));
                arr_6 [i_0] = min((((arr_5 [i_0] [i_1] [i_1]) >> (((arr_5 [i_0] [i_0] [i_1]) - 31564)))), 1);
                var_22 = (min((((((max((arr_2 [i_0]), 1))) << (var_15 - 14179)))), (min(var_0, var_12))));
                arr_7 [i_0] = (((((var_14 ? (arr_1 [i_1]) : (arr_1 [i_0])))) ? (((((min((arr_4 [i_1]), (arr_2 [i_0]))))) / 3590359107)) : (arr_5 [i_1] [1] [i_0])));
            }
        }
    }
    #pragma endscop
}
