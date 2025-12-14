/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = (max((max(4294967295, ((min((arr_6 [i_2]), 14978))))), (((((max(1, 1))) / ((max((arr_1 [i_2] [7]), 153))))))));
                    arr_9 [i_0] [i_1] [i_2] = min((arr_3 [i_0]), (max((min(25, 2003907752)), ((1 ? 92 : 4294967281)))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_20 = (min(var_20, (((673914537 * (arr_14 [i_4] [i_4] [1] [i_4] [i_0]))))));
                            arr_16 [i_0] [i_2] = ((61082 ? (~105) : ((((arr_15 [i_0] [i_0] [8] [i_0] [1]) || 120)))));
                            var_21 &= (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_4]) ? (arr_14 [i_4] [i_4] [i_2] [i_4] [i_0]) : 1));
                            var_22 *= ((245 ? (~65530) : (arr_5 [i_1] [i_4])));
                        }
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_23 = (((((arr_18 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_18 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5]) : (arr_18 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])))) || ((((min((arr_17 [i_0] [i_0] [i_2] [i_3] [i_2]), (arr_18 [i_0] [i_1] [i_2] [i_3] [1]))) - (arr_18 [i_5 - 1] [i_5] [i_5] [i_2] [i_2])))));
                            arr_20 [11] [i_2] [7] [6] [i_3] [i_5] = (4294967295 >> (((((arr_17 [i_2] [1] [i_2] [i_1] [i_2]) ? (max(1, (arr_5 [i_0] [i_5]))) : (arr_13 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2]))) - 3591813733)));
                        }
                        var_24 = (min(var_24, ((((max((arr_4 [i_0] [i_1] [i_1]), (max((arr_0 [i_2]), (arr_19 [i_0] [i_1] [i_2] [i_1] [i_2]))))) + -1)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_25 = ((1 & (((!(arr_12 [i_0] [i_1] [i_2] [i_2] [i_6]))))));
                        arr_24 [i_0] &= ((((~(arr_0 [i_0]))) % ((25548991 ? (arr_10 [i_0]) : 3483190721))));
                    }
                }
            }
        }
    }
    var_26 = (((((min(var_5, var_4)) ? (min(811776565, var_12)) : var_16))));
    var_27 = (((((var_11 | (var_18 / 1)))) ? (((((max(var_18, var_6)) != var_19)))) : (max((17 | 145), (!var_10)))));
    var_28 = max(6, 1);
    #pragma endscop
}
