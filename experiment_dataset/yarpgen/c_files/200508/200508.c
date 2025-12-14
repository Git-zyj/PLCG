/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_9 ? (((((var_9 ? var_0 : var_4))) ? var_0 : (var_3 == var_7))) : -var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (((arr_2 [i_1]) + 221));
                    arr_8 [i_0] [i_0] |= (((((-(((arr_5 [i_2] [i_1 + 1] [i_0] [i_0]) ? var_0 : 1238377632))))) ? var_4 : ((((((arr_3 [i_0] [i_1 + 1]) ? (arr_5 [i_2] [i_1] [i_1] [i_2]) : -1377857181))) ? (arr_4 [1] [i_1 - 1] [i_1 + 1]) : (((34 / (arr_1 [i_2]))))))));
                    var_12 = (!0);
                }
            }
        }
    }
    var_13 = (((((590206702 ? (!107) : ((var_0 ? var_5 : var_9))))) ? (((~var_0) ? ((max(var_3, var_8))) : (var_1 || 223))) : var_4));
    var_14 = 524287;
    #pragma endscop
}
