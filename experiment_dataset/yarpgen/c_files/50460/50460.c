/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (max((((1 ? (arr_1 [i_0] [i_0]) : (min(16, (arr_3 [i_0] [i_0])))))), var_13));
                var_20 = (min((((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0 - 1] [i_1 + 1]))), (((var_8 ? -454400622 : -29541)))));
                var_21 = ((-67553994410557440 + (arr_0 [i_1 - 2])));
                var_22 = (!-454400631);
                var_23 = (min(-454400622, ((var_11 ? (max((arr_4 [i_0] [i_0 - 1]), 208)) : -1805194334))));
            }
        }
    }
    var_24 = (!var_1);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_25 = var_11;
                var_26 = (min((min(var_15, (arr_2 [i_3] [i_3] [1]))), ((max(169, (~454400616))))));
            }
        }
    }
    #pragma endscop
}
