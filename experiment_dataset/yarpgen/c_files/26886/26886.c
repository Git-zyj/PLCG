/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = ((-(((arr_3 [i_0]) - (arr_3 [i_1])))));
                    var_13 = (((-6 & 18446744073709551615) <= (((0 & (arr_3 [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_14 = (max(var_14, (((+(((arr_2 [i_3] [i_3]) + (arr_2 [i_3] [i_4]))))))));

                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    arr_16 [i_3] [2] &= (((!(var_4 ^ -1))) && -var_3);
                    var_15 -= (-5232320481052086725 + -32766);
                    var_16 -= ((-(!86)));
                }
                var_17 = (!32765);

                for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (((-3631578837 + (((arr_18 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6]) * var_8)))))));
                    arr_19 [i_4] [i_4] [i_4] [10] = ((127 & (16 > 7)));
                    var_19 = (i_4 % 2 == zero) ? (((((arr_15 [i_4] [i_6 - 3] [5] [i_4]) << (((arr_15 [i_4] [i_6 + 3] [i_6] [i_4]) - 126)))) << ((((~(arr_14 [i_4] [i_6 - 1] [i_6 - 3]))) - 13646154910240944790)))) : (((((arr_15 [i_4] [i_6 - 3] [5] [i_4]) << (((((arr_15 [i_4] [i_6 + 3] [i_6] [i_4]) - 126)) + 91)))) << ((((((~(arr_14 [i_4] [i_6 - 1] [i_6 - 3]))) - 13646154910240944790)) - 2852494679073635876))));
                    arr_20 [i_4] = ((((1 & ((~(-32767 - 1))))) >= ((((arr_15 [i_4] [i_6] [i_6 - 1] [i_6 - 3]) < 32767)))));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_20 = (((arr_12 [i_4]) << 0));
                        var_21 = -var_11;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_25 [6] [6] [6] [i_6] [i_8] [i_4] = (((!var_10) != (((-25 && (arr_17 [i_4] [i_4]))))));
                        arr_26 [i_3] [i_4] [i_8] [i_4] = ((((((arr_14 [i_4] [i_6 - 2] [i_6 - 3]) >= var_7))) & (arr_13 [i_4])));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_22 = ((-((~(arr_23 [i_6 + 2] [i_6 + 2] [i_6] [i_10])))));
                            var_23 = ((606294913 < (((!19176) ^ var_10))));
                        }

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_24 = (((((~(arr_14 [i_4] [i_6 + 1] [i_6 - 2])))) && (((var_9 | -1073741824) > var_3))));
                            arr_35 [i_3] [i_4] [i_6] [i_9] [i_11] = ((!-16) % ((~(arr_28 [i_3] [1] [i_6] [i_3]))));
                            var_25 = (min(var_25, ((((3688672382 & var_3) & ((((-127 - 1) ^ 0))))))));
                        }
                    }
                }
                for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_3] [i_4] [i_4] [i_3] = ((((var_8 & (arr_3 [i_3]))) >> (5503659810608338237 - 5503659810608338235)));
                        var_26 = (min(var_26, (var_10 && 19176)));
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_27 = (((~25) ^ ((248 << (var_10 - 1394488962)))));
                        arr_45 [i_4] [i_14] = (((!1) ^ (((var_11 - 244) - (arr_22 [i_4] [9] [i_12 - 2] [i_12 + 1] [9])))));
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                    {
                        arr_48 [i_4] [i_4] [i_4] = (0 < -0);
                        arr_49 [i_4] [6] [i_12] [i_12 - 3] = var_7;
                    }
                    arr_50 [i_4] = ((~((15887 << (var_1 - 938640597)))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_28 = (+-5941966357248340264);
                                arr_55 [i_3] [i_4] [i_12] [i_4] [i_16] [i_17 - 2] = (!255);
                                arr_56 [i_4] [i_4] = (((arr_9 [i_3]) & (!10076904734427986815)));
                                var_29 *= (var_3 + var_1);
                                arr_57 [i_17] [i_4] [i_12] [i_4] [i_3] = ((((((arr_3 [i_12 - 1]) != 7))) ^ (((var_0 != (arr_3 [i_12 + 2]))))));
                            }
                        }
                    }
                    var_30 = (min(var_30, (~20899)));
                }
            }
        }
    }
    #pragma endscop
}
