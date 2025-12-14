/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 -= (3326590872 == 6);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = var_11;
                            var_18 = ((((max(6, 18446744073709551612))) && ((((arr_5 [i_1]) / ((var_12 * (arr_0 [i_3]))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 19;i_6 += 1)
            {
                {
                    var_19 = (min(((((min((arr_14 [i_4] [18] [i_6 + 2]), var_14))) ? (max(204, (arr_11 [i_4]))) : ((((170 != (arr_14 [i_4] [9] [9]))))))), (((-1 ? 59 : 1)))));
                    var_20 = ((~((((arr_19 [i_6] [i_5] [i_5 - 1] [i_5]) || (arr_19 [i_6] [i_6] [i_5 - 2] [i_4]))))));
                }
            }
        }
        var_21 = (min((((-4294967288 ? (((arr_10 [i_4] [i_4 + 3]) ? var_10 : var_3)) : (min((arr_13 [i_4] [i_4]), 4294967273))))), (((18446744073709551608 - 2843674031114170487) ? ((((!(arr_16 [i_4] [13] [i_4] [i_4]))))) : (arr_19 [i_4] [i_4] [i_4] [i_4])))));
        var_22 = ((!((max((arr_10 [i_4] [i_4]), var_9)))));
        var_23 = (-0 < -var_1);
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_24 = ((!((((arr_20 [i_7 + 1] [i_7 - 1]) ? (arr_20 [i_7 - 1] [i_7 + 1]) : (arr_20 [i_7 - 1] [i_7 + 1]))))));
        var_25 *= (max((((arr_21 [i_7 + 1] [i_7 + 1]) ^ 3676309118)), (min(((min(var_5, var_9))), ((~(arr_11 [i_7 + 1])))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((-(((!(-427215866 && 563459332678735766)))))))));
                                var_27 = (arr_12 [i_7]);
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_28 = 6945414040380766865;
                        arr_32 [i_8] [3] [i_9] [i_8] [i_8] = ((var_6 * (!19)));
                        arr_33 [i_12] [i_8] [i_8] [i_9] [i_8] [i_7 + 1] = var_1;
                        var_29 = (min(var_13, (((arr_19 [13] [i_9 + 2] [i_8] [i_7]) ? ((-1 ? 1 : (arr_19 [i_7] [i_7] [i_9] [i_12]))) : (arr_28 [i_9 - 2] [i_8] [i_8] [i_7 + 1])))));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_30 = (arr_22 [i_8]);
                        arr_36 [i_7] [i_7] [i_8] [i_9 - 1] [i_8] [i_13] = (max(((~(((!(arr_30 [i_8] [i_9 - 1] [i_8])))))), 20333));
                    }
                }
            }
        }
        var_31 = (590542139 || 237);
    }
    var_32 |= var_12;
    var_33 += var_2;
    #pragma endscop
}
