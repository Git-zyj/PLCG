/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((var_1 ? var_3 : (arr_0 [5])))) ? (arr_1 [i_0]) : ((7712200547781957042 ? var_8 : 14))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_16 = var_3;
                        arr_14 [i_2 + 2] [i_2] = (((49190 / 13) ? ((((arr_4 [i_2 - 1]) ? 9 : (arr_12 [i_2])))) : ((~(arr_4 [i_2 + 1])))));
                        arr_15 [9] [i_3] [i_2] = 59663;
                    }
                }
            }
        }
        var_17 |= (max(((((((var_13 ? (arr_5 [6]) : (-32767 - 1)))) ? var_8 : (max((arr_4 [i_1]), 245))))), (max((((arr_9 [16] [i_1]) * (arr_9 [0] [0]))), (((var_3 ? var_4 : var_6)))))));
    }
    var_18 &= ((((max(var_14, ((var_9 ? 14 : 247))))) == -7001101523205813406));
    var_19 &= var_0;
    var_20 = var_9;
    var_21 = var_7;
    #pragma endscop
}
