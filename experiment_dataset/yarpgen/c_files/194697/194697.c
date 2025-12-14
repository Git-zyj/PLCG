/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(1, 5152439448395168292)));
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (((1 >> (var_2 + 19621))));
                    arr_10 [i_1] [i_1] [i_1] [i_2] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
