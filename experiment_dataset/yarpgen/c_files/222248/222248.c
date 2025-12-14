/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = var_16;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_22 = (min(var_22, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = -9223372036854775807;
        var_23 = -9223372036854775807;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_7 [i_0]);
                    var_24 = -35;
                }
            }
        }
    }
    #pragma endscop
}
