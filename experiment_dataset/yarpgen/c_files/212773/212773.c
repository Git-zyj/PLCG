/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [5] [5] [i_0] = var_4;
                    var_12 -= var_0;
                    arr_8 [i_0] = 7603472936609748583;
                    arr_9 [i_0 + 2] [i_0] [i_2] [i_2] = 12;
                }
            }
        }
    }
    var_13 |= var_6;
    #pragma endscop
}
