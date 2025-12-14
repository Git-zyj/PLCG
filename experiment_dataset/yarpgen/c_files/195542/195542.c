/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_0] [i_0]);
                var_16 = min((arr_4 [i_1]), ((235 ? 0 : 61516)));
                var_17 = var_3;
                var_18 = (max((arr_1 [i_0] [15]), (((!(arr_4 [i_1]))))));
            }
        }
    }
    var_19 = ((var_14 || (!var_9)));
    var_20 = 27;
    #pragma endscop
}
