/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [17] [i_1] [10] = var_2;
                    arr_10 [i_1] [i_0] [i_2] [i_1] = (max((max(var_3, var_11)), (~16322)));
                }
            }
        }
    }
    var_12 = var_8;
    var_13 ^= (((!var_9) ? (min((62 * 1), ((var_3 ? var_7 : var_5)))) : ((((min(76, -1))) ? ((var_10 ? var_0 : var_7)) : var_5))));
    var_14 = (33213 >= -62);
    #pragma endscop
}
