/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = (~var_12);
                    arr_9 [i_2] = (!(((min(var_2, var_2)))));
                    arr_10 [i_1] [i_2] [i_0] = ((~(!-var_14)));
                    arr_11 [i_0] [i_1] [i_2] = var_13;
                }
            }
        }
    }
    var_16 = -var_3;
    #pragma endscop
}
