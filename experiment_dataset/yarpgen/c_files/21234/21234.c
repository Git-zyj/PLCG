/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((-((~(~-795769335)))));
                var_15 = (+-var_13);
                arr_6 [i_0] [i_0] [i_0] = (~-var_14);
                var_16 = (max(var_16, (+-var_13)));
            }
        }
    }
    var_17 = (~-var_5);
    #pragma endscop
}
