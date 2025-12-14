/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max(var_14, (((max(var_7, 0)) ? ((var_9 ? var_13 : 1)) : 0))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_17 -= var_10;
        arr_3 [5] &= (max(var_10, ((((22 ? -27722 : -27722)) - (arr_2 [i_0] [i_0 - 3])))));
        var_18 = (max(((((max(-1, 32756))) ? (arr_0 [i_0 - 1]) : var_6)), 27709));
        var_19 += (max((((1 ? ((max(var_10, (arr_1 [i_0] [i_0 - 3])))) : (((arr_1 [i_0] [i_0 - 3]) ? -27722 : (arr_2 [i_0] [i_0])))))), (max(4224186361, ((var_3 ? 1392230357 : (arr_1 [i_0] [i_0])))))));
        var_20 -= (max((max(var_10, 1)), (max((max((arr_2 [i_0] [i_0]), 1)), (arr_0 [i_0 - 3])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_21 += (((arr_4 [i_2]) ? var_7 : (250 + var_9)));
                        var_22 = var_4;
                        arr_15 [i_3] = ((~(arr_12 [i_2 - 1] [i_3 - 1] [i_3] [i_3])));
                        var_23 = (arr_12 [i_3] [i_3 - 2] [i_3 - 2] [i_2 - 1]);
                    }
                }
            }
        }
        arr_16 [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] = (arr_7 [i_5] [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_6] [i_6] [i_7] = (((arr_14 [i_5] [i_6] [i_6] [i_7] [i_7]) & ((-((0 ? 4875906861937356233 : 1))))));
                    var_24 *= (max(((((max(var_10, (arr_5 [i_5] [i_7])))) ? ((max(1, var_15))) : var_2)), (((!(29407 ^ -19684))))));
                }
            }
        }
        var_25 = (((((((((arr_4 [i_5]) + 11724620364347751887))) ? -27722 : ((4294967295 + (arr_17 [i_5])))))) ? ((-(arr_5 [i_5] [i_5]))) : var_3));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = (max(((max((arr_27 [i_8]), var_2))), (((max(16777504164265611702, 0)) + ((((!(arr_8 [i_8] [i_8] [i_8])))))))));
        var_26 = (min(var_26, (arr_14 [i_8] [1] [i_8] [i_8] [i_8])));
        var_27 = ((((((arr_4 [i_8]) ? (((arr_26 [i_8] [i_8]) + var_6)) : 0))) ? ((max((arr_26 [i_8] [i_8]), (arr_26 [i_8] [i_8])))) : ((var_0 ? 0 : (arr_8 [i_8] [i_8] [i_8])))));
        arr_30 [i_8] = ((-((max((arr_27 [i_8]), -24479)))));
    }
    var_28 = ((var_0 ? 56 : (max(var_13, (var_9 & var_2)))));
    var_29 = var_8;
    var_30 = max(((max(var_2, 1))), (!var_6));
    #pragma endscop
}
