/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_18 || var_2);
    var_21 = var_7;
    var_22 = (((min(var_5, var_15)) + var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_23 = (max((arr_1 [i_0] [18]), var_7));
                var_24 = (max((min((arr_1 [i_1] [i_0]), (2644599199 + var_2))), (max(((var_10 ? (arr_1 [i_0] [5]) : (arr_2 [i_0]))), ((max((arr_2 [i_0]), var_4)))))));
            }
        }
    }
    #pragma endscop
}
