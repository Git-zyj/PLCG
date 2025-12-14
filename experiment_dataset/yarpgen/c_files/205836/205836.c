/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((!-3226846114323167191) | (-1132628878 && 10593971673274076564)));
                    arr_11 [i_1] = (!7852772400435475052);
                }
            }
        }
    }
    #pragma endscop
}
