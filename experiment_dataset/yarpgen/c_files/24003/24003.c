/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_3;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            var_13 = ((-((var_10 ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_4 [i_0 + 2] [i_0 - 1] [i_0 - 1])))));
            var_14 = (max(var_14, (arr_3 [i_0 + 1])));
            var_15 = (min((arr_4 [i_0 - 1] [i_1 + 1] [i_1 - 1]), ((~((var_6 ? (arr_5 [i_0] [i_1]) : var_10))))));
            var_16 = (arr_2 [i_1 + 1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_2] [i_2] = (arr_5 [i_0 + 2] [i_0 + 2]);
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_17 = (((arr_13 [i_3] [i_3 + 1] [10] [i_3 + 2] [i_2]) ? (arr_12 [i_3 + 2] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]) : (arr_12 [i_0 + 1] [i_5] [i_5] [i_0 + 1] [i_5] [i_5])));
                            arr_15 [i_4] [i_5] [i_4] [i_4] [i_4] [i_4] [i_4] |= (((arr_2 [i_0]) ? (((arr_2 [i_5]) ? (arr_2 [i_0]) : var_5)) : var_9));
                            var_18 ^= (((arr_7 [i_3 - 2] [i_3 + 2]) ? (((arr_5 [i_0 + 1] [i_3 + 2]) ? (arr_14 [i_0 - 1] [i_0 - 1] [i_5] [i_0] [i_0 - 1]) : var_1)) : (arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_5])));
                            arr_16 [i_2] = (((arr_0 [i_0 + 1] [i_2]) ^ (arr_1 [i_0] [i_2])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            var_19 = ((arr_5 [i_0 + 1] [i_0 + 1]) ? var_1 : (arr_5 [i_6 - 1] [i_0 + 1]));
            var_20 *= (arr_11 [i_0 - 1] [i_6 + 1]);
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_25 [i_7] = ((2147418112 ? 5952257410636941047 : -1989063720));
                        arr_26 [i_7] [i_7] = (((arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2]) - (arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2])));

                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_7] [i_0] [5] = ((((((arr_18 [i_7 - 2] [i_9 + 1]) ? (arr_4 [i_0] [i_7 + 1] [i_8]) : (arr_22 [i_7 + 2] [i_0 + 2])))) ? (arr_28 [i_0] [i_0 - 1] [i_0]) : (arr_4 [i_0 - 1] [i_7 - 2] [i_10])));
                            var_21 = (min((arr_20 [i_7]), (max((arr_5 [i_9 - 2] [i_9 - 2]), var_0))));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_7 + 1] [i_7] [i_9] [i_7 + 1] [10] = var_6;
                            arr_35 [i_0] [14] [i_8] [i_7] [i_11] = (((((arr_3 [i_0 + 1]) != var_8)) ? (((arr_3 [i_0 + 1]) / (arr_3 [i_0 + 1]))) : var_11));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_0 + 1] [i_7] [i_7 + 2] [i_8] [i_9] [i_7 + 2] = (((arr_23 [i_0 - 1] [i_7] [i_12]) ? (arr_23 [i_0] [i_9 - 1] [i_0]) : (((!(arr_23 [i_0] [i_0] [10]))))));
                            arr_40 [i_0] [i_7] [i_7] [i_7] [i_0] = (min((~var_9), (max((arr_2 [i_9 - 2]), (arr_2 [i_7 + 2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
