/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (~var_6)));
    var_21 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((((max(var_0, -1647426275289919614)))) != (max(9566789052487093311, (~-2)))))));
                    arr_8 [i_0] [i_0] [i_2 + 2] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
