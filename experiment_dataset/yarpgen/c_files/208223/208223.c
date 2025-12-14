/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 27093;
        arr_4 [i_0] = ((((max((var_1 / 1), var_1))) ? (max(((1 ? var_7 : 4)), ((((arr_0 [i_0]) ? 4250398776 : 511))))) : ((((arr_0 [i_0]) ? 4 : 1)))));
        arr_5 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((17529460237877296370 ? 2829796329 : -1670583475)) : ((1 ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        arr_6 [i_0] = (max((max(var_2, ((var_7 ? 15985 : 65535)))), ((max(1, 1)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_10 [i_1] = (((((((var_2 - (arr_1 [i_1])))) ? (arr_9 [i_1] [i_1]) : (arr_1 [i_1])))) ? (max((arr_2 [i_1]), (((17529460237877296370 ? 1506994632 : 0))))) : (((65535 ? (arr_7 [i_1] [i_1]) : ((var_9 ? var_10 : (arr_1 [i_1])))))));
        arr_11 [i_1] = (min(((((min(var_3, 65519))) ? var_7 : var_11)), ((max((arr_8 [i_1]), (arr_8 [i_1]))))));
        arr_12 [i_1] = (max(((((((65535 ? (arr_8 [i_1]) : 1))) ? var_11 : ((min((arr_1 [i_1]), 32767)))))), (arr_0 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_25 [i_2] [i_3] [0] [i_3] = (((((44568520 ? 0 : 53706016))) ? (arr_8 [i_2 + 1]) : ((65535 ? (arr_22 [i_2] [i_2] [10]) : 10469))));
                        arr_26 [i_3] [i_3] [i_2] [i_3] [i_3] [0] = (((arr_23 [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2] [i_2 - 1] [i_2]) ? (arr_23 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 2] [i_2]) : (arr_8 [i_2 - 1])));
                        arr_27 [i_2] [i_3] [i_4] [i_2] = (((arr_2 [i_2 + 1]) ? (arr_7 [i_2 + 2] [i_2 + 1]) : ((var_3 ? (arr_18 [i_2]) : 141))));
                        arr_28 [2] [i_3] [2] = (1 + 1);
                    }
                }
            }
        }
        arr_29 [1] = (443973382 == (arr_13 [i_2] [6]));
    }
    var_12 = var_7;
    #pragma endscop
}
