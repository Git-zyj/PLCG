/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 -= (6820216931071607284 < (((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_21 ^= ((2079767866 ? (var_13 < 1) : ((0 ? 2215199416 : 5537))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_22 += ((~(arr_11 [4] [i_3 + 1] [i_4 + 2])));
                            var_23 -= (((arr_5 [i_1] [i_1] [i_1] [i_3 + 1]) ? (arr_8 [12] [12] [i_1] [i_3 - 1]) : 2079767866));
                            arr_13 [i_0] [1] [i_0] [i_3] [i_4 - 1] [i_0] |= ((~(arr_8 [1] [i_2 - 2] [i_3 + 1] [i_4 + 2])));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_24 ^= ((3043786639 ? -3187835229116701022 : 0));
                            arr_16 [i_0] [i_0] [i_0] [13] [i_2 + 1] [i_3] [i_5 + 2] = ((var_16 < (arr_11 [i_0] [i_2] [i_2 + 2])));
                            arr_17 [i_0] [i_0] = (1 > -21964);
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_3] = ((21964 ? 2079767866 : 1));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_25 = (min(var_25, (((0 ? ((((var_3 < (arr_11 [i_6] [i_2 + 1] [i_6]))))) : (((!(arr_2 [i_6])))))))));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_26 -= (max(((-(arr_7 [i_0] [i_0] [i_1 + 1] [i_1 + 1]))), (((1 < (arr_3 [i_6] [i_0]))))));
                            var_27 = (min(var_27, -29));
                            var_28 = (arr_9 [i_0] [i_0] [i_2] [i_6] [i_7]);
                        }
                        var_29 = (((arr_4 [i_0] [1] [1] [i_0]) > (((((arr_20 [0] [0] [i_2 - 2] [0] [i_2 - 2] [i_2]) < var_13))))));
                    }
                    arr_25 [3] [i_1] [i_0] = min((arr_21 [i_2 - 1]), (min((arr_21 [i_2 + 2]), (arr_21 [i_2 - 2]))));
                    var_30 = (min(var_30, (arr_9 [i_0] [4] [i_1] [i_1 + 3] [i_1 + 3])));
                }
            }
        }
        var_31 = (min(var_31, ((((-73 ? (arr_6 [i_0] [i_0] [0] [i_0]) : (-44 + var_1)))))));
        var_32 = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_33 |= ((73 ? 16320 : 2052313304153692675));
        var_34 &= (!0);
    }
    var_35 *= (((((-21945 && (var_9 + var_3)))) == ((var_8 ? var_5 : var_5))));
    var_36 = (max(var_36, var_10));
    #pragma endscop
}
