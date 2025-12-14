/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = ((~(((arr_7 [i_1 - 2] [i_2]) ? var_2 : (arr_5 [i_1 - 2] [i_1])))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_20 = (max((~-63), (min(((-61 ? (arr_7 [i_3] [1]) : 62)), (((63053 || (arr_3 [i_3] [i_1] [7]))))))));
                        arr_10 [3] [i_1] [i_1] = (min((((!(arr_0 [i_1 + 1] [i_1 + 1])))), ((~(arr_2 [i_1 + 1] [i_1 + 1])))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_1] = var_2;
                            var_21 = (arr_2 [i_2] [3]);
                        }
                        var_22 = (((arr_5 [i_1] [i_1]) / ((((var_2 ? 63 : (arr_3 [i_0] [i_2] [i_3])))))));
                        var_23 = (min(((max(-23, (arr_6 [i_2] [i_2])))), (arr_2 [11] [i_3])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [4] = 12449;
                        var_24 *= 1170703578;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_25 ^= (((~-var_5) ? (61 <= var_14) : (((min((arr_8 [i_6] [i_6] [i_2] [i_0] [i_1] [i_6]), 53087))))));
                        arr_21 [i_0] [i_1] [i_1] [i_6] = (arr_15 [i_0] [15] [i_0] [i_0] [i_0]);
                    }

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        var_26 = (max(var_26, 1120975755));
                        var_27 = ((!(((~(arr_11 [i_1] [i_1] [i_2] [i_7] [i_7]))))));
                    }
                }
            }
        }
    }
    var_28 = ((!(((~(min(8252451865397031386, var_16)))))));
    var_29 = ((((((var_13 ? var_6 : 18446744073709551615))) ? (max(10194292208312520224, var_14)) : ((53087 ? var_6 : var_6)))));
    #pragma endscop
}
