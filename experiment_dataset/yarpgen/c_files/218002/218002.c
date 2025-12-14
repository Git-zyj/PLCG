/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = var_2;
                    var_16 = (min((((!-3300797744750489111) << ((((arr_3 [6] [i_1]) || 3300797744750489110))))), 25365));
                    arr_8 [14] [i_1] [14] [i_2] &= (((((((((arr_5 [i_0]) * (arr_7 [7] [2] [19] [i_1])))) ? 89 : -var_1))) ? (min(((((arr_5 [8]) ? (arr_3 [i_0] [i_1]) : var_6))), (~var_12))) : ((((min(3300797744750489122, 153)) + (((-81 ? (arr_2 [3] [i_1] [i_1]) : (arr_6 [13] [i_2] [10] [i_2 + 1])))))))));
                    arr_9 [i_1] [i_1] [0] [i_2 + 1] = var_10;
                }
            }
        }
    }
    var_17 = ((var_4 ? var_14 : var_8));
    #pragma endscop
}
