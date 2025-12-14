/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1946034536 & (((2348932760 ^ 2348932760) ^ 2348932759))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = 12845677853781730254;
                    arr_8 [i_1] [i_2] = -6087634198690924381;
                }
            }
        }
    }
    var_21 = (min(var_21, 23));
    #pragma endscop
}
