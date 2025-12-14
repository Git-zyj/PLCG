/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((!var_7) ? (var_0 + var_3) : -var_10)));
    var_12 = ((((((var_0 ? var_3 : var_2)))) - (((!((max(var_4, var_7))))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_2 [i_0 - 1]) > ((((((arr_0 [i_0]) * (arr_2 [i_0])))) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 + 1])))));
        arr_4 [i_0] = (((869950141 & 1) > (arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_13 = (arr_2 [i_0 + 1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_4] = (arr_13 [1] [i_1 - 1]);
                            arr_15 [5] [i_3] = -926811709;
                            arr_16 [i_3] [i_1] [i_1] [i_1] [i_2] [0] = (((arr_7 [i_2]) ? (((((arr_11 [i_3]) < (arr_6 [i_1] [i_1]))))) : (arr_1 [i_0 - 1] [i_0 - 2])));
                            var_14 = (((arr_0 [i_2]) ? (arr_13 [i_0] [i_1]) : (arr_5 [i_3])));
                        }
                    }
                }
            }
            var_15 = ((((((arr_2 [i_0]) * (arr_2 [i_1])))) ? (arr_12 [i_1] [i_0] [i_0] [i_1 + 1] [i_0 + 1]) : (arr_7 [i_1 + 1])));
            arr_17 [3] [i_1] [i_1 + 1] = ((!(arr_0 [i_0 - 1])));
        }

        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            var_16 = (((((((~(arr_9 [i_0] [i_5] [i_0]))) << (((arr_12 [i_0] [i_0] [i_0] [i_5] [i_5]) - 6359960388563064986))))) ? ((((min((arr_2 [i_5]), (arr_9 [i_0] [i_0] [i_5])))) ? (arr_5 [i_0 + 1]) : (((arr_2 [i_0 - 2]) & (arr_9 [i_0] [i_0] [i_5]))))) : (((arr_19 [1] [i_5]) << (arr_19 [i_5] [i_5])))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_5] [i_6 + 1] [i_7] = (arr_1 [i_5] [i_7]);
                        var_17 *= ((!(arr_9 [i_0 + 1] [1] [i_0 - 1])));
                        var_18 = ((~(arr_21 [i_0] [i_5] [i_7] [i_0])));
                    }
                }
            }
            arr_26 [i_0] [i_5] = ((!((max((((arr_8 [i_0] [i_0] [i_5] [i_0 - 1]) ^ (arr_18 [i_5] [i_0] [i_0]))), (((arr_7 [i_0 - 1]) ? (arr_9 [i_5 + 2] [i_0] [3]) : (arr_5 [i_0]))))))));
            arr_27 [i_0 + 1] [i_5 + 1] [i_5] = ((((((arr_8 [6] [i_0] [i_0] [1]) - (arr_9 [i_5] [i_0] [i_0 - 2])))) ? (((((arr_9 [i_0 - 1] [i_5 - 2] [i_5]) + 2147483647)) >> (arr_20 [i_0]))) : (((arr_6 [i_5] [i_0]) % (arr_8 [i_0 - 2] [i_5] [i_0] [i_0])))));
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        arr_30 [i_8] = (((arr_29 [i_8 - 1]) <= (arr_28 [i_8 - 1] [i_8 - 1])));

        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            var_19 = (((~(arr_28 [7] [i_8]))));
            var_20 = (arr_28 [i_9 + 1] [i_9 + 3]);
        }
        var_21 = (((arr_29 [1]) | (arr_33 [i_8 - 1] [i_8 - 1])));
        arr_34 [i_8] = ((1 ? 1718245509958853394 : 1));
    }
    var_22 = (var_3 % var_5);
    #pragma endscop
}
