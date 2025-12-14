/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = var_19;
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) >> ((max((!31284), (arr_1 [i_0] [i_0]))))));
        var_21 = (max(var_21, ((min((arr_0 [i_0]), ((min(-77, 14159164339150031108))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((!(arr_5 [i_1]))) ? (((arr_4 [i_1]) ? (arr_4 [i_1]) : var_12)) : (arr_4 [i_1])));
        var_22 = ((!(arr_4 [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_23 += ((!((((arr_4 [i_3]) | (arr_4 [i_2]))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_18 [i_5] [i_3] [i_4] [i_5] [i_3] = ((((~(arr_5 [i_2]))) & (!9139501439676498248)));
                                var_24 = 70;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_28 [i_8] [i_8] [i_8] = ((var_4 ? -9139501439676498229 : ((var_13 ^ (arr_9 [i_7] [i_7])))));
                arr_29 [i_7] = ((var_13 ? (arr_19 [i_7] [i_8]) : (arr_2 [i_9])));
            }
            var_25 = (((arr_21 [i_7] [i_7]) ? (arr_21 [i_8] [i_8]) : (arr_21 [i_7] [i_8])));
        }
        var_26 = 80;
        var_27 = (((((max(var_12, (arr_7 [i_7]))))) ? (((!9139501439676498259) << (((min(var_13, var_19)) - 904422900)))) : (!var_1)));
        var_28 = ((~(arr_15 [i_7] [13] [i_7] [i_7] [i_7] [i_7])));
        var_29 = (max(var_29, var_19));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_30 = (arr_24 [i_10] [i_10]);
        var_31 = -var_10;
        arr_32 [i_10] = (i_10 % 2 == zero) ? (((((arr_14 [i_10] [i_10] [i_10] [i_10]) >> (((arr_5 [i_10]) - 739977806)))))) : (((((arr_14 [i_10] [i_10] [i_10] [i_10]) >> (((((arr_5 [i_10]) - 739977806)) - 3217595941))))));
    }
    var_32 = (max(var_32, (((((var_2 ? (min(var_15, var_10)) : var_18)) / var_16)))));
    #pragma endscop
}
