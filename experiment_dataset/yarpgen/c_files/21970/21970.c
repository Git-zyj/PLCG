/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (min(var_18, 4294967295));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [11] [i_0] = (arr_2 [i_0] [0]);
        var_19 |= (((((((15440161724031114753 ? var_9 : (arr_1 [13]))) | 9223372036854775807))) ? ((14 << ((1025558972 ? 1 : 640242947)))) : 4294967295));
        var_20 = var_1;
        var_21 = (min(((((arr_2 [11] [i_0]) < -33809053))), (((((arr_1 [i_0]) / (arr_1 [4]))) & (arr_0 [i_0])))));
        var_22 = (max(var_22, (((-(((!(arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        arr_7 [18] [2] = (((arr_4 [i_1 - 4]) || var_15));
        var_23 = var_1;
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_24 = (max(var_24, ((((((arr_11 [i_5] [i_3] [i_4]) == var_10)) ? var_7 : (arr_6 [13]))))));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_25 = (arr_6 [i_2]);
                            var_26 = (((arr_15 [i_2] [0] [i_4] [i_5]) ? ((6 ? (arr_2 [15] [i_3]) : (arr_10 [i_2]))) : var_7));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_27 = (min(var_27, (arr_10 [i_4])));
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] = -10525;
                        }
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            arr_27 [i_2] [i_3] [i_4] [7] [i_5] [i_8] = -var_1;
                            arr_28 [i_2] [8] [12] [i_2] [i_4] [4] [i_2] &= (arr_17 [i_8] [i_4] [0] [i_4] [i_4] [i_2]);
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_28 = (min(var_28, ((((arr_5 [i_5 + 2]) ? (arr_29 [14] [i_5 + 2] [8] [i_4] [0]) : (arr_5 [i_5 - 1]))))));
                            arr_31 [i_2] = var_4;
                            var_29 = (max(var_29, (var_8 != var_0)));
                            arr_32 [i_2] [i_3] [14] [6] [i_5] [8] [0] = (((arr_17 [i_2] [i_2] [12] [i_5] [i_5 + 2] [7]) ? (arr_8 [i_2] [i_5 - 1]) : (arr_17 [i_2] [i_2] [5] [i_5] [i_5 + 1] [1])));
                        }
                        var_30 *= (arr_1 [i_5]);
                    }
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        arr_35 [i_2] [5] [i_4] [i_4] [i_10] [i_2] = (arr_29 [i_2] [i_2] [i_4] [i_2] [i_2]);
                        arr_36 [10] [2] [2] [i_4] [1] |= (!var_11);
                        var_31 -= ((!((min(((217828664 ? 5 : (arr_6 [1]))), (arr_19 [i_4] [8] [12]))))));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_32 = ((var_10 ? var_7 : (arr_14 [12] [i_3] [i_4] [9])));
                            arr_39 [13] [6] [i_2] [3] [i_11] = (((arr_13 [i_2] [6]) ? (arr_24 [i_2] [i_2]) : -210986771076936478));
                            arr_40 [i_2] = arr_34 [i_2] [12] [i_2] [i_2] [i_2] [i_2];
                        }
                    }
                    var_33 = var_8;
                    var_34 ^= ((!(arr_2 [13] [12])));
                    var_35 ^= arr_25 [i_2] [i_3] [1] [11] [i_3] [4];
                    arr_41 [i_2] [i_2] [11] = -4294967287;
                }
            }
        }
        var_36 = min(-2434817475615643467, 4294967292);
        var_37 ^= (arr_1 [i_2]);
    }
    #pragma endscop
}
