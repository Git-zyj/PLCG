/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = ((1672 || ((max(63864, 1676)))));
    var_19 = ((var_6 ? (~var_16) : ((((max(13978, 0))) * var_9))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 ^= 0;
                    var_22 ^= 32767;
                    var_23 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
