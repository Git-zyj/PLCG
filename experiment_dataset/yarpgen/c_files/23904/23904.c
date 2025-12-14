/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((((((max((arr_4 [i_0] [i_0] [i_0]), 1))) && (((~(arr_4 [i_0] [i_0] [i_0])))))) ? (arr_4 [i_1] [i_0] [i_1 + 1]) : (~28317)));
                var_14 = (((37219 - (!-8745673459441748292))));
            }
        }
    }
    var_15 = (min(var_15, ((max((var_6 / 2259138973), var_7)))));
    var_16 = (min(var_16, (max((max((((var_5 ? var_11 : 28311))), var_12)), var_3))));
    var_17 = (((var_4 ? 1 : var_10)));
    #pragma endscop
}
