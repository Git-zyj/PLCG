/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_3 == var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_21 -= (~var_13);
                var_22 += (((((var_14 ? (arr_0 [i_0] [i_1 - 1]) : 243))) > (arr_3 [4] [4])));
            }
        }
    }
    var_23 = ((var_12 | ((((243 && (((0 ? 13 : var_1)))))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_24 = ((((((min((arr_4 [12]), (arr_7 [i_2])))) | (((arr_7 [i_4]) / (arr_3 [10] [i_2]))))) > (arr_2 [i_3])));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_19 [i_2 - 1] [i_3] [i_2] [i_4] [i_5] [i_5] [i_6] = 12;
                            var_25 = ((((arr_0 [i_5] [i_3]) | (arr_16 [i_2] [i_3] [i_4] [i_4] [i_2] [7] [i_6]))));
                            arr_20 [i_2] = (var_0 / (arr_10 [i_2 + 1] [i_2] [i_5 + 2]));
                        }
                        arr_21 [i_2] [i_3] [i_4] [i_4] [i_5] = (((((var_7 > (arr_3 [i_2] [i_2])))) == (arr_16 [i_2 + 1] [i_5] [i_5] [3] [i_2] [i_5 + 1] [i_5])));
                        arr_22 [i_2] [i_3] [i_2] [i_2 + 2] [i_4] [i_5] = ((~((var_9 ? var_8 : var_4))));

                        for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, ((((arr_10 [i_2 + 2] [i_7] [i_2 + 1]) == (arr_17 [i_2] [i_2] [12] [i_2 + 2] [i_2]))))));
                            arr_25 [i_2] [i_3] [i_2] [10] [9] [1] = (((arr_14 [i_2] [i_5 - 1] [i_2] [i_5 + 2] [i_2 + 2]) | (arr_24 [i_7 - 1] [i_2 + 2])));
                            arr_26 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] [i_7] = ((-6239176538993544143 ? (arr_17 [i_2] [i_2 + 2] [i_2] [i_5 - 1] [i_7 - 2]) : (arr_12 [i_2] [i_2 + 2] [i_5 + 1] [i_7 - 1])));
                        }
                        for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_2] [i_3] [i_3] [i_2] [i_8] = 12251389522220072103;
                            arr_30 [i_2] [i_5 - 1] = (10103349616559656932 / -108);
                        }
                        var_27 = ((((var_6 && (arr_7 [i_5]))) ? (arr_12 [i_2 - 1] [i_5] [i_5 + 1] [i_5 + 1]) : -92));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_35 [i_2] [1] [1] = var_16;

                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            arr_38 [i_2 + 1] [i_2 + 1] [i_4] [i_2] [i_4] [i_4] = ((var_0 ? (arr_3 [i_2] [i_2]) : (~12103)));
                            arr_39 [i_2] [i_3] [i_3] [i_9] [i_10 - 1] [i_2] = var_0;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_42 [i_2] = (arr_14 [i_2 - 1] [17] [i_2] [i_2] [i_11]);
                            var_28 *= (~var_0);
                            var_29 = (arr_0 [i_4] [i_3]);
                        }
                    }
                    var_30 = 253;
                }
                arr_43 [i_2] [i_3] = (((max((arr_7 [i_2 + 2]), (arr_2 [i_2 + 2])))) ^ (max(75, var_15)));
                arr_44 [i_2] [i_3] = (((((arr_8 [i_2]) > ((2705089738766307480 ? (arr_1 [i_2 - 1] [19]) : -5221997105031320896)))) ? (arr_40 [i_2] [2] [i_3] [i_3] [i_2]) : ((-(~0)))));
                arr_45 [i_2] [i_2] [0] = var_19;
            }
        }
    }
    #pragma endscop
}
