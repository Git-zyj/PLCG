/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_19 += ((min((((arr_4 [i_0] [i_0] [i_1]) ^ var_9)), ((max(var_15, var_14))))));
                var_20 &= arr_0 [8];
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                {
                    arr_13 [i_4 - 4] [i_3] [i_2] = var_14;
                    var_21 *= (min(var_9, (arr_9 [i_2 + 1])));
                }
            }
        }
    }
    var_22 &= var_10;
    #pragma endscop
}
