/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_17 += var_14;
                arr_6 [1] [i_1] = (!var_7);
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 = (((!var_10) < (((arr_7 [i_2]) & var_0))));
        arr_9 [i_2] = 1563593297;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] [i_3] &= max((((arr_3 [i_3]) ? -var_7 : ((var_11 ? (arr_5 [10] [i_3] [i_3]) : (arr_10 [i_3]))))), ((~(((arr_3 [i_3]) ? var_16 : (arr_10 [i_3]))))));
        var_19 = (min(var_19, ((~((-(arr_11 [i_3])))))));
    }
    #pragma endscop
}
