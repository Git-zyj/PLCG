/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (arr_1 [i_1 - 2]);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 |= 4294967295;
                    var_22 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    var_23 = 91;
                    var_24 = 1;
                }
            }
        }
    }
    var_25 = var_16;
    var_26 *= var_5;
    #pragma endscop
}
