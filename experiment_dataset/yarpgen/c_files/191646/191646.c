/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? var_2 : ((min(26657, -14888)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((max((26678 * -4), 0)))));
                var_13 = ((((-119 != (arr_4 [i_0 + 3] [i_1 + 3] [i_1 + 3]))) ? (arr_0 [i_0 + 1]) : (min(((min((arr_0 [i_0 + 2]), 63))), (arr_4 [i_0] [i_1 + 1] [12])))));
            }
        }
    }
    var_14 = -20434;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                var_15 = ((((var_4 ? (arr_3 [i_3 + 1] [i_2] [i_3 + 1]) : (((-422885605 ? var_3 : var_6)))))) ? ((-(arr_1 [i_3 + 1] [i_3]))) : var_5);
                var_16 = (min(var_16, -var_2));
                var_17 = (max(var_17, var_10));
                var_18 = ((((((arr_8 [i_2] [i_3 - 1]) < (arr_0 [i_2])))) <= (min((arr_8 [i_2] [i_3 + 1]), (arr_0 [i_2])))));
                var_19 = (arr_6 [i_3]);
            }
        }
    }
    var_20 = (min(var_20, var_9));
    #pragma endscop
}
