/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((((((var_10 ? var_9 : var_0)))) ? (((var_3 ? (arr_1 [i_1 - 2]) : var_7))) : (((-2147483647 - 1) ? -14662 : (-2147483647 - 1))))))));
                var_12 = -1159764986;
            }
        }
    }
    var_13 = (max(var_13, (((((((var_4 + 9223372036854775807) >> ((((min(65535, 109))) - 87))))) ? var_1 : -103)))));
    var_14 = ((var_0 | (min((max(-733344261, -71)), (733344260 >= -733344237)))));
    #pragma endscop
}
