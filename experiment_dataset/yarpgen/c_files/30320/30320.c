/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((((var_1 - var_10) ? var_3 : ((165 ? var_11 : var_4))))) ? (var_13 - 1789548485) : (max((84 + 180), var_2))));
    var_19 += (1 ? -1920393909 : ((max(202, 9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = 1;
                    arr_9 [i_1] [i_1] = (arr_0 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
