/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = ((var_11 ? var_9 : -var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((!26240) ? var_15 : var_15));
                    var_21 = ((32767 / ((-(min(39, 11894188071814710826))))));
                    var_22 = (min(((((((arr_3 [i_0] [i_2] [i_2]) >> (39285 - 39279)))) ? (arr_5 [i_2] [i_1 - 3] [i_1 - 3] [i_0]) : (arr_1 [i_1 - 1]))), (((var_6 ? var_4 : (arr_4 [i_0] [i_1 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
