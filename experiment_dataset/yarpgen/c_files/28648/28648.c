/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [13] [i_0] = arr_1 [i_0] [i_0];
        var_13 *= (((min((arr_0 [i_0]), (arr_0 [i_0])))) ? 0 : (min(4294967294, (max(109, var_6)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                var_14 -= (((((var_1 ? 4294967295 : var_8))) ? (arr_8 [i_2 - 1] [i_2 - 2] [6]) : ((1 ? -1051160945463040859 : 724380319))));
                var_15 = (min(var_15, var_5));
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_16 -= var_7;

                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    arr_15 [i_1] [i_1] [i_4] = ((arr_5 [i_3]) ? (var_8 != var_6) : ((var_1 ? var_4 : 17514209562305941521)));
                    var_17 -= ((8562490633287344078 ? ((var_6 ? var_11 : 9884253440422207537)) : (arr_6 [i_0] [i_4 - 2])));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_18 = ((1 % (arr_9 [i_0] [i_4 - 2] [i_5] [i_3])));
                        var_19 = (!var_6);
                        var_20 -= (((arr_1 [i_4] [i_4 - 1]) ? (-19539 > 7582369542171243965) : (var_4 - var_2)));
                    }
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_21 = (max(var_21, (((var_1 ? (arr_0 [i_3]) : (arr_0 [i_0]))))));
                    var_22 = (arr_4 [i_1] [i_3]);
                    arr_20 [i_1] [i_6] = (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [1] [i_6] [i_6]) : (arr_10 [3] [i_1] [i_6] [i_1])));

                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_23 = ((var_0 ? -930751691162630407 : ((var_3 ? (arr_19 [1]) : 55005))));
                        var_24 = (((((var_6 ? 1 : 65359))) ? (arr_17 [i_7] [1] [i_7 + 1] [i_7 + 4] [i_7 + 4]) : ((718062216437081064 ? (arr_18 [i_0] [i_0] [i_0]) : (arr_3 [i_1])))));
                        arr_23 [i_6] [i_6] [i_6] [1] [i_6] [i_6] = (3603048844 ? var_7 : var_7);
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_25 = (max(var_25, var_1));
                        var_26 = ((var_11 ? (!var_0) : (((arr_16 [i_0] [i_1] [i_3] [i_6] [i_8]) ? (arr_19 [i_0]) : 0))));
                    }
                }
            }
            arr_26 [i_0] [i_0] [i_0] = (var_4 * (arr_4 [i_0] [i_1]));
            var_27 = (max(var_27, ((((((-(arr_14 [i_1] [i_1] [i_1] [i_0])))) ? ((26562 ? var_4 : (arr_8 [i_0] [1] [i_0]))) : var_6)))));
        }
    }
    for (int i_9 = 3; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_28 = (max(((((min((arr_11 [i_9 - 3] [i_9 - 3] [i_9] [i_9]), var_1))) ? var_2 : (max(221, (arr_14 [i_9] [i_9] [i_9 - 1] [i_9 + 2]))))), ((((max(65359, var_9))) ? 1 : (max(var_3, var_7))))));
        var_29 = (min(var_29, ((min((((((434722833201842579 ? (arr_28 [i_9]) : var_7))) ? (min(1993605285150472413, var_1)) : (var_3 && 691918452))), (((1191903559 ? 1 : 624143679))))))));

        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            var_30 *= ((var_10 ? ((((((var_5 ? 4294967283 : var_8))) ? (min(0, 0)) : (((var_4 ? var_11 : 176)))))) : ((3463 ? 1 : 8799388260057966547))));
            var_31 = (arr_7 [i_10 + 1] [i_9]);
        }
    }
    for (int i_11 = 3; i_11 < 15;i_11 += 1) /* same iter space */
    {
        arr_34 [i_11] [i_11] = ((1 ? (((!var_6) ? (((var_4 ? var_11 : (arr_10 [i_11] [1] [1] [1])))) : (max(var_3, (arr_1 [9] [9]))))) : (((max(1, (arr_7 [i_11 + 1] [i_11])))))));
        var_32 = (max(var_32, -17));
        var_33 = (max((min(-16, ((min(1, (arr_32 [i_11])))))), var_9));
    }

    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        var_34 = (arr_28 [i_12]);
        arr_37 [i_12] = (((-((max(var_9, var_5))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    var_35 |= (((arr_5 [i_14]) & (max(((15 ? var_10 : var_2)), (((var_11 ? 55 : (arr_32 [i_14]))))))));
                    var_36 = (max(var_9, ((((arr_12 [i_12] [i_12] [i_13] [i_14]) && (~var_3))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                {
                    arr_48 [1] [i_15] [11] [i_12] &= max((arr_46 [8] [i_15] [i_15]), 1727592289);
                    arr_49 [9] [i_16] [i_16] [i_16] = (max(((min((((102 ? 51 : -36))), ((var_4 ? (arr_38 [i_12] [2] [i_16]) : (arr_45 [i_15])))))), 37751));
                    var_37 ^= (max(255, 16453138788559079202));
                }
            }
        }
    }
    #pragma endscop
}
