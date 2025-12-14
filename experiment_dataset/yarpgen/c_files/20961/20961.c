/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 &= ((1 >> (224 - 216)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_17 *= var_7;
                            arr_17 [i_1] [i_1 + 1] [i_1] = max((((var_7 * (0 * -877961820)))), (((arr_8 [i_0] [i_0 - 1]) * 14)));
                            var_18 *= (min((arr_11 [i_0] [i_1] [i_1] [i_3] [i_4]), ((-(arr_0 [i_3])))));
                            var_19 ^= (~1);
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [i_5] [1] [i_1] [i_1 - 2] [i_0 + 1] = (((max(var_5, (arr_16 [i_3] [3]))) >= (((((((arr_6 [i_1]) ? (arr_14 [i_5] [i_3] [i_1 + 1] [i_1 + 1] [4]) : 1))) ? (arr_11 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 2]) : ((((arr_14 [i_0] [i_1] [i_1] [i_3] [i_5]) > var_1))))))));
                            var_20 -= ((((min((((arr_7 [i_0] [i_1 - 1] [4]) ? (arr_10 [i_2] [i_0 + 1] [i_1 - 1] [i_2]) : var_13)), (arr_16 [10] [i_2])))) ? (min((arr_4 [i_0] [i_0] [i_0 + 1]), (arr_2 [i_1 - 2]))) : ((-(((var_11 == (arr_19 [i_0] [i_2] [i_2] [i_3] [i_5]))))))));
                            arr_21 [2] [i_1] [i_1] [i_3] [i_5] = (min(247, 3111899018332847186));
                            var_21 = (max(var_21, ((((var_13 - 127) ? (min(-4, -3111899018332847187)) : ((((((arr_3 [i_0] [i_3]) ? 8625 : var_4))))))))));
                        }
                        var_22 = (max((max((arr_12 [i_1] [i_3]), var_2)), 8622));
                        var_23 = var_12;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_24 = ((var_3 ? (arr_16 [i_0 + 1] [i_1 - 1]) : -22492));
                        var_25 = (arr_22 [i_6] [i_6] [i_1] [i_6] [i_6]);
                        var_26 = ((-(arr_24 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 + 1])));
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_27 *= (((1 ? ((min(57, 3)) : 111))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                {
                    var_28 = ((-((((min(var_12, var_7))) << ((((min((arr_29 [i_8]), var_4))) - 80))))));
                    var_29 = (max(var_29, var_3));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    var_30 = ((-(max(774486839, ((var_14 ? 15 : (arr_35 [1] [1] [i_11])))))));
                    arr_40 [i_7 - 1] [i_7 - 1] [i_10] [i_11] = (min((arr_29 [i_7]), (arr_30 [i_11])));
                    arr_41 [i_7] [i_7 - 1] [i_10] [i_11] = (((var_0 ? (1794042486 << var_13) : (((((arr_34 [i_7 - 1] [1] [i_7 - 1] [i_7 - 1]) == (arr_32 [6] [i_7] [i_10 + 1] [6]))))))));
                }
            }
        }
    }
    var_31 = ((-142 ? var_12 : 4209911415794902581));
    var_32 = var_7;
    #pragma endscop
}
