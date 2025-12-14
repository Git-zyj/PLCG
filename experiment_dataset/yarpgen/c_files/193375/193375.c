/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_2 <= ((((var_3 || -24310) ? (24306 / var_16) : (9258654 && 9258655))))));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (min(((((min(9258636, 2))) && ((((arr_2 [i_0 + 1]) / (arr_0 [i_0 - 2])))))), (((5749608607269733255 & var_0) && -8647766137914568480))));
                var_20 = (((min(var_9, (arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
