/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (arr_4 [i_0 + 2] [i_0 + 2] [i_0]);
                var_11 = ((-(arr_0 [i_0 + 3] [i_0 + 2])));
            }
        }
    }
    var_12 = var_6;
    #pragma endscop
}
