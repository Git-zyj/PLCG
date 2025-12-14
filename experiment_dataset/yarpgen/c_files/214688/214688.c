/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    var_15 *= (arr_1 [i_0 - 1]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 ^= ((-(~var_14)));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] |= ((((arr_4 [i_3] [i_2] [i_1]) > var_5)));
                        var_17 = ((~(arr_5 [i_0 + 1])));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_18 = (min(var_18, (arr_0 [i_0 - 1])));
                            var_19 = (min(var_19, (((-70 ? (((arr_13 [i_0] [i_1] [i_2] [i_3] [i_0]) << (((arr_9 [i_0] [2] [9] [i_2 + 1] [i_3] [i_0]) - 16600627292431056938)))) : ((~(arr_13 [i_0 + 1] [i_1] [13] [i_1] [i_4]))))))));
                            var_20 = (min(var_20, (((~(((!(arr_5 [i_0])))))))));
                        }
                    }
                    var_21 = ((-(arr_4 [i_2 - 3] [i_0 - 1] [i_0 + 1])));
                    var_22 = 1048765356;
                    arr_15 [13] [i_1] [i_2 - 2] = 4294967295;
                }

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((120 ? 5796 : -121))))));
                                var_24 *= var_2;
                                var_25 -= (((var_12 & (((arr_19 [i_6]) ? var_10 : 1)))));
                            }
                        }
                    }
                    arr_23 [i_0 - 2] &= ((((((max(69, -567323578))) ? (arr_16 [i_0] [i_5] [i_5] [i_5]) : 18014398509481984))) ? (min((arr_20 [i_1] [i_0 - 2] [i_5] [5]), (arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : 270215977642229760);
                    var_26 = (((arr_0 [i_1]) + ((~(arr_7 [14] [i_1] [i_0])))));
                }
            }
        }
    }
    var_27 = 1;
    var_28 = ((((var_13 + ((var_5 ? 3147066242 : var_7)))) - var_6));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                {
                    arr_32 [i_8] [i_9] [0] = (((min(-120, var_7)) <= (((arr_22 [i_8] [i_9] [1] [i_10]) - (arr_19 [i_10])))));
                    var_29 *= (((((arr_17 [i_8] [12] [i_10]) | var_13)) >= ((((var_6 < (arr_27 [1])))))));
                }
            }
        }
    }
    #pragma endscop
}
