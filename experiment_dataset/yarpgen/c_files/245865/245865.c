/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max((min(var_10, ((min(var_7, 36921))))), var_8)))));
    var_13 |= (min(var_9, ((var_0 ? var_6 : var_7))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = arr_3 [i_1] [i_1] [i_1];
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((~(min((!var_6), ((var_2 ? (arr_6 [i_0]) : (arr_8 [i_2 - 1] [i_2] [i_2])))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_15 *= ((-(arr_11 [i_3] [i_3])));
        var_16 = (((arr_12 [i_3] [i_3]) ? (arr_12 [i_3] [i_3]) : (arr_12 [i_3] [i_3])));
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_17 = (max((arr_5 [i_4] [i_4]), (((!(arr_6 [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                {
                    var_18 = ((60 ? 11044243037739690657 : 11044243037739690630));
                    arr_22 [i_4] [i_4] [i_4] = (max((!var_3), ((+(((arr_10 [i_4 + 2]) ? var_5 : 3968))))));
                    var_19 &= ((!18277166104703206274) ? (min((max((arr_3 [i_4] [i_4] [i_5]), var_10)), ((-(arr_21 [16] [i_5] [i_5] [i_5]))))) : (!11044243037739690653));
                }
            }
        }
        arr_23 [i_4] = (((arr_8 [11] [11] [i_4 - 1]) * (((!(arr_17 [i_4 + 1]))))));
    }
    #pragma endscop
}
