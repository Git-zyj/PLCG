/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((max(120, 2799051843)))) || ((min(var_1, var_8)))));
    var_11 = var_5;
    var_12 = (((var_1 ^ 18) ? 10675947664866735475 : 2799051837));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = 2799051831;
                    var_13 = ((0 ? (arr_4 [i_0] [i_2]) : (((arr_6 [i_2] [i_2 + 1] [12]) ? (arr_6 [i_2] [i_2 + 1] [i_2]) : (arr_6 [i_2] [i_2 + 1] [i_2])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_3] = (arr_3 [i_1] [i_1]);
                        var_14 = (min((min(-7441669806558627680, (min(-8883316830195611487, -1357436403)))), ((min((max(27, 77)), 101)))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [15] = (arr_6 [i_0] [i_0] [i_0]);
                        arr_14 [18] = var_0;
                        arr_15 [i_4] [10] [i_0] [i_0] [i_0] [i_0] = max(var_1, 1371204673);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_15 = (min(var_0, var_4));
                        arr_20 [i_5] [i_5] [i_2 + 2] [i_1] [i_0] = (max((arr_19 [i_0] [16] [3] [i_5] [i_2 - 2]), (max(((var_8 << (var_2 + 118))), (((var_4 ? (arr_6 [12] [i_0] [i_0]) : (arr_3 [i_5] [i_0]))))))));
                        var_16 = ((((((arr_18 [i_2] [i_2] [i_1] [i_0]) % var_5))) ? ((min((arr_16 [18] [i_5] [i_2] [i_1] [i_1] [16]), ((max(1, var_7)))))) : (min((min(-9223372036854775805, var_9)), ((min((arr_5 [i_1] [i_2 + 1]), var_3)))))));
                        var_17 = (min(var_2, ((max((arr_2 [i_0] [i_2]), (arr_9 [i_1] [i_0] [4] [i_5]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_26 [i_7] [i_7] [i_2] [i_6] [i_7] = min(((~(((arr_21 [i_0] [i_0] [i_7]) ? (arr_11 [i_0]) : var_5)))), ((((253 >= var_6) == (((arr_9 [i_0] [i_7] [i_0] [i_0]) ? var_6 : var_4))))));
                                arr_27 [i_7] [i_2 + 2] [i_6] = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_33 [i_1] [1] [1] [1] [i_9] = (((((((var_2 & (arr_24 [i_0] [i_0] [i_2] [i_2] [i_0] [2] [i_9])))) + (arr_5 [i_0] [i_0]))) ^ (((max((14922207235276529533 || 255), (!1979725325)))))));
                                arr_34 [i_9] [i_1] = (((31 % (arr_8 [i_0] [i_0] [i_1] [i_2] [i_8] [5]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((1979725319 == ((var_8 ? ((max(-1979725298, 1371204673))) : 3560681837390634671))));
    #pragma endscop
}
