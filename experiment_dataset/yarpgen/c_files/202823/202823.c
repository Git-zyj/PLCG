/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((var_10 ? (((!var_10) ? ((var_5 ? var_14 : var_14)) : var_10)) : -var_14));
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((max((((arr_4 [i_1 + 1]) ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 - 3]))), 15945)))));
                arr_6 [i_1] = ((((~(arr_5 [i_0] [i_1 - 1]))) | (arr_5 [i_0] [i_1 - 3])));
            }
        }
    }
    var_21 = (!var_5);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] = (arr_5 [i_3] [i_3]);
                var_22 = (~var_6);
            }
        }
    }
    #pragma endscop
}
