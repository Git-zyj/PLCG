/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [6] [i_2] [i_2] = ((~((+(((arr_6 [i_0] [i_2] [i_1] [i_2]) & 1))))));
                    arr_9 [i_2] = 17754;
                    arr_10 [i_0] [12] [16] [i_2] &= (arr_6 [12] [1] [i_2] [i_1]);
                }
            }
        }
    }
    var_18 = max(-1430, (min(-1444, 1)));
    #pragma endscop
}
