/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = ((((max((((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_3 [i_0] [i_1]))), (arr_3 [i_1] [i_0])))) ? (min((((var_8 ? var_2 : 2207523771713603134))), (((arr_3 [i_1] [1]) + (arr_1 [i_0]))))) : ((max(var_9, 1524233540)))));
                var_11 = 2872540992173633760;
                var_12 = (max(var_12, ((-1 && ((max(((((arr_0 [i_0]) << (var_1 - 124)))), ((var_0 ? -2872540992173633760 : (arr_2 [i_0] [i_1] [i_1]))))))))));
                var_13 = ((var_5 != ((min((arr_2 [i_0] [i_1] [i_1]), ((-(arr_2 [i_0] [i_0] [i_1]))))))));
                var_14 = (max(var_14, ((min((((!(arr_1 [i_1])))), (((arr_1 [i_0]) & (arr_1 [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                arr_8 [i_2] [i_2] = ((((max((arr_2 [i_3] [i_3 - 1] [i_3]), (arr_2 [i_3] [i_3 - 1] [i_2 + 1])))) ? (((~((1 ? 2872540992173633747 : (arr_3 [i_3 + 1] [i_2 + 2])))))) : ((2872540992173633738 ? (arr_2 [i_3] [i_2] [i_2 - 1]) : ((var_6 | (arr_1 [0])))))));
                var_15 = (max(var_15, ((((max(var_4, var_4))) ? 2147483646 : ((min((arr_6 [i_2 + 2] [i_2 + 1] [i_3 - 3]), 3794829546)))))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_2] [i_3] [i_4] [i_2] = min(((500137749 & (arr_11 [i_2] [i_2 + 2] [i_3 - 1]))), (min(-2872540992173633760, 2147483645)));
                    var_16 = (max(var_16, (((arr_6 [i_2 + 2] [2] [i_4]) ? var_9 : (min(84, 2385561819077793008))))));
                    var_17 = max((max((arr_6 [12] [i_2 + 2] [i_4]), (((arr_9 [i_2 + 1] [i_3] [i_3 - 1]) | var_2)))), (((~1) ? ((~(arr_0 [i_2]))) : 86)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_18 *= (arr_2 [i_2 - 1] [i_3 + 1] [i_5]);
                    var_19 = ((~(arr_9 [i_3 - 2] [i_2 + 1] [i_2])));
                    var_20 -= (((arr_11 [i_2 + 2] [i_3 - 2] [i_3]) | (arr_15 [i_3 + 1])));
                    var_21 = (((arr_3 [i_2 + 2] [i_2 - 1]) * (arr_3 [i_2 + 2] [i_2 - 1])));
                }
                var_22 = (min(((30717 ? (arr_2 [i_2] [i_3] [17]) : (((arr_15 [i_3]) ? 28787 : (arr_1 [i_3]))))), (((((-95796896 & (-2147483647 - 1))) >= (!1))))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((((!((max(var_5, (arr_4 [i_7]))))))) >= (var_1 ^ 1))))));
                                var_24 = var_7;
                                var_25 &= (min(((!((!(arr_0 [i_2]))))), ((!(((var_7 ? 1 : (arr_22 [i_2] [i_2] [i_2] [1] [i_2 - 1] [12]))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 1; i_9 < 8;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 10;i_11 += 1)
            {
                {
                    var_26 |= -5541297429531061376;
                    arr_32 [i_11 - 4] [i_9] [i_9] = (1 - 53067);
                    var_27 = (max(var_27, (arr_23 [i_11] [1] [i_10] [i_9 - 1] [i_9] [i_9])));
                }
            }
        }
        var_28 = (max(var_28, -0));
        var_29 = (max(var_29, 212));
        var_30 = (arr_11 [i_9 - 1] [i_9] [i_9]);
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        var_31 = (max(var_31, 14));
        var_32 = 0;
        var_33 = (max(var_33, (((~(arr_3 [i_12] [i_12 - 1]))))));
        var_34 = (max(var_34, 1));
    }
    #pragma endscop
}
