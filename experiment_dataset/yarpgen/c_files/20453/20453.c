/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1] = (arr_5 [i_0]);
            arr_7 [1] = ((~((-(arr_0 [i_1])))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_19 = (arr_10 [i_2 - 2] [i_2 + 3]);
            var_20 = (((arr_4 [i_2 + 3]) - (arr_4 [i_2 + 1])));
            arr_11 [i_2] [i_2] [i_0] |= ((var_8 ? ((35184372088831 ? 963945328 : 3)) : (((var_16 ? 32767 : 8)))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_0] [i_0] [14] = 6038015118150294888;
            var_21 = ((28 & (arr_0 [i_0])));
            var_22 += ((-(-72 % -844698453309620636)));
        }
        arr_15 [13] [i_0] = (((arr_4 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
        var_23 *= 10116424786461119327;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_24 = ((((arr_3 [i_6]) ? (arr_12 [i_4] [i_5] [i_6]) : (arr_12 [i_4] [i_5] [i_6]))));
                    var_25 = (~var_3);
                    arr_24 [i_4] [i_5] = (((-127 - 1) & ((((!(arr_18 [i_4])))))));
                    var_26 = (((arr_13 [i_6]) ? (((arr_13 [i_5]) ? 2 : (arr_13 [i_4]))) : var_0));
                }
            }
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_29 [i_4] [i_4] = (((arr_18 [i_4]) <= (((((1 > (arr_27 [i_7]))) ? (((!(arr_2 [i_4])))) : -8)))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_27 *= ((!(arr_21 [i_8] [i_7])));
                        var_28 = (min((((arr_5 [i_4]) ? (arr_16 [i_8] [i_7]) : 15)), (arr_33 [i_9] [i_9])));
                    }
                }
            }
            var_29 = (max(var_29, (((((max((arr_2 [i_7]), (arr_5 [i_4])))) ? ((min((arr_27 [i_7]), 0))) : ((((arr_9 [i_4]) ? (arr_9 [i_4]) : -22))))))));
            var_30 = (2 ? 2147483647 : ((((arr_25 [i_4]) / (arr_0 [i_7])))));
        }
    }
    var_31 |= ((var_4 < ((((max(5996807872238563446, 481131053))) ? var_10 : var_14))));
    var_32 *= var_4;
    var_33 = -1;
    #pragma endscop
}
