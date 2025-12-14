/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((~436479347) <= 150);
        arr_3 [i_0] [i_0] = 64706;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_2] [i_1] = ((13275963198249383777 < (arr_5 [i_1] [i_1])));
            arr_10 [i_1] [i_2 + 2] [i_2] = 2023431489;
            arr_11 [i_1] [i_2] [i_2] = (arr_4 [i_1] [0]);
            arr_12 [i_1] = ((18117590733584874523 * (arr_4 [i_2 + 2] [i_2 + 1])));
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_16 = (min(var_16, var_13));
            var_17 = (min(var_17, ((min((arr_6 [2] [i_3]), (((~(arr_14 [i_1] [2])))))))));
            var_18 = (min(var_18, ((2023431495 >> (1240090955 - 1240090950)))));
            var_19 = (min(var_19, var_8));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_20 = (!var_3);
                        arr_23 [i_1] [i_1] [i_1] = ((((~var_5) ? var_0 : (~2207405375))) > (((arr_6 [i_1] [i_3]) ? ((63 - (arr_5 [i_1] [i_1]))) : (arr_5 [i_1] [i_3 - 1]))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_35 [i_1] [i_6] [i_7] [i_1] [i_9] = ((~(((!(arr_1 [i_7]))))));
                            var_21 = (((~18117590733584874517) - var_3));
                            var_22 = (min(var_22, (!53074)));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_39 [i_1] [1] [1] [1] [i_10] = ((var_13 ? (arr_31 [i_6 + 1] [i_1]) : 42870));
                            arr_40 [10] [i_8] [i_1] [i_6] [i_1] = (((!5041144576890623270) ? (arr_30 [i_1] [i_6] [i_1] [i_6 + 2]) : var_6));
                            var_23 = (min(var_23, (((~(arr_18 [i_6 + 1] [i_6 - 1] [i_6 + 3]))))));
                        }
                        arr_41 [i_6] [i_6 + 3] [i_7] [i_1] = (arr_29 [i_1] [i_1]);

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_44 [i_1] [i_6] [i_7] [i_7] [i_8] [i_1] = (arr_26 [i_1] [i_1] [i_1]);
                            var_24 = (min(var_24, (var_3 && 228559509)));
                            arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_28 [i_1] [i_1] [i_1] [i_11]) ? var_11 : 3875176254));
                            var_25 = (arr_8 [i_1]);
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_26 = (var_13 && var_0);
                            var_27 = (((~(arr_43 [i_6 + 3] [i_6 + 3] [i_6 - 1]))));
                            var_28 = ((-3875176284 <= (~203)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
