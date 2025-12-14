/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 65511;
        var_12 *= (max((((arr_0 [i_0]) * (arr_0 [i_0 - 4]))), (((16777200 | 23229) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0 - 4])))));
        var_13 = ((((-7380 ? (arr_1 [i_0]) : (arr_0 [i_0 + 2])))) ? ((max(((var_8 ? (arr_0 [i_0]) : var_8)), (arr_0 [i_0 - 2])))) : (((((((-9223372036854775807 - 1) | var_1)) + 9223372036854775807)) >> (arr_1 [i_0 - 4]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            {

                for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_14 = ((~(-9223372036854775807 - 1)));
                    arr_13 [i_2 + 2] [i_2 + 2] = (max(0, var_11));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_15 = (((arr_17 [i_1] [i_2 + 1] [i_2 + 1] [i_4 - 2]) ? (arr_11 [i_1] [i_2 + 1] [i_2 + 1] [i_4 - 2]) : (arr_17 [i_1] [i_4 - 2] [i_2 + 1] [i_4 - 2])));
                    var_16 = 9223372036854775807;
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_17 += (0 || 5124057678406541943);
                            var_18 = (arr_20 [i_1] [i_1] [i_1] [i_1] [i_7]);
                            arr_25 [8] [8] [8] [i_6 - 2] [i_6] [i_7] = (max((((-9223372036854775807 - 1) ? 127 : 2553508135)), (arr_14 [i_1])));
                        }
                        arr_26 [i_1] [i_1] [i_1] [i_6 - 1] [i_2 + 2] [i_1] = 58020;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_19 = ((~(arr_22 [i_2 - 1] [i_2 - 1] [i_5] [i_1] [6])));
                        var_20 = (max(var_20, (((var_3 <= (arr_6 [i_1]))))));
                        arr_30 [i_8] [i_8] = var_3;
                    }
                    var_21 = (~9223372036854775807);
                    var_22 = var_6;
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                var_23 = max(((((((-9223372036854775807 - 1) != var_10)) ? 13772 : ((var_9 >> (-14167 + 14196)))))), ((((((arr_27 [i_1] [i_1] [i_1] [i_1]) ? 4294967284 : (arr_9 [i_9])))) ? ((9223372036854775807 ? (arr_28 [i_1]) : 5850365264085256848)) : (((max((arr_35 [i_1] [i_1] [i_1] [i_9]), (arr_17 [i_1] [i_2 + 1] [i_9] [i_10]))))))));
                                var_24 += (((((arr_32 [i_10] [i_11 + 1]) > (-9223372036854775807 - 1))) || ((((arr_17 [i_1] [6] [i_1] [i_1]) ? (((arr_31 [i_1]) ? (arr_15 [i_10] [i_10] [i_9] [i_10]) : var_5)) : (arr_20 [i_1] [i_2 + 2] [i_9] [i_2 - 1] [i_2 + 2]))))));
                                var_25 = ((((min((arr_4 [i_9]), (max((arr_5 [i_1] [i_1]), var_6))))) ? ((min(58024, 20288))) : (~-9223372036854775795)));
                                var_26 = (((((min(127, var_4)) ? var_7 : (((max((arr_3 [i_1] [11]), (arr_22 [i_1] [i_2 + 2] [i_9] [i_9] [i_11 + 1])))))))));
                                var_27 = (arr_38 [i_9]);
                            }
                        }
                    }
                }
                var_28 *= ((((((arr_3 [i_2 + 2] [i_2 - 1]) ? var_3 : (arr_3 [i_2 + 2] [i_2 - 1])))) ? ((((arr_3 [i_2 - 1] [i_2 - 1]) ? var_2 : -1))) : ((18182 ? var_11 : var_11))));
                var_29 = ((-(min(var_1, (((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_10 [i_1] [i_1] [i_1]) : (arr_18 [i_1] [i_1])))))));
                arr_39 [i_1] = (max((((arr_15 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2]) ? (arr_20 [i_1] [i_2] [i_1] [i_1] [i_1]) : var_4)), (((!(((var_5 ? (arr_37 [i_1]) : var_3))))))));
            }
        }
    }
    #pragma endscop
}
