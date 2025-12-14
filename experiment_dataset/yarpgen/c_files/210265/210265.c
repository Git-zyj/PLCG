/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~var_13) & var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (min(772705426, (arr_1 [i_0])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_1] = (((arr_6 [i_1] [i_0]) != 0));
                    arr_9 [i_1] [i_1] = (arr_6 [1] [i_2]);
                    arr_10 [i_0] [i_0] [16] [16] = ((~(arr_4 [i_1])));
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        var_18 = (arr_1 [i_4 - 1]);
                        var_19 = (min(var_19, (((-(max(-3257840210, (-1487259073827777225 >= 1))))))));
                        arr_16 [i_0] [i_4] = (arr_5 [i_0] [i_1] [i_0]);
                    }
                    arr_17 [i_0] [i_0] [13] = ((max((arr_11 [i_0] [i_0] [i_3] [i_1]), (!var_7))) / ((((-(arr_3 [i_0] [i_1] [i_3]))))));
                    arr_18 [i_0] [i_1] [i_1] [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_3]);
                    arr_19 [i_0] [14] [i_0] [14] = (--1);
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_20 *= (((arr_4 [i_5 + 1]) / (arr_4 [i_5 - 1])));
                            var_21 *= (((arr_15 [i_5 + 1] [i_5 - 1]) != (arr_11 [i_7] [i_0] [i_1] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            var_22 = var_11;
                            var_23 = arr_27 [i_0] [i_5] [i_6] [i_6];
                            var_24 = ((!(arr_23 [i_0] [i_0] [8] [i_6] [i_8])));
                        }
                        for (int i_9 = 4; i_9 < 14;i_9 += 1)
                        {
                            var_25 = (min(var_25, (arr_23 [i_9] [i_6] [i_5 + 1] [i_0] [i_0])));
                            var_26 = -167;
                        }
                        arr_30 [i_5] [i_1] [i_1] [i_6] = (+((+((((arr_0 [i_5] [i_1]) <= (arr_24 [i_5])))))));
                    }
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        var_27 -= -1625651995728241119;

                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            arr_37 [i_0] [i_0] [i_5] [i_5] = (arr_13 [i_0] [i_0] [i_0] [i_0]);
                            var_28 = 1319866046;
                            var_29 &= ((((arr_15 [i_11] [5]) + 2147483647)) >> ((((var_8 ? (arr_25 [i_0] [i_5 - 1] [i_10 + 1]) : (arr_25 [i_0] [i_5 + 1] [i_10 + 1]))) - 986489819)));
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_5] [i_5] = (arr_39 [i_0] [i_0]);
                            arr_42 [i_5] = (min(-19, (((((-(arr_35 [i_0] [i_0] [i_0] [3] [3] [i_0] [i_0])))) ? var_6 : var_7))));
                            var_30 = (arr_2 [i_0] [i_12]);
                        }
                        var_31 ^= ((-((-(arr_3 [i_10 - 2] [i_1] [i_5 + 1])))));
                        var_32 = (arr_2 [i_1] [i_10 - 2]);
                    }
                    arr_43 [i_5] [i_1] [i_5] = (max((arr_7 [i_5 - 1] [i_1] [i_0] [i_0]), (((((arr_14 [i_0] [12] [i_1] [i_1] [i_1] [i_5]) ? (arr_14 [i_5] [i_0] [i_5 - 1] [i_0] [i_0] [i_0]) : (arr_26 [3] [3] [i_5] [3]))) ^ ((min(var_14, (arr_31 [i_0] [i_1] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_33 ^= 116;
    #pragma endscop
}
