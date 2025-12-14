/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(3038725497 == 74355680996107072)));
    var_21 *= (max(22649, 9223372036854775807));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, ((min((arr_3 [0]), ((var_6 ? var_18 : 10363246388515447046)))))));
                    var_23 = (arr_6 [i_0]);
                    var_24 += (((var_5 - (arr_0 [i_0]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    arr_16 [i_5] [i_5] = (arr_8 [i_3]);

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 += (((((arr_10 [i_5 + 1] [i_5 + 1]) ? (arr_10 [i_5 + 2] [i_5 + 3]) : (arr_10 [i_5 + 2] [i_5 + 3]))) / ((min((arr_10 [i_5 + 1] [i_5 + 3]), (arr_10 [i_5 + 1] [i_5 + 3]))))));
                            var_26 = (max(var_26, (((((max((-9223372036854775807 - 1), -1))) || ((((arr_2 [i_7] [i_3]) ? var_8 : var_8))))))));
                        }

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_27 [i_3] [i_3] [i_5] [i_5 + 3] [i_6] [i_6] [i_5] = (((min((!var_19), (var_7 & var_8))) * ((((((min(var_15, (arr_14 [i_3] [i_3] [i_3] [11]))))) <= (~10363246388515447046))))));
                            arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [i_5] = (((!-9) > (((var_16 & var_7) << (((var_18 || (arr_5 [i_3] [i_4] [i_3]))))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_27 ^= ((arr_15 [i_9] [i_6] [i_5 + 1]) ? var_6 : (arr_15 [i_3] [i_6] [i_5 - 1]));
                            arr_32 [i_3] [i_5] [i_5] [i_5] [i_3] = (((arr_21 [i_5 + 1] [i_9 - 1] [i_5]) ^ ((var_2 ? var_14 : var_1))));
                            var_28 = var_17;
                            var_29 = ((((1 ? var_19 : var_16)) ^ ((-(arr_30 [i_3] [i_4] [i_4] [i_5 - 1] [11] [i_9 - 1])))));
                        }
                    }
                    var_30 = ((((((arr_11 [i_5 + 3] [i_5 - 1]) ? (var_6 == var_18) : (!var_1)))) ? (min((max(10363246388515447040, var_2)), (((var_17 || (arr_18 [i_3] [i_4] [7])))))) : -23));

                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        arr_36 [i_5] [i_3] [i_4] [i_4] [11] [i_10 - 2] = ((((~((var_6 ? (arr_29 [i_5] [i_4] [i_10] [i_5] [i_4] [i_10]) : var_18)))) % ((((!(arr_7 [i_3] [i_4]))) ? (!137) : (arr_14 [i_3] [10] [i_3] [i_3])))));
                        var_31 = var_9;
                        var_32 = (arr_2 [i_5] [i_3]);
                    }
                }
                var_33 = (min(((var_3 * ((var_7 ? var_12 : 124)))), ((-(((arr_1 [i_3] [i_4]) ? var_0 : (arr_10 [i_3] [i_3])))))));
                var_34 = (!var_8);
                arr_37 [1] [1] [i_4] = ((~(~var_6)));
            }
        }
    }
    #pragma endscop
}
