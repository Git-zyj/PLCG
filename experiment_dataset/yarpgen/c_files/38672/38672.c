/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_12, ((101 ? var_11 : -var_18))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((21 | (((~var_9) ? 4294967275 : (arr_1 [i_2 - 2])))));
                    arr_10 [i_1] [i_1] [i_1] = (((min(1769757326, var_8)) * (arr_9 [i_2 - 3] [i_0] [6] [i_1])));
                    var_21 = (max((arr_6 [i_2 + 2] [i_2 - 2]), (arr_7 [i_2 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
