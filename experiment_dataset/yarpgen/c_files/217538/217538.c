/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~6676879001503123125);
    var_18 = var_9;
    var_19 = ((((max(var_11, var_13))) ? (11769865072206428494 + -339334202220824244) : (((((!11769865072206428494) || (var_3 + var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_20 += 13;
                arr_5 [i_0] = (max(((((arr_2 [i_0]) || (arr_2 [i_0])))), var_2));
            }
        }
    }
    #pragma endscop
}
