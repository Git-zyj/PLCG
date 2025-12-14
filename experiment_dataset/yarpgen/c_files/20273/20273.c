/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = var_9;
                    var_10 = (min((((arr_0 [i_2 - 1]) ? (arr_0 [i_2 - 1]) : 127)), (arr_0 [i_2 + 2])));
                }
            }
        }
    }
    var_11 = min(((var_3 ? var_2 : ((var_4 ? 331343893554889448 : var_7)))), var_5);
    #pragma endscop
}
