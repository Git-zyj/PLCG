/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((((((var_3 / var_4) * (var_9 / var_8)))) || (((((var_5 ? var_4 : var_1)) ^ ((var_4 << (32767 - 32724))))))));
    var_12 = (((var_2 ? (var_0 - var_5) : (((var_7 ? var_5 : var_5))))));
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= (((((((arr_6 [i_0] [i_1 - 2] [i_1]) ? var_9 : var_3))) ? (arr_0 [i_0 + 1]) : ((15 ? (arr_3 [8] [i_2]) : var_4)))));
                    var_15 ^= ((43318319 ? ((-1363588855 ? 43318348 : 44)) : (!0)));
                    var_16 = (arr_7 [i_0] [i_1 - 2] [1] [8]);

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2] [i_1] [i_2] = ((-26275 ? 0 : 3805805513902885683));
                        var_17 = (min(var_17, (((((min((((arr_9 [i_1] [i_1] [2] [i_3]) ^ -8482223249286530825)), (arr_2 [i_0 - 1] [i_3])))) ? (max((((arr_2 [9] [i_2]) ? (arr_3 [i_0 + 3] [4]) : var_4)), var_9)) : var_8)))));
                        arr_11 [i_1 - 1] [7] [7] [i_2] = ((((((arr_4 [i_0] [i_0]) ? (arr_4 [i_3 - 1] [i_3]) : (arr_8 [i_0] [i_1] [i_1 - 2] [i_0])))) ? var_0 : (((((arr_4 [i_2] [i_0]) || (((1 ? (arr_6 [i_0] [i_1] [i_2]) : 0)))))))));
                        var_18 *= ((~(~var_8)));
                    }
                    arr_12 [4] [i_0 + 2] [i_0 + 2] [i_2] = ((((min((arr_2 [i_2] [i_0 - 1]), var_3))) ? var_9 : var_1));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            {
                var_19 = (min(var_19, ((((((min(var_6, 1)))) ? ((((!(arr_13 [i_5]))))) : (max(var_3, ((((arr_15 [i_5]) ? (arr_13 [i_5]) : 4251648975))))))))));

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_20 += (min(((var_2 | (arr_20 [i_4] [i_5] [i_4] [i_4]))), (((((((arr_20 [1] [i_5] [10] [i_6]) && (arr_13 [i_5])))) >> (!126))))));

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_21 = (max(var_21, ((((((arr_20 [i_4] [i_5] [i_5] [i_7 + 1]) && var_4)) ? (arr_15 [i_6]) : ((((arr_18 [i_4] [10] [i_7 - 1]) ? var_8 : var_6))))))));
                        var_22 = (max(var_22, ((((arr_13 [i_5]) ? (arr_15 [i_6]) : (arr_18 [i_7] [i_7] [i_4 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_30 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] = (((((-270733563558185169 ? (arr_28 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1]) : (arr_23 [i_9] [i_9 - 1] [i_9 + 1] [1] [i_9])))) ? -var_4 : (((min((arr_23 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9]), (arr_28 [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1])))))));
                                var_23 = var_0;
                            }
                        }
                    }
                    var_24 = -var_0;
                }
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    var_25 -= ((((((arr_23 [i_10] [i_10 + 2] [i_10 + 2] [i_5 + 1] [i_4 + 1]) ? 1363588855 : ((var_10 ? var_9 : (arr_19 [i_4] [i_5] [i_5])))))) ? -57344 : (((arr_26 [i_5 - 2] [i_10 - 1] [i_5] [i_4 + 1]) ? (arr_26 [i_5 + 1] [i_10 - 1] [i_10 + 2] [i_4 - 1]) : (arr_26 [i_5 - 2] [i_10 + 1] [8] [i_4 - 3])))));
                    var_26 = (max(var_26, (((((min((arr_31 [i_4 - 1] [0] [i_5]), (arr_22 [i_4] [i_5 - 1] [12] [i_10 + 2])))) ? (min((arr_21 [i_5] [i_5]), var_1)) : -24231)))));
                    var_27 = var_1;
                }
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    var_28 = arr_23 [i_4 - 3] [i_5] [i_11] [i_11] [i_11];
                    arr_36 [i_4] = (((arr_23 [i_4] [i_5] [i_11 - 2] [i_5] [i_4 - 2]) ? ((var_3 ? (min((arr_35 [i_4] [i_5] [i_5] [i_4]), var_8)) : ((((-2577513877601349544 == (arr_15 [i_4]))))))) : (arr_23 [i_4] [i_5] [i_4] [i_5] [i_4])));
                    arr_37 [i_4] [i_4] [i_4] = (arr_13 [i_4]);
                }
                arr_38 [i_4] [i_4] [i_5] = (((-(-22006 < 1))));
            }
        }
    }
    #pragma endscop
}
