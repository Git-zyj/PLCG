/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = (max(var_16, var_9));
            arr_5 [i_0] [i_1] = (!4238959998);
            var_17 = (((max((arr_0 [i_0]), (arr_2 [i_0]))) << ((((((var_0 ? var_1 : var_3)) >> (((arr_3 [i_0] [i_0] [i_0]) - 1473359831)))) - 30))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_18 = ((((!(-124 && var_7))) ? (((~-4543961790965469020) ? 14272086554562095816 : (arr_7 [i_0] [i_4 - 1] [i_3 + 1]))) : var_10));
                                arr_15 [i_0] [13] [i_3 - 1] [i_3] [i_2] [i_5] [i_0] = (min(var_9, var_8));
                                var_19 |= ((-(!var_9)));
                            }
                        }
                    }
                    var_20 ^= ((((var_4 / (((arr_14 [i_0] [18] [19]) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_10 [7] [7] [i_3 - 4]))))) | var_3));
                    arr_16 [i_0] [i_3] = (~-0);
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        var_21 = (min(-2056403400, ((((arr_7 [i_6] [5] [i_6]) % 9176)))));
        arr_21 [i_6] = (~(min((arr_17 [i_6 - 2]), (arr_10 [i_6 + 1] [i_6] [i_6]))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_22 |= (min(18446744073709551615, ((((-(arr_19 [i_8])))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_23 = 3628696126;
                                var_24 = (max(var_24, (((!((min((arr_2 [i_6 - 1]), var_15))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 9;i_11 += 1)
    {
        arr_37 [i_11 - 1] = ((((((((var_10 ? (arr_32 [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11]) : (arr_23 [i_11 - 1] [i_11 + 1])))) ? (arr_30 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 - 1]) : (arr_8 [2] [i_11 + 1])))) ? ((((arr_2 [i_11 + 1]) > var_2))) : ((((-8149 ? (arr_0 [i_11]) : var_1))))));
        arr_38 [i_11] |= (-1429537806640836612 > -20);
    }
    var_25 = (min(((-1035910182 ? ((var_15 ? 13606145595224904395 : var_11)) : (0 + -6))), ((max(1, -4543961790965469002)))));
    #pragma endscop
}
