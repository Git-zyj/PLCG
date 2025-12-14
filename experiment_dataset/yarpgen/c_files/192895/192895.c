/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = 14305035742502383584;
                    var_11 += 14305035742502383584;
                    arr_7 [i_1] [i_1] [i_0] = 4141708331207168032;
                }
            }
        }
    }
    var_12 = var_0;
    #pragma endscop
}
