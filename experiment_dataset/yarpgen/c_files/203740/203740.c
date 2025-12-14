/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [1] [5] = (((max(20754, 1))));
                arr_7 [4] [4] [i_1] = (arr_1 [i_1]);
                var_10 = ((1 ? (!var_2) : (var_6 == var_3)));
            }
        }
    }
    var_11 = (var_6 ? ((max(var_8, var_4))) : (((-((max((-127 - 1), 1)))))));
    var_12 = (min((((max(var_9, var_2)) + -var_5)), (((~(~1))))));
    var_13 = var_4;
    var_14 = -var_7;
    #pragma endscop
}
