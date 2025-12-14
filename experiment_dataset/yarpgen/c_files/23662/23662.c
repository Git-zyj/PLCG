/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (((((max((arr_2 [i_0]), var_8)) > (((var_2 ? (arr_5 [i_0]) : (arr_4 [i_0] [i_1] [i_1])))))) ? ((1 ? 17981331669252890881 : 1362617077)) : (((1 * ((var_3 ? var_7 : (arr_5 [i_0]))))))));
                var_12 = var_6;
                arr_7 [i_0] [3] [i_0] = (((((max(var_4, var_6))) & (arr_4 [i_1] [i_1] [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_13 -= (((var_0 * (var_6 < var_6))));
                var_14 = ((1 ? (min(var_10, ((var_0 | (arr_12 [i_3] [7] [i_2]))))) : (((~((var_10 << (var_8 - 3788636121))))))));
                var_15 = var_5;
            }
        }
    }
    var_16 = var_0;
    var_17 = ((var_9 ? (((!((min(var_6, var_1)))))) : ((var_8 ? var_5 : var_3))));
    #pragma endscop
}
