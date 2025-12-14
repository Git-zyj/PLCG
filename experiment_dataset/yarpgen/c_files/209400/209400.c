/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = ((((arr_6 [i_0] [i_3]) ? (arr_6 [i_3] [i_1]) : 1)));
                            var_20 = ((var_18 ? var_5 : var_3));
                            var_21 -= ((~(((arr_0 [i_0]) % (arr_0 [i_0])))));
                        }
                    }
                }
                var_22 |= (arr_5 [i_0] [i_0] [i_0]);
                var_23 = (((((var_1 | (arr_0 [i_0])))) ? (((((arr_0 [i_1]) && (arr_0 [7]))))) : (((arr_0 [i_0]) | (arr_3 [i_1])))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 = (i_5 % 2 == zero) ? ((((arr_3 [i_0]) >> (((arr_15 [i_5]) - 85))))) : ((((arr_3 [i_0]) >> (((((arr_15 [i_5]) - 85)) + 121)))));
                                var_25 = ((var_18 | ((((arr_4 [i_0] [i_5 + 2] [i_0]) ? (arr_15 [i_5]) : ((-(arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_16;

    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        var_27 = (min((((!(((arr_22 [i_7]) != (arr_21 [5] [i_7 + 2])))))), -var_4));
        var_28 = (arr_22 [i_7 + 1]);
        var_29 |= ((((((~var_18) + (((var_16 ? var_14 : var_2)))))) && (1 * 5096)));
        var_30 = var_18;
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_31 = var_12;
        var_32 = (arr_11 [2] [i_8] [i_8]);
        var_33 = ((((60439 >> var_11) ? ((min((arr_7 [i_8]), var_6))) : (arr_6 [i_8] [1]))));
    }
    var_34 -= ((var_9 * (-44737426 / var_16)));
    #pragma endscop
}
