/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [11] = min(var_12, ((-var_12 ? (((arr_0 [i_1]) ? var_8 : (arr_6 [i_0 - 3] [i_0 - 3] [i_1]))) : ((((-21 >= (arr_4 [i_0]))))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_0] [i_3] |= ((-(((!1) ? (((18446744073709551615 ? -2025273195 : 108))) : -1384419840449378040))));
                        arr_13 [i_1] [1] [i_1] [i_1] = -16383;
                        var_16 = (max(var_16, (((!((((arr_1 [i_1 - 1] [i_1 + 1]) / (arr_1 [i_1 - 1] [i_1 - 2])))))))));
                        var_17 = ((((((min((arr_8 [i_0] [1] [i_3]), var_4))) > (~var_3))) ? (((((arr_11 [i_2]) < var_5)) ? var_9 : 23587)) : var_8));
                        arr_14 [12] [i_1 - 2] [i_0] = ((((arr_4 [i_0 + 2]) ? var_13 : 9822)));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_17 [i_2] [2] [i_4] = (min((((~var_8) ? var_15 : var_5)), (~var_12)));

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_18 = (((((-((2 ? var_8 : var_9))))) ? (min((arr_18 [i_0] [i_1 - 2] [i_2] [i_4] [i_5]), var_8)) : (arr_15 [i_5 + 2])));
                            var_19 -= (min((max((arr_20 [i_0] [i_1 + 1]), (arr_20 [11] [i_1 + 1]))), (((arr_20 [i_0 + 2] [i_1 + 1]) ? (arr_20 [i_0] [i_1 + 1]) : (arr_16 [i_0] [i_1 + 1] [i_5] [i_5] [i_5 + 3])))));
                            var_20 = arr_6 [i_5 + 1] [7] [i_4];
                            var_21 = (((((arr_3 [i_0 - 3]) < (arr_0 [i_2]))) ? 589624654608492370 : ((((!(arr_6 [i_0] [i_1 - 2] [i_4])))))));
                        }
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [17] [i_4] [i_6] [i_0] = ((~(max((arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]), var_8))));
                            arr_26 [i_0] [i_1] [i_2] [i_4] [i_6 - 1] = 18;
                        }
                    }
                    arr_27 [i_0] [i_2] = ((-((((var_6 ? (arr_23 [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 1]) : (arr_2 [i_1])))))));
                    arr_28 [i_0] [i_0] [i_0] |= (min((arr_3 [i_0 + 1]), (min(-var_11, ((-2 ? var_15 : var_7))))));
                    var_22 ^= ((((var_11 << (arr_3 [i_0 - 3])))) >= -var_6);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_32 [i_7] = ((var_1 ? 13036621748081827049 : (arr_23 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1])));
                    arr_33 [i_0] [i_0] [i_7] = -1746;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_23 = (arr_20 [i_0 + 2] [i_9]);
                                arr_39 [i_1] [i_1] [i_7] [i_8] = -6133;
                                arr_40 [i_0] [i_0] [1] [i_7] [i_8] [1] = ((-((var_9 ? (arr_18 [i_0] [19] [i_7] [i_8] [i_9]) : (arr_3 [i_8])))));
                                var_24 = (arr_4 [i_0 + 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 *= var_6;
    var_26 = (((((min(var_3, var_4)) ? (8048519686717243442 && 65528) : (!589624654608492370)))));
    #pragma endscop
}
