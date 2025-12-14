/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = max(((((((var_13 ? (arr_3 [i_0 + 2] [i_1] [i_0 + 2]) : (arr_2 [i_0])))) > (((arr_3 [i_0] [i_0] [i_1]) ? (arr_4 [i_0]) : 1))))), (((arr_4 [i_0 + 2]) / (min((arr_4 [9]), var_13)))));
                var_20 = var_0;
                var_21 = (max(var_21, (arr_0 [0])));
                var_22 *= (min((((((9200121537809987926 ? 1 : var_16))) ? (min(var_7, 491409255)) : ((577230799 ? 107 : var_12)))), ((((var_13 ? (arr_3 [i_0] [i_0] [2]) : 3674687842203353932))))));
            }
        }
    }
    #pragma endscop
}
