/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 - 1] [i_2 - 1] = -7645538936703429808;
                    arr_9 [i_2] = 2075619008575852360;
                    var_18 = (arr_4 [i_2 + 2] [i_1 - 2] [0]);
                    arr_10 [i_2 - 1] [i_2] [i_0] = var_8;
                }
            }
        }
    }
    var_19 = -24018;
    #pragma endscop
}
