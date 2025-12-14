/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((min(var_17, (~var_17))) & ((min(255, var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = min(242, (((-2147483647 - 1) | (arr_2 [i_0 - 2] [i_0 + 1] [i_0 + 2]))));
                var_20 = (((144 / 1923551277) ? (((arr_0 [i_0 - 2]) / (arr_0 [i_0 - 3]))) : (((arr_0 [i_0 - 4]) / (arr_0 [i_0 - 1])))));
                var_21 = (max(var_21, (((2147479552 - 12) ? (((((((arr_3 [i_1] [i_0]) ? -1792125218 : var_12))) && (arr_0 [i_1])))) : (arr_0 [i_0])))));
                arr_4 [i_0] = var_4;
                var_22 = (max(var_22, (arr_1 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {
                arr_9 [i_3] = min((((((var_9 * (arr_5 [i_2])))) ? (arr_8 [i_3 - 1] [i_3 - 1]) : (((arr_7 [i_2] [i_3]) ? 0 : 2)))), (((arr_6 [i_2] [i_2]) | (arr_7 [i_2] [i_3]))));
                var_23 = max((((arr_5 [i_2]) & (((arr_6 [i_2] [i_3]) ? (arr_5 [7]) : (arr_8 [i_2] [i_2]))))), ((~((min((arr_6 [i_2] [i_3]), 30))))));
            }
        }
    }
    #pragma endscop
}
