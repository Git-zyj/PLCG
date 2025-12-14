/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_10 - var_7) ? (!var_3) : 1))) ? var_6 : (!var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_15 = (min(var_15, 1));
                    arr_9 [i_1] [i_1] [i_1] [10] = var_13;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_16 = (arr_0 [i_0]);
                    var_17 ^= 3875475153;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] = (-452175237 && (arr_5 [i_4]));
                                var_18 = ((419492143 ? (arr_14 [1] [i_4] [9] [i_1] [i_1] [i_1] [i_0]) : (var_8 ^ var_1)));
                            }
                        }
                    }
                    var_19 = ((3997007491720516604 ? -87 : -122));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_20 = (arr_8 [i_1]);
                    arr_19 [i_0] &= ((!(((arr_13 [i_0]) >= (arr_13 [i_0])))));
                }
                var_21 = (((((var_9 / (arr_7 [i_0] [i_1])))) ? (arr_13 [i_1]) : ((var_3 / (arr_7 [i_0] [i_0])))));

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_30 [i_1] [3] [i_1] [i_8] [i_9] = -0;
                                arr_31 [i_0] [i_0] [i_0] [1] [i_1] = (arr_8 [i_1]);
                                var_22 = (max(var_22, (!var_3)));
                            }
                        }
                    }

                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        var_23 = max((max(1, 545707591)), (((((-2115290496 ? (arr_15 [i_0] [i_1] [i_1] [8]) : (arr_5 [i_7]))) | (~5270)))));
                        var_24 = (var_6 & 1);
                        var_25 = (((!var_4) >= 0));
                    }
                    var_26 = (min(var_26, ((min(-17540, (min(((35 ? var_11 : (arr_26 [i_7] [i_7] [i_7] [i_1] [i_1] [i_0]))), (var_1 - 28700))))))));
                }
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    var_27 = ((min((((arr_6 [i_0]) + 1)), 1)));
                    var_28 = (((((!var_4) ? var_5 : 0)) <= (arr_32 [i_0] [i_1] [0])));
                }
            }
        }
    }
    var_29 &= -383521262;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {
            {
                var_30 = ((min(1456019509, 2147483647)));

                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    arr_45 [i_13] [i_13] [i_12] = ((((((!1) ? (arr_39 [12] [i_13] [i_13 + 1]) : (max(-1250476228, var_10))))) < (((arr_38 [7]) * (var_13 * 1)))));
                    var_31 = (arr_40 [i_12]);
                    var_32 = var_2;
                }
            }
        }
    }
    var_33 = -1;
    #pragma endscop
}
