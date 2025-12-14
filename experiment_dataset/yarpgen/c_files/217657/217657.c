/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((var_11 >> (((arr_5 [i_0]) - 1774928533)))))));
                arr_7 [i_0] [i_0] [i_0] = 115;
            }
        }
    }
    var_15 += 4294967287;
    #pragma endscop
}
