/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (!83);
                    var_14 = (min(var_14, 1789639388));
                }
            }
        }
        var_15 = (max(var_15, -1789639390));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_16 = max((((var_1 && (arr_3 [i_3 - 3])))), (((arr_3 [i_3 - 1]) ? (arr_3 [i_3 + 3]) : var_0)));
            var_17 += (((((var_1 ? (arr_0 [i_3 + 1] [i_3 + 3]) : 9223372036854775807))) ? ((((!(((0 ? 0 : -2414824723587490889))))))) : (arr_6 [i_3] [i_4] [i_4])));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            var_18 = (max(var_18, (((2113579323 ? ((0 ? -1365121173 : 1)) : 200795294)))));
            var_19 = -1;
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_20 = ((var_6 ? (arr_18 [i_6 + 1] [i_3 - 2] [i_5 + 1]) : var_4));
                            var_21 = (((arr_12 [i_5 - 2] [i_7 - 1]) / var_8));
                            var_22 = (min(var_22, (var_2 || 200795294)));
                            var_23 = ((var_2 ? var_4 : (arr_14 [i_6 + 1] [i_6 - 2])));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_24 = (max(var_8, (((((0 ? var_5 : (arr_4 [i_3] [i_9])))) ? (min(var_3, var_10)) : (1 + 173)))));
                            var_25 = (!255);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 4; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_26 = ((max((arr_3 [i_13 - 2]), 134209536)));
                            arr_49 [i_9] [i_14] = (((0 <= -877943516) < ((6522395833946030582 & ((((!(arr_26 [i_3] [i_9] [i_13 - 4] [i_14] [i_13 - 4] [i_9] [i_14])))))))));
                        }
                    }
                }
            }
            var_27 *= 2414824723587490886;
        }
        var_28 = (max(var_28, ((min(252, (max(((var_9 | (arr_32 [i_3] [0] [i_3]))), (arr_47 [i_3] [i_3] [i_3] [i_3 + 1] [i_3]))))))));
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {
        var_29 -= var_10;
        var_30 = ((((((((0 << (var_10 + 114)))) ? (((arr_52 [i_16] [i_16]) ? -2414824723587490883 : 2414824723587490883)) : (arr_50 [i_16] [i_16])))) ? var_10 : ((200795287 ? (1 ^ 1) : var_5))));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    {
                        arr_63 [i_16] [i_17] [i_18] [i_19] = (min((((-6414543725870923769 ? 0 : var_10))), ((var_2 ? 9223372036854775807 : (arr_51 [i_16])))));
                        var_31 = (min(var_31, ((min(var_1, (min(-177470904, -255)))))));
                    }
                }
            }
        }
    }
    var_32 -= ((var_6 ? (var_6 > 8734088698974743330) : var_2));
    #pragma endscop
}
