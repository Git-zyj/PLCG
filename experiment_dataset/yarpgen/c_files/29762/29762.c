/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (7 % 122)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_20 = (max(var_20, ((max((((1 ? 1 : 112))), ((var_0 ? (arr_1 [i_0] [i_1 + 3]) : var_3)))))));
                    var_21 = (max(var_21, (((((max(((var_12 ? 22755 : 288230376151711744)), (1 / 42780)))) ? var_9 : -3138420248)))));
                }

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_22 ^= 120487959;
                    var_23 = (min((((!(arr_11 [i_0] [i_1] [i_1 + 4] [i_0])))), 65517));
                    arr_12 [i_0] = (((~var_17) ? (arr_0 [i_0]) : 4020728651));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((!(((-61 ? var_6 : 0)))))) >> (((120487959 ^ var_6) >> (144115188075855872 - 144115188075855811)))));
                                var_24 = (min(var_24, ((((((arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 2]) * (arr_3 [i_1 + 3] [i_1 + 4]))) * ((((arr_3 [i_1 + 2] [i_1 + 1]) ? var_2 : (arr_11 [i_5] [i_1 + 1] [i_1 + 4] [i_1 + 4])))))))));
                                var_25 = (max(var_25, ((((min(var_0, (((arr_4 [i_5] [16] [i_4]) ? (arr_3 [i_0] [i_0]) : (arr_10 [i_0] [i_1 + 3] [i_1 + 3] [i_6]))))) - (103 < 1))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 15;i_7 += 1)
                    {
                        var_26 ^= ((!(((-(arr_0 [i_7]))))));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_27 = -3596669163670806012;
                            var_28 = (min(var_28, (var_17 != var_6)));
                            var_29 = 1;
                            var_30 = (max(var_30, (((-(arr_4 [i_0] [i_1 + 2] [i_0]))))));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_31 = (max(var_31, (arr_24 [i_0] [i_1] [i_1] [i_1] [i_7 - 2] [i_7 - 2] [i_9])));
                            var_32 += (((var_16 < 3596669163670806011) % (arr_26 [i_0] [i_1 + 3] [i_4] [i_4] [i_7] [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_30 [i_0] = (((arr_28 [i_1 + 3] [i_7 - 4] [i_4]) < var_14));
                            var_33 = (((arr_11 [i_0] [i_7 - 2] [i_1 + 1] [i_0]) ? var_4 : 18446744073709551615));
                            arr_31 [i_0] [i_0] [5] [i_7] [i_7 - 3] = ((1198173030 < (arr_1 [i_1 - 1] [i_7 + 1])));
                            var_34 += (((arr_2 [i_7]) ? 106 : (arr_2 [i_7])));
                        }
                    }
                }
            }
        }
    }
    var_35 = (min(var_12, ((753261215 | (var_18 | 0)))));
    #pragma endscop
}
