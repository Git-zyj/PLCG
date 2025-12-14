/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (min(((var_4 << ((var_10 ? var_1 : var_0)))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = ((((((1 && 34900) ? (arr_0 [1]) : 0))) ? (((min((arr_1 [i_3 + 1] [i_3 - 1]), (arr_1 [i_3 + 3] [i_3 - 1]))))) : (((arr_4 [i_0]) ? (((-(arr_6 [i_0] [i_0] [i_0] [16])))) : ((1 ? (arr_8 [7] [7] [i_0]) : var_11))))));
                            arr_12 [i_0] [i_0] [i_3 + 1] = 819097085;
                        }
                    }
                }
                var_15 = ((9223372036854775807 << (819097061 - 819097061)));
            }
        }
    }
    #pragma endscop
}
