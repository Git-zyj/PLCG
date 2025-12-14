/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = ((((((var_3 ? var_2 : 89)) ^ (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((!((((((arr_1 [0]) - (arr_1 [i_0]))) ^ ((((arr_0 [i_0] [i_0]) ^ 123))))))));
        var_12 = arr_1 [i_0];

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_1] = var_0;
                        }
                    }
                }
            }
            arr_14 [i_0] [i_1] [i_0] = ((!(min((arr_8 [i_1 + 1] [i_1] [i_1] [i_1 + 2]), ((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))))));
            var_13 = (min(var_13, (((((min(var_1, -123)) - var_5))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] [9] [i_5] = ((((((arr_10 [i_0] [i_0] [i_5]) ? var_4 : (var_7 != 1)))) ^ ((-2131181625358585679 ? ((((arr_8 [i_5] [i_5] [i_5] [i_0]) ? 123 : 62138))) : var_10))));
            var_14 = (((arr_17 [i_5] [i_5] [i_5]) ? (arr_1 [i_5]) : ((min((((arr_17 [i_5] [i_5] [i_5]) ? (arr_0 [i_5] [i_0]) : (arr_0 [i_5] [i_0]))), ((9 ? 9 : (arr_8 [i_0] [i_5] [i_5] [i_5]))))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_0] = 44420;
            var_15 *= var_2;

            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                var_16 = (!(((-((~(arr_0 [11] [11])))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_30 [i_8] [i_9] = ((!(arr_10 [i_7 - 1] [i_9 + 2] [i_9])));
                            var_17 = var_2;
                        }
                    }
                }
                var_18 = (((max(-5181788452253173627, ((((arr_16 [i_0] [i_6] [i_0]) ^ (arr_5 [i_0] [i_6] [i_6] [i_6])))))) ^ ((((1 ? var_8 : var_2))))));

                for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    arr_33 [i_10] = (arr_28 [2] [i_6] [i_7] [i_6] [i_6] [2]);
                    var_19 = (((((!((min(1, (arr_32 [i_0] [i_10] [i_6] [i_7] [i_10] [i_10]))))))) - var_4));
                    arr_34 [i_10] [i_6] [i_7] [i_7] [i_10] = 3403;
                }
                for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    arr_37 [i_11] [i_11] [i_7] [i_6] [i_0] [i_0] = var_5;
                    var_20 ^= ((((max(((255 ? 1 : 1)), (min(var_7, (arr_17 [i_11 + 1] [i_11] [i_0])))))) ? (((arr_36 [i_7 + 1] [i_11 + 1] [i_11 + 2]) ? (arr_36 [i_7 + 2] [i_11 + 2] [i_11 - 1]) : (arr_36 [i_7 + 2] [i_11 + 2] [i_11 + 1]))) : (arr_35 [i_0] [i_6] [i_6] [i_6] [i_7] [i_11])));
                    arr_38 [i_0] [i_0] [i_0] [i_0] = (((arr_17 [i_7 + 1] [i_7 + 1] [i_0]) ? ((~(arr_36 [i_7 - 1] [i_7 - 1] [i_11 - 1]))) : ((((min(var_2, (arr_19 [i_6] [i_7] [i_11 - 1])))) ? (~var_6) : (min((arr_15 [i_0] [i_0] [i_0]), (arr_32 [i_0] [i_0] [i_7] [i_0] [i_7 + 1] [i_11 - 1])))))));
                    var_21 = (((((-((-(arr_21 [i_0] [i_0])))))) ? ((~(((arr_19 [i_7] [1] [1]) ? 5181788452253173627 : -7392536348221421569)))) : (arr_35 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 1])));
                }
                for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    arr_43 [i_0] [i_6] [i_7] [i_12] = ((-(~var_1)));
                    var_22 = (var_0 + ((-(arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
                    var_23 = (((-(!1))));
                    var_24 = (min(var_24, (((((max((arr_40 [i_12] [i_12 + 1] [i_12] [i_12] [i_12] [i_12 - 1]), (arr_28 [i_12] [i_12 + 1] [i_12] [i_12] [20] [i_12 - 1])))) ? ((((arr_23 [i_12] [i_12 + 1] [i_12] [i_12]) ? (arr_41 [i_12] [i_12 + 1] [i_12] [19]) : (arr_41 [i_12] [i_12 + 1] [i_12] [i_12])))) : (((arr_28 [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1]) - var_3)))))));
                    var_25 = (arr_19 [i_6] [i_6] [i_6]);
                }
            }
        }
    }
    var_26 = (max(var_2, var_5));
    #pragma endscop
}
