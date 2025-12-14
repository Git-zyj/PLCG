/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max(var_9, ((((min(var_6, 10)) > var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (min(var_12, ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] |= ((var_1 ? var_5 : -11));
        var_13 -= ((0 ? 1 : -1));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = ((1 ? 0 : 48));
        arr_6 [i_1] [i_1] = (arr_4 [i_1]);
        var_15 -= ((((max(var_5, var_6))) ? (arr_1 [i_1] [i_1]) : var_2));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_16 = ((((((arr_9 [i_2] [i_2] [i_2]) ? var_8 : 5867073575256118805))) ? (arr_16 [i_4] [i_4] [i_4] [i_4 + 1]) : var_8));
                        arr_17 [i_1] [i_2] [i_2] [i_4] = (!(arr_11 [i_4] [i_4 + 1] [i_4 - 2] [i_4]));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_2] [i_2] [i_2] [i_5 - 1] = ((3857462169556976781 ? (arr_16 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) : ((var_8 * (arr_13 [i_5])))));
                        var_17 = (((arr_11 [i_1] [i_2] [i_2] [i_1]) ? (arr_18 [i_5] [i_5] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 + 1]) : var_7));

                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            arr_26 [i_2] |= (((arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_12 [i_5 - 2] [i_5 - 2] [i_6] [i_6 + 1]) : (arr_3 [i_5 - 2])));
                            arr_27 [i_6] [i_6] = 1724526797;
                        }
                        var_18 = ((3 ? 3 : (arr_5 [i_2] [i_1])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_34 [i_1] [i_2] [i_7] [i_3] [i_7] [i_8] [i_8] = ((var_6 % (arr_8 [i_1] [i_1])));
                                var_19 = (max(var_19, (((var_3 ? (arr_23 [i_1] [i_2] [i_1] [i_7] [i_8]) : (arr_23 [i_8] [i_1] [i_3] [i_1] [i_1]))))));
                                arr_35 [i_1] [i_2] [i_7] [i_7] = ((((var_5 ? var_10 : (arr_8 [i_2] [i_2]))) | ((-(arr_8 [i_1] [i_3])))));
                                var_20 += (((((arr_3 [i_3]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? var_9 : (((min((arr_22 [i_1] [i_1] [i_2] [i_3] [i_7] [i_8]), (arr_22 [i_1] [i_2] [i_3] [i_7] [i_2] [i_8]))))));
                                var_21 = ((((((arr_12 [i_8] [i_2] [i_3] [i_2]) ? (~252) : (arr_30 [i_1] [i_1] [i_1] [i_1])))) ? var_6 : var_0));
                            }
                        }
                    }
                    arr_36 [i_1] [i_2] [i_1] [i_1] = ((var_9 ? (((var_9 ? -1396233560 : (arr_10 [i_1])))) : ((-(((arr_31 [i_1] [i_3] [i_3]) ? (arr_8 [i_2] [i_3]) : 81))))));
                    arr_37 [i_1] [i_1] [i_2] [i_3] = ((((!(arr_0 [i_3] [i_1]))) ? var_7 : (!var_6)));
                }
            }
        }
    }
    #pragma endscop
}
