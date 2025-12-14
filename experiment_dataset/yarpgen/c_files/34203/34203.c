/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((var_4 | 2495029487) ? 1799937813 : ((((((var_3 * (arr_2 [i_0] [i_0]))) >= (arr_0 [i_0] [i_0])))))));
        var_13 = (((arr_0 [i_0] [i_0]) ? var_4 : (arr_0 [24] [i_0])));
        var_14 ^= (((((-var_1 << (((max(127, 1799937808)) - 1799937755))))) && ((max((((var_1 ? (arr_2 [10] [i_0]) : 4294967285))), (min(213, var_1)))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = ((2495029487 > ((max((((arr_4 [i_1]) | var_6)), ((-(arr_5 [1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_16 = (((arr_5 [i_3]) == (((!((max((arr_4 [12]), (-127 - 1)))))))));

                    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [1] [i_3 + 1] [i_4] = (((!var_1) * (arr_2 [i_2] [i_2])));
                        var_17 = (~213);
                        var_18 = (min((((~(-2147483647 - 1)))), (max(127, 2495029483))));
                        var_19 = (min((((((((arr_13 [i_4] [i_4] [i_4] [i_3] [i_2] [i_1]) ^ var_1))) || var_7))), 18446744073709551615));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_20 -= -4945257446124764177;

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_22 [i_6] [i_5] [i_3] [i_2] [i_1] = (var_4 != var_9);
                            var_21 += ((((((-127 - 1) ? 2495029482 : 213))) ? var_5 : 3584));
                            var_22 = (max(var_22, (((2495029488 ? var_4 : (arr_0 [i_3 - 1] [i_5 - 1]))))));
                        }
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = var_9;
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_23 += (((~2650025243207094516) ? ((~(arr_16 [i_7 + 2] [i_7] [i_7 + 1] [i_7]))) : ((26476 << (((var_2 + 1216885705) - 23))))));
                        var_24 = (max(var_24, var_0));
                        var_25 -= (max((((max(var_7, 1799937808)))), 1799937814));
                        var_26 = var_7;

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            var_27 = -112;
                            var_28 *= var_1;
                            var_29 *= var_10;
                            var_30 += 251;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_31 -= (((arr_4 [i_7 + 1]) ? (arr_4 [i_7 - 1]) : (arr_27 [i_3 + 2] [i_3] [i_3] [1] [i_7] [i_7 + 1] [i_7])));
                            var_32 = var_5;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_33 *= ((((!(~4074322456544253539)))) & (min(var_9, ((var_5 & (arr_28 [i_2] [i_2]))))));
                                var_34 &= -126;
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = (((var_11 ? (var_11 + var_3) : var_6)));
    #pragma endscop
}
