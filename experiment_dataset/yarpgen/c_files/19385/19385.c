/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 *= (((!-2844) % (max(((((arr_8 [3] [i_1] [i_2]) && var_6))), var_2))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (((-(arr_2 [i_0 - 1] [i_1 + 1]))));
                }
            }
        }
        arr_10 [6] [6] |= ((~(max(var_5, var_1))));
    }
    var_16 += (((((~(~19925)))) / (((max(var_4, var_2)) ^ (~var_4)))));
    var_17 = var_13;
    var_18 = (max(var_18, var_6));
    #pragma endscop
}
