/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((-(arr_6 [i_1])));
                var_14 = (max(var_2, (max(((((arr_4 [2]) - -16320))), (arr_3 [i_0] [i_0 + 2] [i_0])))));
                arr_7 [i_1] = -16320;
            }
        }
    }
    var_15 = var_3;
    var_16 = (!var_11);
    #pragma endscop
}
