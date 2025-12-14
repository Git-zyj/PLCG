/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = 793695432;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [1] = (!1305657984);
                    arr_7 [i_1] [i_1 - 1] [12] [6] = (!-1305657968);
                    arr_8 [i_1] [i_2] [8] [i_2] = -14572915597048787659;
                    arr_9 [i_1] [i_1] [i_1] = (((!3873828476660763960) ? 14572915597048787656 : 5289238363711098232));
                }
            }
        }
    }
    #pragma endscop
}
