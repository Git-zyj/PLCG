/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (arr_1 [i_0]);
                    var_15 = ((-(arr_1 [i_2])));
                }
            }
        }
    }
    var_16 = var_12;
    #pragma endscop
}
