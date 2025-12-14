/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_11 = (((34359738367 ? 65380429 : -12006)));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_12 = (((~var_3) ? (((1294528322 ? 3 : var_7))) : (arr_9 [i_2] [i_2] [i_2])));
                            var_13 = (1577851926 + 18446744073709551615);
                            arr_13 [i_4] [i_2] [i_4] [i_4] [i_4] = (((arr_11 [i_4] [i_3] [i_2] [i_1] [i_2] [i_0] [i_0]) <= 10827874805425491382));
                            var_14 = (max(var_14, (arr_10 [i_0] [i_0] [8] [10] [i_4] [10])));
                        }
                    }
                    arr_14 [i_2] = ((var_5 ? (~-93992908) : ((34359738344 ? 62304 : (arr_0 [i_0])))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_15 = ((1 ? (arr_12 [i_0] [18] [i_0] [i_5]) : (arr_7 [4] [4] [4])));
            arr_17 [1] [i_5] = ((12002 ? 14193 : (!7618869268284060231)));
        }
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_16 = (min(var_16, 90));
                            var_17 = ((!((((arr_3 [18]) ? (arr_18 [i_0] [15] [i_7]) : var_1)))));
                            arr_26 [i_7] [i_7] [i_7] [i_7] [i_7] [i_6] = 131;
                            arr_27 [6] [i_6] [6] = (arr_11 [i_0] [i_0] [i_0] [11] [i_6] [i_0] [i_0]);
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_18 = -2589866516;
                            var_19 = (arr_11 [1] [i_10] [i_6] [i_8 + 1] [i_6] [i_6] [i_6 - 2]);
                            var_20 = (max(var_20, var_7));
                        }
                        arr_31 [i_8 - 1] [4] [4] [i_0] &= ((11 ? (arr_29 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 1]) : -68));

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_34 [18] [i_6] [i_6] [i_6] [i_7] [i_8] [i_11] = (!364003045);
                            var_21 += 55221;
                        }
                    }
                }
            }
            arr_35 [15] [i_0] [i_6] = ((28 ? ((364003044 ? -50 : 255)) : (40194 == 116)));
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_22 = var_3;
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {
                        var_23 = (min(var_23, 44));
                        var_24 += (!-42);
                    }
                }
            }
            arr_45 [i_12] &= (((arr_4 [i_12] [i_12]) ? (arr_4 [i_0] [i_12]) : (arr_4 [i_0] [i_12])));
            arr_46 [i_0] = -65380416;
        }
    }
    #pragma endscop
}
