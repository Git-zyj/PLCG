/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_12));
                var_16 = (max((((arr_0 [i_0]) ? (arr_0 [i_1]) : var_10)), (max(var_14, (arr_0 [i_0])))));
                var_17 *= var_11;
            }
        }
    }
    var_18 = (((max(((var_0 ? var_7 : 0)), -var_0)) & var_1));
    #pragma endscop
}
