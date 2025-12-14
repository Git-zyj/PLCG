/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_19 &= var_16;
                        var_20 = (arr_4 [i_0]);
                        var_21 = ((min(1, 1)) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0] [i_0]));
                    }

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] = ((var_15 ? ((var_17 ? (((var_7 ? var_2 : (arr_13 [i_0] [i_0] [i_0] [i_4])))) : (((arr_1 [i_0 - 1]) ? 7440337194908469416 : (arr_13 [i_0] [i_0] [i_0] [i_4]))))) : (min(((((arr_1 [i_0]) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_5 [i_2 + 2])))), (arr_4 [i_0])))));
                        arr_15 [i_0] [i_0] = var_2;
                        var_22 = (arr_1 [i_2]);
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_23 = (min(-7440337194908469417, 15589313756566238328));
                        var_24 = (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                    }
                    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_25 = ((((min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_1 - 1] [i_6 + 2])))) ? (((arr_17 [i_0] [i_0] [i_0]) ? (((-2147483647 - 1) ? 1 : -7440337194908469402)) : ((var_17 ? (arr_17 [i_1] [i_1] [i_0]) : (arr_21 [i_0 - 1]))))) : ((min(10, 1)))));
                        var_26 = (min((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : 18446744073709551604)), (((var_16 ? 44 : var_16)))));
                        var_27 = (min((((16799848089013250071 ? 212 : 220))), (min(((1 ? (arr_20 [i_6 + 3] [i_6 - 1] [i_2 + 2] [i_0 - 1] [i_0 - 1]) : var_2)), (arr_4 [i_0])))));
                        var_28 = var_13;
                        var_29 = arr_1 [i_0];
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_2 + 1] [i_1 + 1] [i_0] = ((0 ? (arr_1 [i_0 - 1]) : 0));

                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            var_30 -= (arr_16 [i_7 + 4] [i_7 + 3] [i_7 + 4] [i_7 + 3] [i_8 - 1]);
                            arr_30 [i_0] [i_0 - 1] [i_2 - 1] [i_7 + 4] [i_0 - 1] = ((var_4 ? -9223372036854775786 : (((0 ? var_14 : var_14)))));
                            var_31 = (arr_21 [i_2]);
                            var_32 = (((((1 ? 624211677 : 3918467071))) ? (arr_24 [i_1 + 1] [i_2 - 1]) : 1));
                        }
                        var_33 = (arr_29 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_7 + 4]);
                    }
                    arr_31 [i_2 - 1] [i_0] [i_0] = var_2;
                }
            }
        }
    }
    var_34 = 106;
    #pragma endscop
}
