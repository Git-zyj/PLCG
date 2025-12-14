/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (((((arr_2 [10]) ^ 1))) ? (arr_3 [i_0] [i_1]) : ((min(var_7, 0))));
                var_16 *= ((5723907343879881301 ? (((arr_3 [i_1 - 1] [i_1 - 2]) ^ 60000)) : (((arr_3 [i_0] [i_0]) ? ((max(1, 38511))) : ((var_5 ? (arr_2 [12]) : (arr_3 [i_0] [i_1])))))));
            }
        }
    }
    var_17 *= var_9;
    var_18 = ((min(var_9, var_4)));
    #pragma endscop
}
