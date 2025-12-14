/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = ((var_11 ? var_18 : 52534));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (min(((((((var_0 ? 3539675438 : 8))) ? 5476 : 1))), (max((~var_3), 3797366312))));
                arr_4 [i_0] [i_0] = 10;
                var_22 = (min(var_22, var_16));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_23 = (((arr_3 [i_0] [i_0] [i_0]) ? (~6) : (arr_5 [i_0] [i_0])));
                    var_24 = (max(var_24, (arr_2 [i_2])));
                    arr_7 [i_2] [15] [12] [i_0] |= var_14;
                    var_25 = var_13;
                    arr_8 [17] [17] [i_2] = ((~(arr_6 [i_0])));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_3] [i_3] [i_0] = ((((((arr_9 [i_3] [i_1] [i_0] [i_0]) >> (var_12 - 2126420845)))) ? ((max((arr_9 [0] [i_3] [i_1] [i_0]), (arr_9 [i_0] [4] [i_0] [i_0])))) : (((arr_9 [i_1] [i_1] [i_1] [13]) ? (arr_9 [5] [i_3] [i_3] [i_3]) : (arr_9 [i_3] [i_3] [16] [9])))));

                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_26 = (((((~(min(var_18, (arr_10 [15] [15] [15])))))) ? (((arr_6 [i_1]) ? ((((!(arr_5 [1] [1]))))) : var_8)) : (((max((arr_1 [i_3]), var_5))))));
                        arr_14 [i_0] [1] [i_1] [i_3] [i_3] [i_3] = ((((max(var_13, (arr_13 [i_3])))) ? ((~(arr_13 [i_1]))) : (min((arr_13 [i_1]), (arr_13 [i_3])))));
                        var_27 = (min(var_27, (((((32767 & (min((arr_2 [5]), (arr_0 [3]))))) == var_15)))));

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_28 = (min(var_28, (((((((!(arr_3 [i_5 + 4] [i_5 - 1] [i_3]))))) > (min((((arr_9 [i_4] [15] [1] [i_0]) * 4294967295)), (arr_1 [i_1]))))))));
                            var_29 *= (((min(var_6, (~var_7)))) ? (((+((max((arr_2 [7]), 0)))))) : ((((((arr_2 [8]) ? 4294967291 : var_16))) ? var_0 : (var_7 & var_2))));
                            var_30 = (arr_15 [10] [i_4] [i_3] [i_3] [i_0] [i_0]);
                        }
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_3] [i_0] = ((max((arr_18 [i_6] [i_3] [i_1] [i_0]), var_17)) / (((arr_18 [i_3] [i_1] [i_3] [i_6]) ? (arr_18 [i_0] [i_0] [0] [i_6]) : var_16)));
                        arr_21 [10] [i_3] [i_3] [i_3] [i_0] = ((((max(-1, (arr_10 [i_3] [i_1] [i_0])))) ? -var_13 : 4294967295));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_31 = ((((((min((arr_9 [i_0] [i_1] [15] [i_7]), 0)) ? var_13 : (min((arr_6 [i_0]), (-2147483647 - 1)))))) ? ((~(((arr_17 [1] [17] [i_1] [i_0] [i_0]) ? 15444020070992364229 : 755291859)))) : (min(20, 9223372036854775807))));
                        var_32 = (min(var_32, ((((((18446744073709551615 ? 1 : var_8))) ? (arr_10 [12] [12] [i_3]) : ((var_6 ? (min((arr_1 [6]), (arr_12 [i_0] [i_0]))) : (((var_11 & (arr_6 [0])))))))))));
                    }

                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_33 += ((max(((-124 ? (arr_19 [i_0] [2] [i_0]) : 90)), 1056964608)) * (arr_23 [i_8] [i_8] [i_8 - 2] [i_1]));
                        var_34 = (min((arr_17 [i_3] [i_1] [15] [8] [9]), var_0));
                        var_35 = (min(var_35, (arr_25 [i_3] [i_3] [i_3])));
                    }
                    var_36 = ((~(arr_5 [i_3] [i_0])));
                    var_37 = (~var_5);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    var_38 = (((arr_15 [i_0] [i_0] [i_9] [9] [i_0] [i_0]) | (arr_24 [i_9] [i_9] [i_0] [i_0] [8] [i_9])));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_39 = (((arr_3 [i_0] [17] [11]) & (arr_3 [i_0] [i_0] [i_0])));
                        arr_30 [i_0] [i_0] [2] [i_9] = (((arr_29 [12] [i_9] [10] [i_1] [i_1] [i_0]) | ((var_17 ? var_10 : (arr_10 [5] [i_1] [1])))));
                        var_40 *= (arr_26 [i_10] [i_1] [i_0]);
                    }
                }
            }
        }
    }
    var_41 = var_11;
    #pragma endscop
}
