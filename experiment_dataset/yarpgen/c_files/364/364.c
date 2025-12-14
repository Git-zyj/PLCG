/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_2] [i_2] [i_0] = 0;
                    arr_9 [i_2] [i_2] [i_2] [i_0] = (max(((~(((arr_1 [i_2]) ^ var_3)))), -1));
                    var_13 = (max(var_13, (((arr_0 [i_1] [i_0]) ? (((((min((arr_2 [i_0] [i_2]), var_5))) ? (((arr_5 [i_0] [i_1] [i_2]) ? var_12 : 2015040013)) : -1476854395))) : ((25769803776 ? 1813332888 : ((16 ? (arr_4 [0] [15]) : (arr_5 [i_0] [i_1] [i_2])))))))));
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_14 = var_4;
                        var_15 -= (((8191 | 232) ? -1813332888 : var_1));
                        var_16 = (max(var_16, (((arr_2 [i_4] [i_3 - 1]) ? (arr_2 [0] [i_1]) : (arr_2 [i_3 - 1] [i_0])))));
                        var_17 = 3;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = -var_7;
                        var_19 -= (max(48, 36568951));
                        var_20 -= max((~29), (!var_0));
                    }

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_20 [i_6] [i_3] [i_1] [i_0] = max(((((min((arr_17 [i_0] [i_1] [i_3] [i_3] [i_3] [i_1]), (arr_12 [i_0]))) == (arr_19 [i_3 - 1] [i_3 - 1] [i_1])))), (max(var_12, 7)));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_3] [i_3] [i_6] [i_7] = (((((var_7 ? 3683498750 : (arr_18 [i_7] [i_7] [5] [i_3] [2] [3]))) < (((-5186323619343355617 ? 45 : (arr_10 [i_0] [i_1] [i_3])))))));
                            arr_24 [i_0] [i_1] [i_3] [i_6] [i_7] [i_7] [i_3] = -25094;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_21 = (min(var_21, ((max(((~(arr_16 [i_8] [i_6] [i_1] [i_0]))), ((max((~57344), (arr_10 [i_3 - 1] [i_3 - 1] [i_3])))))))));
                            var_22 = (min(var_22, (max((((!(((16382 + (arr_1 [i_0]))))))), (max(((max((arr_3 [i_8] [i_0]), (arr_19 [i_0] [i_3] [i_6])))), (max((arr_7 [i_6] [i_6] [i_6]), 17582093832707015376))))))));
                            var_23 = (~18446744073709551615);
                            var_24 += (var_0 ? (arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (((arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? var_4 : var_10)));
                        }
                    }
                }
                arr_27 [i_0] = ((~((~(arr_21 [i_1] [i_1] [i_0] [i_0] [2] [i_0] [i_0])))));
                arr_28 [1] = (((arr_19 [i_1] [i_0] [1]) < (((((var_4 ? var_5 : (arr_6 [22])))) ? (arr_16 [i_1] [i_0] [13] [i_0]) : -var_5))));
            }
        }
    }
    var_25 = ((0 ? 1919082056650535586 : 5));
    var_26 = (min(var_26, (((((min((~6665719198224532436), (((var_0 ? var_2 : var_4)))))) ? (var_11 & var_6) : (((min(var_9, var_9)))))))));
    var_27 = var_11;
    #pragma endscop
}
