/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, -var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((var_2 ? (arr_1 [i_0]) : (max(0, 124))));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = var_3;
                    var_14 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
