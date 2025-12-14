/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~9223372036854775807);
    var_20 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (min(var_21, (((((var_13 ? -1 : (arr_0 [i_0]))) <= (arr_1 [i_0]))))));
        arr_2 [i_0] = ((4681288573893465642 ? var_18 : ((24 ? -225723234 : -2147483646))));
        arr_3 [i_0] = ((((((arr_0 [19]) ? var_18 : (arr_0 [i_0])))) ? (((20 ? 3 : 8))) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] = var_6;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_22 = (((((var_14 ? (arr_11 [i_2]) : var_17))) ? 18025 : -var_3));
                        var_23 = (((arr_5 [i_3 + 1] [i_2] [i_0]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_3 + 2] [i_1] [i_0])));
                    }
                }
            }
            arr_13 [i_0] [0] = (((arr_8 [i_1] [i_1] [2] [i_0]) ? var_7 : (arr_8 [i_0] [i_1] [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_24 = (min(var_24, ((((arr_9 [i_0] [i_0]) * -88)))));
                        var_25 = ((((((arr_4 [3] [i_1] [i_0]) < var_18))) * -7033));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((232 ? 0 : 1781));
                        var_26 = (min(var_26, (((!(arr_14 [i_0]))))));
                    }
                }
            }
            var_27 = (min(var_27, (arr_9 [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_28 = (arr_1 [i_0]);
            arr_24 [i_0] [i_0] [i_0] = ((1 + (((var_0 + 2147483647) >> var_7))));
            arr_25 [i_6] [i_6] [i_6] = (((arr_8 [i_6] [i_6] [i_6] [i_0]) ? 18446744073709551615 : (arr_16 [i_6] [i_0] [i_0])));
            var_29 = (((((-792 ? -4 : (-9223372036854775807 - 1)))) ? ((var_16 ? (arr_10 [i_6]) : 22525)) : (arr_20 [i_6])));
            var_30 -= ((var_3 ? var_0 : (arr_10 [i_0])));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_31 = ((((var_1 ? var_8 : (arr_15 [i_7] [i_7] [i_7]))) >> ((((var_15 ? var_12 : var_17)) - 8278960613418515366))));
        var_32 = (((arr_17 [1] [i_7]) ? (arr_14 [i_7]) : ((-(arr_21 [i_7] [i_7] [i_7])))));
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        var_33 = ((((1 ? ((7797375349825550035 ? -3 : 1481339645)) : 488354242))) ? (max((18034 != -7024), -8372323592771097431)) : 4294967279);
        var_34 = (max(1, 779));
        var_35 -= (((!192) << ((((arr_22 [i_8 - 1] [i_8 + 2]) <= (arr_21 [i_8 + 1] [i_8 + 2] [i_8 + 1]))))));

        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            var_36 = var_4;
            var_37 ^= (((min((min(var_11, (arr_21 [i_8] [i_9 - 2] [i_8]))), ((min((arr_6 [i_8] [i_8] [i_8]), var_7))))) - (((((max(18446744073709551615, var_3))) ? (var_16 + var_6) : (arr_22 [i_9 - 1] [i_9]))))));
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            arr_35 [i_8] [i_10] = (max(var_16, (((-(arr_30 [i_8]))))));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        arr_43 [i_8] [i_12] = (((((!(arr_14 [i_8 + 2])))) >= (arr_14 [i_10])));
                        var_38 -= ((+(max(18, (min((arr_28 [i_12]), var_16))))));
                    }
                }
            }
            arr_44 [11] [i_8] [i_8] = ((!(-1 & var_12)));
        }
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            arr_47 [i_8] = ((((var_14 != (arr_15 [i_8] [i_13] [i_13 - 1]))) ? ((-((-1277967394907135316 + (arr_42 [i_8]))))) : ((18446744073709551615 ? (~var_17) : ((var_3 ? 8029174592569994437 : (arr_17 [i_8] [i_8])))))));
            var_39 |= (((-(arr_5 [i_13 + 1] [i_8 + 1] [i_8 + 2]))));
            arr_48 [i_8] [i_8] [i_13] = (arr_10 [i_8]);
            var_40 = 23;
        }
        var_41 = (~19);
    }
    for (int i_14 = 1; i_14 < 18;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                {
                    var_42 = -488354269;
                    var_43 = (max(var_43, (max(281474943156224, ((((var_15 && var_15) / var_14)))))));
                }
            }
        }
        var_44 = var_9;
    }
    #pragma endscop
}
