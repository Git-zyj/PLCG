/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_14 = 155;
                    var_15 *= ((((((17256 ? var_12 : var_7)) + 9223372036854775807)) >> (688300316831585036 - 688300316831584978)));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        arr_13 [i_0] [14] [i_3 - 3] [i_3 + 1] [i_4] [i_4 + 3] |= (((var_6 - var_7) + (7544 + 0)));
                        var_16 = (!24);
                        var_17 = -688300316831585036;

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_16 [i_5] |= -211;
                            var_18 = ((((var_0 != (arr_0 [i_0]))) ? ((-(arr_11 [i_0] [3] [i_3 - 1] [i_4 + 1] [i_3 - 1]))) : 7828));
                            var_19 = ((((!(arr_10 [i_4] [7]))) && (!var_11)));
                        }
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_20 = (min(var_20, 688300316831585024));
                        var_21 = (~24307);
                        var_22 = 43;
                    }
                    var_23 = (((arr_7 [i_0 - 1] [i_1 + 1] [i_3 - 3]) ? (1 + 211) : var_3));
                    var_24 = ((arr_19 [i_3 - 3] [i_0] [i_1 + 2] [i_0 + 1] [i_0] [i_0 + 1]) ? 15574 : var_4);
                    var_25 |= 23;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_26 += ((((var_2 - 4253922898993280401) ? 2778041862 : ((4161278195279964373 ? 536870911 : -4253922898993280401)))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_27 = 155;
                        var_28 = (max(var_28, (arr_20 [i_0] [i_1] [i_7] [i_7] [1] [i_8])));
                        var_29 = (((38 ^ -8207421466094114297) / (((3366528012246776432 ? var_4 : 3165350630)))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_30 = (max(((~(max(4161278195279964372, 5)))), (~-var_11)));
                                var_31 = (min(20098, -246));
                                var_32 = (max(var_32, (~var_8)));
                                var_33 = ((var_4 ? (max((arr_27 [i_0 + 1] [i_0 - 1] [i_1 + 3] [i_9 - 1] [i_10]), 2060683574)) : 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_34 |= ((+((((var_7 <= -43) > (((arr_35 [i_12 + 1]) ? var_11 : var_11)))))));
                                var_35 |= 688300316831585039;
                                var_36 = var_0;
                            }
                        }
                    }
                }
                var_37 = (93548835742182875 < -688300316831585048);
                var_38 = (max(var_38, ((((-(max(var_7, -6118075365409617501))))))));
            }
        }
    }
    var_39 = var_4;
    #pragma endscop
}
