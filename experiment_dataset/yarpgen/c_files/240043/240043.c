/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_11 = ((-((-(arr_2 [i_3])))));
                            var_12 = (((((arr_4 [i_2] [i_2] [i_2]) <= (8946730384636882187 + 50))) ? (arr_4 [i_0] [i_0 + 2] [i_0]) : (arr_0 [i_0])));
                            var_13 = (~((-(arr_7 [i_3] [i_0 - 2] [i_1 - 2] [i_2]))));
                            arr_9 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] = (((((~((-3433449824755086788 ^ (arr_0 [i_0])))))) ? (arr_8 [i_3] [19]) : (((arr_5 [15] [15] [i_0] [i_0]) >> (((arr_7 [i_0] [i_0] [i_0] [i_0]) + 2281838857290453167))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_14 = (max(var_14, (arr_3 [i_0] [i_0])));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_16 [i_5] [i_1] [16] [12] [i_1] [i_0] = (arr_4 [23] [i_1] [i_0]);
                        var_15 = 0;
                    }

                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        var_16 += ((~(((arr_7 [i_6] [i_4] [23] [23]) ? (arr_19 [i_0] [i_1] [12] [i_6]) : -3630277678205638344))));
                        var_17 = (arr_11 [i_6] [i_1] [i_1] [i_0]);
                        var_18 = (max(var_18, ((((~(arr_4 [16] [i_0] [i_0])))))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_1] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                            var_19 -= (arr_10 [7] [i_6 - 2] [i_0] [i_0]);
                            var_20 = (max(var_20, (arr_18 [i_0] [i_1] [i_0] [i_6 + 1])));
                            var_21 = -3433449824755086779;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_6] [i_6] [i_6] [i_6 - 2] [i_1] [3] = (((((0 ? -91 : 191))) ? -94 : (arr_19 [i_0] [i_0] [i_0] [i_0])));
                            var_22 *= (~191);
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [21] [i_1] = ((~(arr_15 [3] [i_1] [i_1] [i_1])));
                            var_23 ^= (((arr_27 [i_1] [i_1] [i_1 - 2]) ? (arr_24 [i_0 + 1]) : 191));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_24 *= (arr_27 [i_6] [i_6] [i_6]);
                            arr_34 [i_0] [i_1 - 2] [i_4] [i_1] [i_4] = (((arr_8 [i_1 - 2] [i_0]) >= 117));
                            arr_35 [i_1] [3] [i_1 - 1] [i_6] [2] [2] [i_0] = (arr_4 [i_1 + 1] [i_0 + 2] [i_0 + 2]);
                            var_25 = (min(var_25, (((!(((-(arr_33 [i_0] [i_1 - 1] [20] [20] [i_1 - 1] [i_0])))))))));
                        }
                    }
                }
                var_26 = (max(var_26, (((-((-(arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                arr_36 [i_1] [i_1] = 2823818235071622372;
            }
        }
    }
    var_27 = (min(var_27, var_9));
    #pragma endscop
}
