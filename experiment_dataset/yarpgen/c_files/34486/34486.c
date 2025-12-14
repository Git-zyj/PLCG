/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~(~34969))));
    var_14 = ((-(~-var_12)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (-9223372036854775807 - 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_2] [i_0] = ((-(~33)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_19 [i_1] [5] [i_2] [i_1] [5] [i_1] = (!-var_4);
                                arr_20 [1] [i_1] [i_2] = ((-(--1)));
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = ((~(--121)));
                                var_15 = ((-((~(~var_3)))));
                                var_16 = ((-(!var_8)));
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [1] [1] = (!-var_10);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_17 = ((!(!2146913663)));
                    arr_28 [i_0] [i_5] [i_5] = ((-((~(~1098745638)))));
                    arr_29 [i_0] [i_5] [i_6] = ((~((~((~(arr_17 [i_0] [i_5 - 2] [i_5 + 3] [i_5 + 3] [i_5 + 3])))))));
                }
            }
        }
        var_18 &= ((!((((~(-9223372036854775807 - 1)))))));
        arr_30 [i_0] [i_0] = ((!(((~(~var_5))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_19 -= ((-((~(((!(arr_8 [i_7] [6]))))))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_20 -= (--114);
                        var_21 *= ((~((~(~-1098745639)))));
                        var_22 = ((-((~(((!(arr_31 [i_7] [9]))))))));
                    }
                }
            }
        }
        arr_43 [i_7] = (-((-(arr_24 [i_7] [i_7] [i_7]))));
        arr_44 [5] = ((!(((-((~(arr_39 [i_7] [i_7] [i_7] [i_7]))))))));
    }
    var_23 = (-(~-var_1));
    var_24 = ((~(((!(~-10))))));
    #pragma endscop
}
