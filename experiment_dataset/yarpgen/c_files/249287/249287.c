/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (!-var_11)));
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [2] [2] |= (arr_2 [i_0] [12]);
                arr_6 [i_1] = -10;
                var_15 = min(((~(arr_0 [i_0]))), ((12874261234794217985 ? 2624645445634139114 : (15822098628075412490 - 6732532547073107221))));
            }
        }
    }
    #pragma endscop
}
