/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 += ((var_1 ? (((var_18 ? var_14 : var_19))) : var_17));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 *= (max(var_14, (((var_19 ? var_6 : (arr_1 [i_0]))))));
        arr_3 [i_0] = (min((((arr_0 [i_0] [i_0]) ? var_12 : (arr_0 [i_0] [i_0]))), ((var_7 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_23 = (min(var_23, (((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? ((var_15 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_24 = (((arr_0 [i_1 - 1] [i_1 - 1]) ? (((2667633483 ? 32767 : 8129435335593064545))) : (arr_4 [i_1 - 2])));
        var_25 = (max(var_25, (arr_2 [i_1 - 1])));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_1] [i_2] [i_2] = (arr_4 [i_1 + 1]);
            arr_9 [i_1 + 2] [i_2] [i_2] = arr_5 [i_2];
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_26 = ((2307951130 ? 2667633468 : 65535));
                        var_27 *= (((((var_9 ? (arr_5 [3]) : var_19))) ? var_4 : (arr_5 [1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
