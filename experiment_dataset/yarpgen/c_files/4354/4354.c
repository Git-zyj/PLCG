/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(1, 1));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_15 = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0 - 1] &= var_8;
                    arr_9 [10] &= (((((min(var_10, 1)))) ? (((!(!1)))) : (arr_3 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
