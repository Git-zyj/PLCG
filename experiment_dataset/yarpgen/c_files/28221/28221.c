/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 &= 68719468544;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 |= ((var_2 ? 17155 : ((~(arr_1 [i_0] [i_1])))));
                    var_13 = 4872;
                    var_14 = 68719468544;
                    arr_8 [23] [i_1] [23] [1] &= (max((arr_6 [i_0] [i_0]), ((~((~(arr_2 [i_0])))))));
                }
            }
        }
    }
    var_15 = (((max(var_7, 1))));

    /* vectorizable */
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        arr_11 [i_3 + 1] = (((arr_4 [i_3 - 3] [i_3 - 3] [i_3 - 2]) ? (~-7) : (arr_9 [i_3 - 2])));
        var_16 = arr_4 [i_3 + 1] [9] [i_3];
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    {
                        var_17 = arr_1 [i_4] [i_6 + 1];
                        arr_20 [i_3] [i_4] [i_3] [i_5] |= -var_7;
                    }
                }
            }
        }
        var_18 = (((((0 ? var_3 : 68719468570))) ? (((-7 ? (arr_10 [i_3 + 2]) : var_5))) : var_1));
        var_19 = 7;
    }
    #pragma endscop
}
