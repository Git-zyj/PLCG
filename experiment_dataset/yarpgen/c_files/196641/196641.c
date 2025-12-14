/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (!233);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, 4421817792710628288));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = 221;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_18 -= (arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_19 = (((arr_8 [12] [i_2 - 2] [i_2 - 1] [i_3]) ? (arr_3 [i_0] [i_2 - 3] [i_1]) : 221));
                        var_20 = (((-2147483647 - 1) ? 0 : (-2147483647 - 1)));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_21 = (min(var_21, (((2147483641 != (arr_8 [i_0] [i_1] [i_2 + 3] [i_4]))))));
                        arr_12 [14] [i_1] [i_2] [i_0] = (arr_6 [i_0]);
                        var_22 = (+-0);
                    }
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_23 -= (((arr_13 [i_5] [i_5 + 3] [i_1] [i_5]) ? (arr_8 [i_6] [i_6] [i_6] [i_5 - 3]) : ((var_10 - (arr_17 [i_6])))));
                            var_24 = (min(var_24, (((((-(arr_10 [i_1] [i_1] [i_1] [i_1])))) ? -var_4 : ((-(arr_10 [i_0] [i_1] [i_2 - 1] [i_5 + 2])))))));
                            var_25 = 7;
                            var_26 = (((arr_19 [12] [17] [i_2 - 3] [i_5 + 2] [i_6]) ? 145 : ((((arr_9 [9] [i_1] [11] [9] [20]) <= (arr_4 [i_0]))))));
                            arr_21 [17] [i_0] = ((!(((10991046136874138213 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_17 [i_0]))))));
                        }
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_27 = (max(var_27, (((arr_23 [i_0] [i_2 + 2] [i_2] [i_5 + 4] [i_7 - 2] [i_2]) ? (arr_17 [i_1]) : 219))));
                            arr_24 [i_0] [i_0] [i_0] [1] [i_0] = (((((var_8 | (arr_14 [i_2 - 1] [i_2 - 1])))) ? (((-(arr_10 [i_0] [15] [i_0] [19])))) : (arr_13 [i_5 + 4] [i_5 + 4] [i_0] [i_5 - 1])));
                        }
                        var_28 = 32752;
                        arr_25 [1] [i_0] [1] = ((((!(arr_13 [i_0] [i_0] [i_0] [i_0]))) ? (arr_11 [i_2 - 3] [i_2 + 3] [i_0]) : (((-47 ? (arr_14 [i_0] [i_1]) : 1)))));
                        var_29 = (!196);
                    }
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_2 + 3] [i_2] [i_8 - 2] = ((5761070216632486026 ? 18446744073709551602 : 24));
                        var_30 = ((-(((!(arr_13 [i_0] [i_0] [i_0] [i_0]))))));
                        var_31 += 9223372036854775807;
                        var_32 = (arr_20 [i_8] [i_1] [i_2] [i_8] [i_0] [1]);
                    }
                }
            }
        }
        arr_30 [i_0] = (!var_5);
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_33 = 1;
        var_34 = (min(var_34, 5833754450468841627));
        var_35 = ((-13648 ? 13567515130716755810 : 247));
    }
    var_36 *= var_3;
    #pragma endscop
}
