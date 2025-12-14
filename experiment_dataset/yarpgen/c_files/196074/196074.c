/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((min(((1388779133 ? var_0 : var_9)), (var_6 + var_6))))));
    var_13 &= (min(((((!var_11) << (((var_6 - var_2) - 2667725751))))), (var_7 ^ var_0)));
    var_14 = ((var_10 ? ((5750650811058693115 / (38 | 268435455))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = ((((((arr_5 [i_1] [i_1]) % var_3))) ? (min(var_8, (arr_5 [i_1] [i_0]))) : (arr_5 [i_0] [i_1])));
                arr_7 [i_0] [i_0] = (((((arr_2 [13]) | var_2))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] = (((((arr_6 [i_0] [i_2]) | (arr_6 [13] [i_0])))) && ((min((arr_2 [i_0]), (((!(arr_9 [15] [7] [19] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [23] [i_0] [i_2] [i_3] [i_3] = ((((((((arr_6 [i_0] [i_2]) > var_1))))) | ((((arr_8 [i_0] [i_4] [i_4]) || (arr_6 [1] [8]))))));
                                var_16 = (((((~(((arr_12 [i_0] [i_1] [1]) ? (arr_6 [i_4] [i_0]) : (arr_1 [i_0])))))) ? (((arr_4 [i_0] [i_1]) ^ ((((arr_1 [i_0]) + (arr_11 [i_0] [i_4] [i_2] [i_2])))))) : (!228)));
                                var_17 = (max((max(((-(arr_5 [19] [i_2]))), (arr_5 [i_0] [i_0]))), (((((((arr_13 [i_0] [0]) + (arr_14 [i_4] [i_4] [i_4] [1] [12])))) ? (arr_11 [i_4] [i_3] [1] [i_0]) : (((var_3 <= (arr_14 [i_0] [i_0] [22] [22] [14])))))))));
                                var_18 = arr_9 [i_0] [i_1] [i_2] [i_3];
                            }
                        }
                    }
                    var_19 = (min(var_19, ((((max(((((arr_9 [i_2] [i_1] [i_0] [i_0]) / (arr_8 [8] [i_1] [i_1])))), (min((arr_14 [i_0] [i_0] [i_1] [i_2] [i_2]), (arr_12 [i_0] [i_0] [i_0]))))) * (((((min((arr_6 [i_0] [i_1]), 11327093749733297212))) ? (((((arr_12 [i_0] [i_0] [i_0]) < var_2)))) : (((arr_14 [i_2] [i_2] [i_1] [13] [13]) >> (3406373803 - 3406373780)))))))))));
                    arr_17 [4] &= var_9;
                    var_20 *= (((arr_9 [i_2] [i_2] [i_1] [i_0]) * ((((arr_11 [i_1] [i_2] [i_2] [i_2]) < var_9)))));
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    var_21 = (arr_6 [17] [i_0]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_7] &= (32761 % 9511);
                                var_22 = (((((((((arr_18 [i_0] [i_5] [i_0]) % (arr_23 [i_7] [i_5] [i_1] [i_0])))) ? ((((arr_23 [i_7] [i_5] [i_1] [i_0]) % (arr_6 [i_0] [i_6])))) : (arr_13 [i_0] [i_1])))) ^ (arr_6 [i_0] [i_5 - 2])));
                            }
                        }
                    }
                }
                arr_27 [i_0] = (arr_24 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
