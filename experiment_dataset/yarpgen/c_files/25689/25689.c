/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((arr_2 [i_0] [i_1 + 2] [i_2 + 2]) > (~20697))))));
                    arr_9 [i_0] [10] [i_2] [i_1 + 1] = ((((((arr_3 [i_2] [i_2] [i_2 + 1]) ? (arr_8 [i_1 + 3]) : 0))) ? ((((var_5 ? var_8 : (arr_1 [i_2 - 1]))) & (arr_6 [i_2] [i_1 - 1] [i_1 + 2] [i_2]))) : var_6));
                    arr_10 [i_2] [i_1] [i_1] = (arr_6 [i_2] [i_1 + 2] [i_1 - 1] [i_2]);
                    var_17 &= ((var_9 ? ((((((2073 ? (arr_6 [i_0] [i_1 + 4] [i_1 + 4] [10]) : var_5))) <= var_10))) : 0));
                }
            }
        }
    }
    var_18 = (max(var_18, (((var_15 ? var_2 : (var_13 * var_4))))));
    var_19 += -var_14;
    #pragma endscop
}
