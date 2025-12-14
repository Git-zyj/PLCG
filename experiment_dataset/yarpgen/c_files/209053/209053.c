/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = ((-((var_13 ? var_6 : 3620487824))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 ^= ((max((arr_2 [i_1] [10] [10]), ((192 ? -7155 : 2147483640)))));
                var_23 = 2147483640;
                var_24 = ((((((-2147483640 ? 6828403207453715248 : 34))) ? (((-74 ? (arr_0 [i_0]) : 210))) : (min(var_19, 2147483636)))));
            }
        }
    }
    var_25 ^= (((var_11 ? (min(var_17, var_1) : ((max(-2147483642, 30325)))))));
    #pragma endscop
}
