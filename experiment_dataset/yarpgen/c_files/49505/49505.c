/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min(((var_10 ? var_16 : 65535)), var_15)), ((max(var_9, var_14)))));
    var_21 = var_3;
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_23 = (arr_2 [i_0 - 1]);
                var_24 = (max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 2]), 116));
                var_25 = (((((var_11 ^ (arr_3 [13] [1] [i_0 + 1])))) ? (arr_3 [i_1] [i_1] [i_0 - 2]) : ((max((arr_3 [i_0] [21] [i_0 + 1]), 10974)))));
            }
        }
    }
    #pragma endscop
}
