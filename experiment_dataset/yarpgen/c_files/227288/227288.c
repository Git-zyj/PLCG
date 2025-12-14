/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 ^ ((max(var_9, (max(var_12, var_12)))))));
    var_16 = (max(var_16, var_3));
    var_17 = 15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (~8);
                arr_6 [i_0] = ((((max((arr_3 [22] [i_1] [i_1]), ((var_6 ? var_8 : var_6))))) ? (((20047 & 12) ? 15 : ((var_12 ? 1719188146 : (arr_0 [10]))))) : 60490));
                var_19 = 29;
                arr_7 [i_0] [i_0] [i_0] = ((var_0 ? ((var_2 - (min((arr_1 [i_0]), var_8)))) : (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
