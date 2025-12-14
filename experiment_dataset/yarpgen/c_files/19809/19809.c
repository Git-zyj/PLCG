/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 255;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 -= ((((min((((arr_8 [i_3]) ? (arr_1 [i_1]) : 1)), (((~(-2147483647 - 1))))))) ? ((2147483647 ? (-660791529122091466 != 2147483640) : (arr_10 [i_0] [i_1] [i_3] [i_3] [i_4] [i_3]))) : ((-13608 ? 0 : (!-13608)))));
                                var_15 = (max(var_15, (2147483640 + -13608)));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_16 |= ((((min(3339797375688051102, ((2147483629 & (arr_8 [i_5])))))) ? (((var_10 | 660791529122091454) ? ((((arr_15 [i_0] [i_1] [i_5]) ^ -2147483647))) : (arr_9 [i_0] [i_1] [i_5] [i_0] [i_1]))) : (arr_5 [i_0] [i_0] [i_0] [i_0 - 1])));
                    var_17 = 2147483646;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_18 -= ((-(arr_8 [i_5])));
                                var_19 = (arr_6 [i_6] [i_1] [i_5]);
                                var_20 -= ((!(arr_21 [i_0] [i_1] [i_5])));
                                var_21 += (((((660791529122091461 ? (var_7 - 9223372036854775807) : -660791529122091471))) ? (~18446744073709551615) : var_11));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_22 = var_3;
                            arr_28 [i_0] [14] [i_0] &= ((~((~(((arr_11 [4] [i_1] [i_8] [i_9] [i_1] [i_1] [i_1]) ^ -660791529122091486))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_23 = ((((var_3 + (-2147483647 - 1)))) * (min((((arr_14 [i_0] [i_1] [i_0] [i_11]) * var_7)), (arr_37 [i_0 + 1] [i_0] [i_10] [i_10] [i_10] [i_10 - 2] [i_11 - 1]))));
                                var_24 = ((var_5 ? (((((65535 ? (arr_25 [i_0] [i_1] [i_12]) : var_5)) < var_7))) : ((((~-2147483647) > -34)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
