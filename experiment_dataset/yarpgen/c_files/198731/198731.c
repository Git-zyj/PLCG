/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = 28;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_12 = ((!(((var_8 ? 7402 : var_0)))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = -2308143934254909379;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_13 |= (((arr_8 [i_5] [i_0 - 1] [i_0 - 1]) || (arr_13 [i_0] [i_0] [i_5])));
                                arr_20 [i_0] [i_1] [i_3] [i_0] = (max((max((arr_9 [i_3] [i_1 - 1]), (arr_8 [i_0] [i_3] [i_5]))), (max((arr_9 [i_0 + 3] [i_0 + 3]), (arr_9 [i_0 + 1] [i_0 - 1])))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_0] [6] = ((240 & (((1339638105 / (arr_9 [i_0] [i_0]))))));
                    arr_22 [i_0] [i_1] [i_0] = (min(((((-(arr_6 [i_3] [i_3] [i_3]))))), ((var_0 ? (arr_5 [i_0 + 2] [i_0 + 3] [i_1 + 3]) : (arr_4 [i_0 + 1])))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_26 [i_0] [i_0] = 18;
                    var_14 = ((((arr_15 [11] [11] [i_6] [11] [i_6]) ? ((-(arr_18 [i_0] [i_0] [i_1 - 2] [i_6] [i_6]))) : (!var_3))));
                    var_15 = (max(var_15, (((((9489643353062885828 <= (65535 == var_8))) ? ((((((~(arr_12 [12])))) ? (arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 3]) : (arr_24 [i_0] [i_1] [i_6])))) : (min(3773963938, (((arr_6 [i_0] [i_0] [i_6]) - 6151802999416020183)))))))));
                    arr_27 [i_0] [i_0] = 0;
                }
                var_16 = (min(var_16, (((!(((((arr_18 [i_0] [12] [i_0 + 3] [i_0] [1]) || 54)))))))));
            }
        }
    }
    var_17 ^= var_4;
    #pragma endscop
}
