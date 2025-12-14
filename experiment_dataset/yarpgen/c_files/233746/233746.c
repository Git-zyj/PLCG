/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((((1 ? 0 : 41))) ? ((var_3 ? var_5 : var_1)) : 1))));
    var_11 = (~115);

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 = 77;
        arr_3 [i_0] = (arr_2 [8]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = (((((arr_6 [11] [11]) | (arr_5 [i_1]))) >= ((var_3 ? (arr_5 [13]) : 15298081314617055348))));
        var_13 = ((+(((arr_5 [5]) | (arr_5 [24])))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_14 = ((((min(((var_0 ? 0 : var_4)), (arr_12 [i_2])))) & (max(var_2, ((var_1 & (arr_9 [i_2] [i_4])))))));
                    var_15 = (min((arr_14 [i_3] [i_3]), (((215 ^ (~var_8))))));
                    var_16 = ((((max((min((arr_6 [i_2] [i_3]), 26)), (((!(arr_4 [i_2]))))))) ? (max(((3148662759092496243 ? (arr_2 [i_2]) : (arr_6 [i_2] [i_2]))), (max(var_9, (arr_9 [i_4] [i_2]))))) : (min((arr_2 [i_2]), (max(-3545695249085451340, (arr_2 [i_2])))))));
                }
            }
        }
        var_17 = ((arr_1 [i_2] [i_2]) ? ((-(arr_5 [i_2]))) : ((var_3 ? (arr_2 [6]) : ((~(arr_10 [6] [i_2]))))));
        var_18 = ((~(min((((~(arr_12 [i_2])))), (((arr_14 [10] [i_2]) | var_2))))));
    }
    var_19 = ((((max(26, 124)) ? var_9 : (!var_6))));
    var_20 = (max(((((var_4 ? var_8 : var_7)))), (((215 ? 0 : var_3)))));
    #pragma endscop
}
