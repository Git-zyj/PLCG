/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_1 - 1] [i_2] &= (min((arr_0 [i_2]), var_8));
                    arr_9 [i_1] [i_1] [i_1] [19] = (((((!((max(var_3, var_5)))))) << (-var_8 + 5380279520638157952)));
                }
            }
        }
    }
    #pragma endscop
}
