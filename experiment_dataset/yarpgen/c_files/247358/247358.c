/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 *= (max(((((min(63290, -1583265251))) ? ((var_1 >> (var_7 - 36993))) : (1583265251 != -1583265244))), var_9));
                var_16 = (min(((((var_4 ? (arr_1 [i_1]) : var_5)))), (max(((14418 >> (((arr_0 [0] [0]) - 5019316405757528254)))), ((((arr_2 [i_1]) == var_1)))))));
            }
        }
    }
    var_17 = 1583265258;
    var_18 = (max(var_8, (max((240 / var_3), (var_1 - var_14)))));
    var_19 *= (!((((((~1583265244) + 2147483647)) >> (var_3 != var_8)))));
    var_20 = ((var_9 + ((min((var_8 >= 24312), ((var_0 >> (var_0 - 3447704089))))))));
    #pragma endscop
}
