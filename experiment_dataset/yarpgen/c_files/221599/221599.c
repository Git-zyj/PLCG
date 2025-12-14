/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= min(1151795604700004352, 123);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 ^= (max(var_1, ((min(var_5, var_3)))));
                    arr_9 [i_1] [12] [i_2] &= (min(var_13, (max(var_4, ((max(var_4, var_5)))))));
                }
            }
        }
    }
    var_17 = ((-(((!((min(var_0, var_12))))))));
    var_18 = (max(((max(var_11, var_0))), var_10));
    #pragma endscop
}
