/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 += ((+(((((arr_2 [i_2]) ? var_12 : var_3)) ^ (arr_5 [i_1] [i_1] [i_1])))));
                    arr_6 [i_0] [i_0] |= (max((arr_2 [i_2]), (max((arr_0 [i_0]), (arr_2 [i_2])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] = ((!(arr_5 [i_3] [i_1] [i_1])));

                        for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_1] [i_1] [i_4] [i_1] [i_1] = ((-257848541 ? ((var_9 << (((((arr_7 [i_1] [i_4] [i_2]) + 65)) - 20)))) : (((-8353001150406715366 ? (arr_2 [i_2]) : (arr_7 [i_1] [i_2] [i_1]))))));
                            arr_15 [i_0] [6] [i_4] [i_0] [6] = (arr_9 [6] [i_1] [5] [i_3]);
                        }
                        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_5] [i_1] = ((!(((var_6 ? (arr_3 [i_3]) : (arr_16 [i_3] [i_5] [i_3] [14] [i_3]))))));
                            arr_19 [i_5] [1] [i_2] [i_1] [i_5] = -15470;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_23 [i_6] = (arr_9 [i_0] [15] [i_1] [i_0]);
                            arr_24 [i_0] [i_0] [i_0] [i_0] [1] [i_0] = ((var_1 / (arr_5 [i_0] [i_2] [i_2])));
                            var_15 = var_7;
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_16 = ((!(arr_0 [i_0])));

                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_17 *= 1;
                            var_18 -= (((arr_21 [i_1] [20] [i_8 + 1]) ? 0 : (arr_21 [i_1] [i_1] [i_1])));
                        }
                        arr_29 [i_0] [11] [i_7] = (((arr_3 [i_7]) / (((arr_9 [i_0] [i_0] [i_0] [9]) ? (arr_3 [3]) : 17191))));
                        var_19 = (~7119571412511490068);
                        var_20 |= (arr_12 [i_0] [i_0] [i_0] [i_0] [18] [8] [i_7]);
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, ((((((((arr_17 [i_0] [10] [i_1] [i_1] [i_9]) ? var_6 : -1))) == (max(817667401, var_10))))))));
                        var_22 = ((((max((arr_2 [i_9]), (arr_12 [i_0] [i_0] [9] [i_2] [i_0] [9] [3])))) ? (((((max(-7940375776614790494, 2133776175171832341))) && (!var_0)))) : -1462148649));
                        arr_33 [i_0] [i_0] [i_2] [i_2] |= (((((~(arr_4 [15] [i_1] [i_0])))) ? 6110931871093711009 : ((((!(arr_12 [i_9] [i_9] [7] [i_1] [i_1] [i_0] [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_23 = (arr_16 [i_0] [i_11] [i_2] [i_10] [8]);
                                arr_38 [i_1] &= (max(((255 ? ((max((arr_32 [i_11] [i_1] [i_2] [i_1]), var_0))) : 11055705191994390046)), ((((arr_12 [i_10 + 1] [i_11 - 2] [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 1]) ? 1462148649 : 1)))));
                                var_24 = ((((((arr_26 [i_10 + 1] [i_10 + 1] [i_10 + 1]) > (arr_26 [i_10 + 1] [i_11] [i_11])))) & (((!(arr_26 [i_10 + 1] [i_10 + 1] [i_10]))))));
                                var_25 = var_1;
                                arr_39 [i_0] [i_1] [i_0] [i_10] = ((+((((max((arr_36 [i_0] [i_10 + 1] [i_2] [i_2] [i_0] [i_0] [i_0]), var_7))) ? ((max(var_6, var_1))) : -817667387))));
                            }
                        }
                    }
                    arr_40 [i_0] [i_0] [i_0] = (((arr_28 [i_0] [8] [i_1] [8] [i_1]) ? (((~(arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1])))) : (arr_7 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_26 = 17191;
    #pragma endscop
}
