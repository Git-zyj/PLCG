/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 = 2229259230;
        arr_4 [i_0] [i_0] = (((((arr_0 [i_0]) ? 2229259230 : 0)) & (118 + -119)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_20 *= (-(((((((arr_1 [i_1]) < (arr_3 [i_1] [i_1]))))) - ((var_13 >> (((arr_6 [i_1]) + 1534143217)))))));
        var_21 = (max((((arr_3 [i_1] [5]) & (((arr_6 [i_1]) + (arr_7 [i_1]))))), (arr_2 [i_1])));
        var_22 = (max(var_0, ((1 | (-9223372036854775807 - 1)))));
        var_23 = (max((arr_1 [i_1]), (((arr_0 [i_1]) ? (max((arr_3 [i_1] [i_1]), (arr_6 [i_1]))) : (!18446744073709551612)))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_24 *= (((((arr_3 [i_2] [i_2]) / (arr_3 [i_2] [i_2]))) * (arr_0 [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_25 = (-2281388174664316683 ^ 18446744073709551596);
                        var_26 = (max(var_26, (arr_18 [i_2] [i_4] [i_2] [i_2])));
                        arr_20 [i_5] [i_5] = (((arr_14 [i_5] [i_2]) / var_2));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_5] [i_5] = 18446744073709551614;
                            var_27 = ((arr_14 [i_2] [i_3]) & (arr_5 [i_3]));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_28 = ((51 ? 10629212273691071280 : (arr_1 [i_4])));
                            var_29 = (((arr_24 [i_7] [i_5] [i_4] [i_3] [i_3] [i_3] [i_2]) ? ((-(arr_22 [14] [i_2]))) : (((var_14 ? (arr_27 [i_2] [i_2] [i_2] [i_2] [i_2]) : var_4)))));
                            var_30 = (arr_10 [0] [i_2]);
                        }
                        for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_31 -= (((144 <= (arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [4]))));
                            var_32 -= (19213 / 1);
                            arr_32 [i_2] [i_5] [i_4] [i_5] [i_5] = (((arr_31 [1] [i_8 - 2] [i_8] [i_8 - 2] [i_8 - 2]) / -var_10));
                        }
                        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_5] = (10629212273691071299 || 15629290887662311016);
                            var_33 = (max(var_33, (((var_12 ? (0 & 17104768286258314059) : var_17)))));
                        }
                    }
                }
            }
        }
    }
    var_34 -= ((2229259208 ? (159 < var_1) : 6293633217569090498));
    #pragma endscop
}
