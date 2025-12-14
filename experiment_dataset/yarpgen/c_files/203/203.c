/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0 - 1] [i_1] = 6273849246614236533;
                arr_6 [i_0] = ((-((+(max((arr_1 [i_1 - 2]), (arr_2 [i_0] [16] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
