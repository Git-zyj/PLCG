/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((var_9 ? ((-1256809567 ? -1256809562 : var_0)) : var_13))));
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((max(((~(max((arr_2 [i_1]), var_7)))), var_11)))));
                var_18 = -7276027017426227079;
            }
        }
    }
    #pragma endscop
}
