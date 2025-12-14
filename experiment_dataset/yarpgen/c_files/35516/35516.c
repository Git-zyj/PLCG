/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    var_19 -= (arr_5 [i_2 + 2] [i_1 - 2]);
                    arr_7 [i_0] [i_0] [i_0] [i_2 - 3] = ((!(arr_2 [i_1 - 3] [i_1] [i_1 - 3])));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_1 - 2] [i_0] = ((-(max((7 % -15434), 2157554786503495091))));
                    arr_12 [i_0] = ((2157554786503495090 <= (((((min((arr_3 [i_0]), 824675629105471149))) ? ((1039687327 ? 849345743984118440 : 4293305471)) : (min(3279722218646319558, 4294967295)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_20 = -824675629105471150;
                                var_21 = var_14;
                                arr_19 [i_0] [i_1] [i_1] [i_0] [i_4] [i_5 - 1] = ((var_13 ? ((4294967295 * (50275 != 824675629105471149))) : ((((arr_8 [i_5 + 2] [i_4 + 3] [i_1]) ? (arr_8 [i_5 + 2] [i_4 - 1] [i_0]) : (arr_8 [i_5 - 1] [i_4 + 3] [i_0]))))));
                                arr_20 [i_0] [i_0] [i_0] [0] = (0 / 3279722218646319558);
                            }
                        }
                    }
                    arr_21 [i_0] = (min(4294967290, 7122721798351963470));
                    var_22 = 15243;
                }
                arr_22 [i_0] = (min((arr_14 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2]), 7849360368926515644));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_31 [12] [12] |= (max(-2157554786503495075, ((((arr_26 [6] [4] [i_7 + 1] [6]) ? (arr_26 [2] [i_7 - 1] [i_7 - 1] [2]) : (arr_26 [14] [i_8] [i_7 - 1] [14]))))));
                                var_23 = (4294967268 % 18446744073709551615);
                                var_24 = (((((arr_29 [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1]) ? (arr_28 [i_7 - 1] [i_8] [i_0] [i_8] [i_8]) : (arr_6 [i_1 - 1] [i_1])))) ? ((-(arr_30 [i_0] [i_7 + 2] [i_1] [i_1 - 3] [i_0]))) : var_17);
                                var_25 += (((var_9 ? (arr_4 [i_7 + 2] [i_7 + 2] [i_1 - 2] [i_1 - 3]) : 7849360368926515644)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_26 = max(((824675629105471149 ? (arr_33 [i_9]) : var_2)), ((~(arr_33 [i_9 + 1]))));
        var_27 = 50292;
    }
    for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_28 += ((((arr_34 [i_10 - 1] [0]) ? (arr_34 [i_10 + 1] [18]) : (arr_34 [i_10 - 1] [10]))));
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 22;i_12 += 1)
            {
                {
                    var_29 = 7849360368926515644;
                    var_30 = -7849360368926515624;
                    var_31 = (max(var_31, (var_14 / -3238961448634193862)));
                }
            }
        }
        var_32 |= 50292;
    }
    var_33 &= var_0;
    #pragma endscop
}
