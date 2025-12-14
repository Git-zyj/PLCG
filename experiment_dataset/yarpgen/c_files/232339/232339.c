/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((-115 ? var_8 : -26330335))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 |= (min(-58, var_8));
                    arr_9 [i_0] [i_2] = ((-((((min(var_3, -8506241926331765942))) ? (((-115 ? var_4 : var_2))) : (((arr_0 [i_0] [i_1]) >> (var_2 - 141)))))));
                    arr_10 [i_2] [3] [3] = (((58 | var_0) ? (arr_3 [i_2]) : (((arr_8 [i_0] [i_0] [i_1 + 4] [i_2]) ? ((var_3 << (((arr_4 [i_1]) + 94)))) : ((126 >> (arr_1 [i_0] [i_0])))))));
                }
            }
        }
    }
    var_12 = var_8;
    var_13 = (~var_0);
    #pragma endscop
}
