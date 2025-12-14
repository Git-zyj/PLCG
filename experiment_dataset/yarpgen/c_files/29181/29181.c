/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        var_20 -= (arr_1 [i_0]);
                        arr_9 [i_0] [i_2] [i_1] [i_0] = ((((min((((arr_3 [i_1 + 3] [8]) ? (arr_8 [i_3]) : 0)), var_16))) ? (max((((!(arr_7 [i_3] [i_0] [i_0])))), var_6)) : var_3));
                    }

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_21 = (min(var_21, (((var_13 ? (((min(var_0, (!879168045))))) : ((3083760224829828090 - ((((arr_7 [9] [i_0] [9]) ? var_1 : (arr_3 [i_0] [1])))))))))));
                        var_22 = (max(var_22, (arr_0 [i_0])));
                        var_23 = (max((arr_6 [i_0] [i_2] [i_0]), (-var_7 / var_13)));
                    }
                }
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    var_24 ^= arr_8 [14];
                    arr_14 [i_0] [i_0] [8] [i_5] = 2147483639;
                    arr_15 [i_5] [i_0] [i_0] [i_0] = ((var_13 > (((((-2147483639 ? 0 : -8192))) ? 2147483610 : -879168046))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_25 *= (arr_6 [10] [i_1 - 2] [12]);

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_26 = (arr_3 [i_1 - 2] [i_6 - 1]);
                        arr_21 [12] [3] [i_0] = -2147483639;
                        var_27 = 8164;
                        var_28 = (((!(arr_10 [i_0] [6] [i_1 + 1] [i_6 + 2] [i_7] [i_7]))) ? (arr_10 [i_0] [i_0] [i_1] [i_6] [i_7] [i_7]) : 168);
                    }
                    arr_22 [i_0] [i_0] [i_6] [i_6] = -109;
                    var_29 = (var_5 / var_8);
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_30 = (min(var_30, (((((!(arr_19 [i_6] [i_6]))) ? var_12 : ((((!(arr_23 [i_0] [i_1] [i_6] [i_8 - 1] [i_8] [i_9]))))))))));
                                var_31 *= ((!(!var_1)));
                                var_32 = (min(var_32, ((((!var_3) && (arr_3 [i_6 - 1] [i_1 - 2]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_33 = (-(max(5129334, 879168046)));
                                arr_36 [i_0] = (arr_17 [i_0] [i_11] [i_10]);
                                var_34 = var_5;
                                arr_37 [i_0] [6] [i_11] [i_11 - 2] [4] [i_0] = ((var_19 ? (min((arr_27 [i_10] [i_0] [i_10] [i_0] [i_0]), var_7)) : (max((((-15384 ? 1 : 1052565306))), -6766206177340952287))));
                            }
                        }
                    }
                }
                var_35 = (var_4 && var_14);
            }
        }
    }
    var_36 = ((((-6200273916042182897 ? -8192 : 16922654097522925002)) / var_17));
    var_37 = var_8;
    #pragma endscop
}
