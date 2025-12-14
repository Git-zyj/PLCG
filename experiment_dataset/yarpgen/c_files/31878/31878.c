/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_7 ? (((((((1 ? var_7 : 0))) && var_3)))) : (min((var_1 | var_5), -var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_3 + 1] [i_4] [i_4] [i_3 + 1] = (((arr_9 [i_1 + 1] [20] [i_3 - 1] [i_3 - 1] [i_4 + 1]) ? 104 : 152));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = arr_8 [2] [i_2] [1] [i_4];
                            arr_16 [i_4] [i_4] [i_4] [i_3] = (152 ? (arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_4 - 3] [21]) : 104);
                            var_17 = (arr_2 [i_0] [i_4 - 2]);
                            var_18 = (!133);
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [11] [i_1] [i_2] [16] [i_5 - 1] = ((~(((!((((arr_8 [i_0] [i_1] [i_2] [i_3]) / var_0))))))));
                            var_19 ^= ((((max((arr_2 [i_0] [i_0]), var_13))) ? (~var_4) : ((((((106 ? 152 : 152))) ? ((var_3 ? 151 : (arr_10 [i_0] [19]))) : ((((arr_3 [i_2] [i_1] [i_2]) || var_0))))))));
                            var_20 = (max(var_20, (((-(arr_12 [i_2] [i_2] [i_3 - 2] [i_5 + 3]))))));
                            arr_20 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = (((-var_13 ? (((min(84, var_0)))) : (min(var_6, (arr_7 [i_5 + 3]))))));
                            var_21 -= (max((max(155, var_4)), ((((var_1 ^ 94) == (((arr_4 [i_0] [i_1]) ? var_3 : 99)))))));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_24 [i_0] [i_3] [22] [i_1] [i_0] = (((105 < var_12) > 105));
                            var_22 += var_5;
                            arr_25 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_1 - 1] = ((151 ? ((~(max(151, var_7)))) : ((((arr_10 [i_3 + 1] [i_1 - 1]) && (151 < 152))))));
                        }
                        var_23 = var_12;
                        var_24 = (((((-var_13 - (arr_11 [i_1 + 1] [i_1] [i_2] [i_0])))) ? 105 : (((152 && ((((arr_6 [i_1] [i_2] [i_3]) ? var_10 : (arr_23 [i_3 + 1] [i_0])))))))));

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_25 = (((((152 << ((((max((arr_26 [i_0] [i_0] [i_1] [19] [i_3] [i_3] [i_7 - 2]), var_0))) - 106))))) ? var_8 : (((arr_6 [i_0] [i_0] [i_3 + 1]) ? 105 : (127 / 172)))));
                            arr_29 [i_1] [i_1 - 1] [i_0] [i_7] [i_7] [i_2] [i_7] = ((-((min(127, 171)))));
                        }
                    }
                    arr_30 [i_0] [i_1] [i_2] [i_2] = (((arr_26 [17] [i_2] [i_0] [i_0] [i_2] [i_2] [i_2]) / ((((171 ? 165 : var_9)) / (((max(122, 92))))))));
                }
                var_26 = ((~(((var_13 == (arr_4 [i_1 - 1] [i_0]))))));
                var_27 += ((+(((arr_4 [i_1 + 1] [i_1]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1]) : (arr_4 [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
