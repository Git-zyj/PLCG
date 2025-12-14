/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min((((~(var_5 || 1048575)))), (min((~var_7), (var_3 / var_2)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 -= (min(((((!(arr_1 [0]))) ? ((((arr_3 [i_0]) / 32426))) : (min((arr_0 [i_0]), var_3)))), var_9));
        var_13 = ((((((arr_1 [i_0]) ? var_8 : (arr_1 [i_0])))) ? (~182) : (max(1444433181, (arr_1 [i_0])))));
        var_14 = (max(var_14, (arr_3 [i_0])));
        var_15 += ((!((min(2850534114, (arr_0 [i_0]))))));
    }
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {

                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    arr_11 [i_1] = ((((((arr_7 [i_3 + 2] [i_2] [i_2 + 1]) ? (((32752 ? (arr_5 [i_1]) : (arr_9 [i_3] [16] [i_1])))) : ((32426 ? var_5 : (arr_10 [i_1] [i_2 + 1])))))) ? (((((max((arr_5 [i_1]), (arr_10 [i_1] [i_1])))) ? (arr_10 [i_1] [i_2 - 1]) : (max(2328701744, (arr_10 [i_1] [i_2 - 1])))))) : ((32426 ? (arr_6 [i_1] [i_1]) : (min((arr_7 [10] [i_2] [i_1]), 0))))));
                    var_17 = (min(var_5, ((((arr_7 [i_1] [i_1] [i_1]) / (arr_8 [i_1] [i_2 + 1] [i_1]))))));
                    arr_12 [i_1] [i_1] [i_3] [i_3] = (max(((((((-18253 + 2147483647) >> (((arr_9 [i_2] [i_2 - 1] [i_3]) + 31953)))) - var_6))), (((arr_4 [i_3 + 2]) ^ ((max(var_3, -18253)))))));
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_18 = ((32426 % (arr_5 [i_1])));
                    arr_15 [i_1] [i_2 - 1] [3] [i_1] = (var_2 != var_3);
                }

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_1] [i_1] [i_1] = (max(((var_8 ? (((var_7 ? -32429 : (arr_13 [i_1] [i_1])))) : ((-(arr_7 [i_5] [i_5] [15]))))), (((-var_5 <= (((min(var_6, (arr_5 [i_1]))))))))));
                    arr_19 [i_1] [i_2] = max((arr_13 [i_1] [i_2]), (arr_8 [i_5 - 1] [i_2 - 1] [i_1]));
                    arr_20 [i_1] [i_2] [i_1] = (max(1620242278, (max(var_7, (arr_16 [i_1] [i_5] [i_1])))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_23 [i_1] [i_2] = (((((((arr_16 [i_1] [i_1] [0]) + (arr_8 [i_1] [i_2] [i_2]))))) ? ((max(525961698, 0))) : (!32426)));

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_19 = (max((max(57, (~var_1))), -1472412057));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_20 = 23;
                            var_21 = (((((var_6 ? (arr_27 [i_2] [i_2 - 1] [i_2]) : (arr_27 [i_7] [i_2 - 1] [i_1])))) ? (arr_27 [i_7] [i_2 - 1] [i_2]) : ((-(arr_27 [i_2 - 1] [i_2 - 1] [2])))));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_32 [i_1] [i_6] [i_1] [i_9] = ((-23668 ? ((max((arr_25 [i_2 + 1]), 389785584))) : ((0 ? 96 : 1961019930459613426))));
                            var_22 &= ((((((arr_6 [i_2] [i_2 - 1]) % 4294967295))) ? ((((var_7 ? 12499967516267617169 : 4294967290)) / (10861 - -389785612))) : (min((arr_31 [i_1] [i_1] [i_2 - 1] [i_1] [13]), 11543549654285940836))));
                        }
                        for (int i_10 = 3; i_10 < 19;i_10 += 1)
                        {
                            var_23 += var_3;
                            var_24 = ((max(((var_7 ? 4294967290 : 389785613)), (arr_30 [i_2] [i_2 + 1] [i_6] [i_7] [i_10] [i_7] [i_6]))));
                        }
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            var_25 = 0;
                            var_26 = -1946941307;
                            arr_39 [15] [i_7] [i_7] [i_7] [i_7] [i_1] [i_7] = var_1;
                            arr_40 [i_1] [i_7] [i_1] [i_7] [i_7] [i_7] [1] = (arr_22 [i_11 + 1] [i_2 + 1] [i_2 + 1]);
                        }
                        var_27 = (min(var_27, var_3));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_45 [i_1] = (max(var_0, var_5));
                        var_28 -= ((((min(var_8, (max(var_3, 5634487086132801501))))) ? (arr_36 [i_1] [i_2] [i_6] [i_12]) : var_0));
                        arr_46 [i_1] [i_1] [i_1] [i_1] [i_2] = (((!(arr_26 [i_12] [i_2 - 1] [i_1] [i_12] [i_2] [i_2 - 1]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
