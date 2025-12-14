/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max((((var_4 - (arr_7 [i_1] [i_1 + 4] [i_1 + 4] [i_1 + 1])))), ((~(max(-2010579218, 0))))));
                    arr_9 [i_1] [i_1] = ((((min(-0, ((0 ? 0 : (arr_0 [i_1 - 1] [i_1 - 1])))))) ? (min((arr_8 [i_2] [i_1] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_2]))) : ((((29 ? var_15 : (arr_4 [i_1] [i_1])))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_6] [i_0] [i_0] [1] = (min(-2147483647, (((arr_12 [i_5 + 1] [i_4 + 1] [i_3 + 2]) ? ((max(26309, 88))) : (arr_3 [i_3 - 2])))));
                            var_18 = ((((((!(arr_1 [1]))) / ((min((arr_1 [i_6]), (arr_17 [i_0] [i_5] [i_0] [i_0]))))))));
                            arr_21 [i_0] [i_3 + 1] [i_0] [i_5 + 1] [i_5 + 1] [i_6] = ((!(arr_6 [i_0] [i_6] [i_5 + 2] [i_5 - 2])));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_3 + 2] [i_3 + 2] [i_5 + 1] = (min((max((arr_6 [i_0] [i_3] [i_0] [i_5 + 2]), var_9)), (((arr_6 [i_7] [i_0] [i_0] [i_0]) ? (arr_6 [i_3 - 2] [i_4] [i_5 + 3] [12]) : (arr_6 [i_7] [i_3] [i_7] [i_3])))));
                            var_19 = (max(var_19, (((-(min((~11483192080719472509), (arr_7 [i_3] [0] [0] [i_3]))))))));
                            var_20 -= (max((arr_0 [9] [i_4 + 1]), ((-(((!(arr_3 [i_3]))))))));
                        }
                        arr_26 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3] &= min(569851345599371979, -var_6);
                        var_21 = (max(var_21, ((max((((arr_14 [i_3 + 2] [12] [i_3 - 2] [i_3 - 2]) & (((arr_1 [i_0]) << (arr_13 [i_0] [i_3] [i_4 + 2] [i_5 + 2]))))), (((!(arr_23 [i_5] [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_5 + 2])))))))));
                    }
                }
            }
        }

        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_22 |= (arr_0 [i_0] [i_0]);
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_23 = (max((min((arr_6 [i_8 + 1] [i_8] [i_8 + 1] [i_9 + 2]), (arr_6 [i_8 - 2] [i_10] [i_8 - 1] [i_9 - 1]))), ((max((((-2147483647 - 1) ? (arr_0 [15] [i_8 - 2]) : 230)), (max(-30, var_1)))))));
                            var_24 = min(((max(var_15, ((~(arr_30 [i_11] [i_8])))))), (min((arr_32 [i_9] [i_9 - 1] [i_9 - 1] [16] [i_10 - 1] [i_10]), (-9223372036854775807 - 1))));
                            arr_36 [i_0] = ((~((9798453728724217025 ? (arr_34 [16] [16] [2] [16] [i_9 + 3]) : (arr_10 [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 22;i_12 += 1)
    {
        var_25 = arr_38 [i_12] [i_12 + 1];
        var_26 = (min(-6279536954559123889, ((max(-32755, 61457)))));
        var_27 -= (max((arr_38 [i_12 - 1] [i_12 - 1]), (min((arr_37 [i_12 - 1]), (max(569851345599371979, (arr_39 [i_12])))))));
    }
    var_28 += var_5;
    var_29 = (max(var_29, ((max((((((min(var_9, var_0))) ? ((var_2 ? 1 : 65535)) : (!var_13)))), var_16)))));
    var_30 = (!126);
    #pragma endscop
}
