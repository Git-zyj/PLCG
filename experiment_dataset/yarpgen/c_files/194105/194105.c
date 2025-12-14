/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = 2147483647;
                    arr_11 [i_1] [i_1] [i_1] = 18446744073709551615;
                }
            }
        }
    }
    #pragma endscop
}
