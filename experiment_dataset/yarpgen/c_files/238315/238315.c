/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_0] = -1868399881;
                var_16 *= (((arr_0 [i_2]) ? 4953719197296931962 : var_9));
                var_17 = (min(var_17, 4));
            }
            var_18 = ((((-6644 ? 9223372036854775807 : var_5)) | (arr_1 [i_1 + 1])));
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            arr_11 [i_3] |= (((arr_4 [i_0]) == (max(((min(var_13, 1))), (max(var_8, 1868399880))))));
            arr_12 [i_0] = ((((!(arr_2 [i_3 + 3] [i_3]))) ? (9223372036854775807 != 16234338594472943597) : ((((((arr_10 [i_0]) ? 1 : 4))) ? ((var_7 ? var_5 : (arr_7 [i_0] [i_0] [i_3]))) : (((65024 ? 1 : 238)))))));
        }
        var_19 = (((~2212405479236608030) / (((~(arr_2 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_19 [i_0] [i_0] = ((var_14 / (arr_18 [i_4] [i_5])));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_0] [i_0] = (max((max((max(10, var_3)), 1)), var_8));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            arr_28 [i_7 - 1] = ((var_12 || (!-4919331477076928652)));
                            var_20 = (max(var_20, ((((arr_15 [i_7]) <= 804872526)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    arr_37 [i_8] [i_8] = var_9;

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_40 [i_8 + 1] [i_9] [i_10] [i_11] = ((((min(0, (((arr_20 [i_11] [i_8] [i_9] [i_8]) ? var_14 : (arr_22 [i_8 - 2] [i_8 - 2])))))) ? (((~(~1)))) : (((((arr_32 [i_10] [i_10] [i_9]) ? (arr_9 [i_8]) : (arr_3 [i_8] [i_8]))) & (arr_3 [i_9] [i_9])))));
                        arr_41 [i_8] [i_8] [i_9] [i_10] [i_11] = ((((((arr_15 [i_8 + 2]) | (arr_15 [i_8 + 1])))) / ((((((arr_27 [i_11] [i_10] [i_9] [i_9] [i_9] [i_8]) & 0))) ? (arr_6 [i_8 + 1] [i_8 + 2] [i_8 - 1]) : ((var_13 ? 11632870660888335828 : (arr_26 [i_9] [i_8])))))));
                        var_21 = (min(1, (((arr_35 [i_8 - 2] [i_9] [i_8] [i_11]) ? (arr_35 [i_8 + 2] [i_9] [i_9] [i_9]) : (arr_35 [i_8 - 1] [i_9] [i_10] [i_11])))));
                        var_22 -= (arr_26 [i_9] [i_9]);
                    }
                    arr_42 [i_10] = 3;
                    var_23 = (((arr_7 [i_8 - 1] [i_8 - 2] [i_8 + 1]) % ((((arr_29 [i_8 - 1] [i_9]) ? (arr_29 [i_8 - 1] [i_9]) : (arr_29 [i_8 - 2] [i_9]))))));
                }
            }
        }
        var_24 += 12153;
        var_25 += ((~((((((((arr_18 [i_8] [i_8 + 1]) + 2147483647)) >> (((arr_31 [i_8] [i_8] [i_8]) + 9209789261953170957))))) ? (arr_33 [i_8]) : ((~(arr_13 [i_8] [i_8])))))));
    }
    #pragma endscop
}
