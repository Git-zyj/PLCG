/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max(-114, (((min((arr_2 [i_1] [i_0]), (arr_2 [1] [1]))) / (arr_2 [i_0] [i_1])))));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    var_15 = (min(22486688214861824, (((+((max((arr_6 [i_0] [i_0] [i_2]), 1))))))));
                    arr_10 [i_0] = ((-(arr_3 [i_0])));
                    arr_11 [i_0] [i_0] [i_2] = min(var_2, ((~((var_10 ? 127 : var_3)))));
                    var_16 &= -var_8;
                    var_17 = ((((((arr_2 [20] [i_2]) ? (min(2097151, -6495050907999376175)) : 22486688214861815))) ? (min(16363270578275632023, (arr_7 [i_2 - 1]))) : (~-3122781719207274735)));
                }
                for (int i_3 = 2; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_0] = 3808347558;
                    arr_17 [i_0] = (max((((-(arr_2 [i_0] [13])))), (min((((var_12 ? (arr_2 [i_3] [i_1]) : (-127 - 1)))), var_0))));

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        var_18 += 22;
                        arr_21 [i_0] [i_1] [i_0] [i_4] = (~var_11);
                        var_19 ^= var_13;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_20 ^= (((((15760082700774871786 << (var_5 + 5049)))) ? (-3122781719207274720 + 6974263322709588482) : (arr_22 [i_0] [i_1] [i_0] [i_5])));
                            var_21 &= ((~(arr_18 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 1])));
                        }
                        for (int i_7 = 4; i_7 < 24;i_7 += 1)
                        {
                            var_22 = (max(var_22, (arr_12 [i_3 + 1] [i_5])));
                            var_23 = (!9007199237963776);
                        }
                        var_24 += (((arr_26 [i_0] [17] [i_5]) ? (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_10));
                    }
                }
                for (int i_8 = 2; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    var_25 = max((((~var_11) - var_5)), ((max((arr_1 [i_0]), (arr_4 [i_8 + 1] [i_1])))));
                    var_26 = ((!(((((!(arr_9 [i_0] [i_0] [i_8]))) ? (min(var_9, var_12)) : (arr_9 [18] [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_27 ^= ((!(arr_30 [i_9] [21] [i_0] [i_0])));
                    arr_33 [i_0] [i_1] [i_9] = var_9;
                    arr_34 [i_0] [i_1] [i_0] [i_9] = (((!-6974263322709588476) == (arr_1 [i_0])));
                    var_28 = (14615 <= var_4);
                    var_29 = (((var_2 % (arr_29 [24] [i_0]))));
                }
            }
        }
    }
    var_30 |= (min((((0 / var_0) ? (((var_4 ? var_7 : var_11))) : (max(16, var_6)))), var_11));
    var_31 = (~var_7);
    var_32 += 12090;
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    var_33 = (((!var_13) ? (((((!(arr_31 [i_12] [i_11]))) || (arr_40 [i_10 + 2])))) : (arr_20 [i_10] [18] [i_12] [i_12])));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_48 [i_10] [i_10] [i_12] [i_13] [i_10 + 1] [i_10 + 2] = ((((((!(arr_29 [i_10 + 3] [i_11]))))) + (((arr_13 [i_10] [i_10 + 3] [i_10 + 3]) ? (arr_13 [i_10] [i_10 + 3] [i_11]) : var_6))));
                                var_34 = (((arr_24 [i_10] [i_10] [i_10] [i_10]) ? (((-9223372036854775807 - 1) / 18437736874471587846)) : ((((!(arr_31 [i_10] [i_10]))) ? (var_8 / 351686804078927493) : (-127 - 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
