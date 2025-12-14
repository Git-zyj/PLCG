/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(var_11 / var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (~-var_9)));
                arr_7 [i_1] = var_5;
                var_21 += ((((max(var_16, -var_7))) & -var_12));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_22 += (~(((!(((arr_4 [i_0] [i_2]) < var_16))))));
                    var_23 = var_11;
                    var_24 = ((!(arr_6 [i_1] [i_1] [i_2])));
                    var_25 = (((var_0 ? (~var_12) : (arr_2 [i_0] [i_0]))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    var_26 = ((((((~(arr_0 [i_3 - 2]))) + 2147483647)) << (((arr_1 [i_1]) - 120))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_27 &= (-(arr_11 [i_3] [i_3] [i_5] [i_3 - 3]));
                                var_28 = (((arr_6 [i_1] [i_4] [i_4]) > var_15));
                                var_29 = ((((arr_11 [i_5] [i_1] [i_1] [i_0]) ? (arr_12 [i_0] [i_1] [i_1] [i_1] [i_0]) : var_1)));
                            }
                        }
                    }
                    var_30 = (arr_6 [i_1] [i_0] [i_3 - 2]);
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_25 [i_1] [i_1] [i_6] [i_6] [i_6] = (~var_0);
                                arr_26 [i_0] [i_1] [i_6] [7] [3] [i_8] = ((((((var_9 << (var_15 - 16858))) >= var_6)) && ((((((min((arr_0 [i_1]), var_18)) + 9223372036854775807)) >> (-var_8 + 545126029))))));
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] [i_1] [i_1] = ((max((arr_22 [i_0] [i_0] [i_1] [i_1] [i_6] [i_6] [i_6]), (arr_22 [i_0] [i_1] [i_6] [i_6] [i_1] [9] [i_0]))) << (((~var_1) - 7656949101502927910)));
                }
            }
        }
    }
    var_31 = var_15;
    #pragma endscop
}
