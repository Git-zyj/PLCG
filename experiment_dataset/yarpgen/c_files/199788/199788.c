/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((((((!(arr_4 [i_2 + 1] [i_2 + 1] [i_2] [i_2]))))) == ((-(arr_4 [i_2 + 2] [i_2 + 1] [i_2] [i_2])))));
                    var_16 ^= arr_1 [i_0 + 1];
                }
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
