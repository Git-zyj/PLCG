/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_21 = (max(var_21, 4540791951279691358));
            arr_5 [i_0] = (arr_2 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_2] [i_2] [i_3] [i_3] [i_5] = -1;
                            arr_18 [i_0] [i_4] [10] [i_2] [i_2 - 1] [i_0] |= var_17;
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_22 [i_2] [i_4] [i_4 - 1] [i_3] [i_3] [i_2] [i_2] = (((((~(arr_20 [i_0] [1] [i_3] [i_0] [1])))) ? var_15 : (arr_7 [i_3] [i_2])));
                            var_22 = (max(var_22, (arr_13 [i_2 - 1] [i_4] [i_6])));
                            arr_23 [i_3] [i_2] [i_6] [i_0] = (((arr_8 [i_0 - 2] [i_2]) ? ((-(arr_4 [i_2] [i_2]))) : -11590));
                            var_23 += 356925746;
                        }
                        arr_24 [i_2] = (arr_9 [i_0] [i_2] [i_3] [i_4]);
                    }
                }
            }
            arr_25 [i_2] = (((((-(arr_14 [2] [i_2] [i_0 - 1] [i_0] [i_2] [i_0])))) & (((arr_13 [i_0 - 1] [i_0] [i_2]) & (arr_8 [9] [i_2])))));
            var_24 = (arr_4 [i_0] [i_2]);
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            var_25 += (((((arr_4 [i_0 - 1] [i_0 - 2]) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 - 2] [i_0 - 2]))) >= (arr_4 [i_0 + 1] [i_0 - 1])));
            arr_29 [i_0] [i_7] [i_0] = ((((arr_16 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_7]) ? var_18 : (min((arr_9 [i_7] [16] [i_0] [i_0 - 2]), (arr_1 [i_0]))))));
            var_26 = max((((var_14 + 2147483647) << (((((arr_4 [i_0] [i_7]) + 164328876)) - 30)))), (((-var_16 > (((((arr_4 [i_0] [i_7]) + 2147483647)) >> (57651 - 57634)))))));
        }
        var_27 = (max(var_27, (((-((((((arr_10 [i_0]) ? (arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) : var_3))) ? (arr_4 [i_0] [i_0]) : 0)))))));
    }
    for (int i_8 = 3; i_8 < 14;i_8 += 1)
    {
        arr_32 [i_8] = (((min(1, (((arr_3 [i_8] [i_8]) ? (arr_20 [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_3 [i_8] [i_8]))))) << ((((-29 ? (~13480294711715169262) : (arr_9 [i_8 + 2] [i_8] [i_8] [i_8]))) - 4966449361994382297))));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_37 [i_8] [i_8] = (arr_36 [i_8] [i_8] [i_9]);
            arr_38 [i_8] [i_9] = (arr_26 [i_8] [i_9]);
            var_28 = var_4;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_44 [i_8] [i_8] [i_8] = arr_34 [i_8] [i_10] [i_8];
                        arr_45 [i_8] [i_11] [i_8] [i_11] [i_8] [0] = (i_8 % 2 == zero) ? (((((-(arr_4 [i_9] [i_10]))) << (((arr_31 [i_8]) - 977274995))))) : (((((-(arr_4 [i_9] [i_10]))) << (((((arr_31 [i_8]) - 977274995)) - 488383195)))));
                        arr_46 [i_8] [13] [i_8] = (((354645040495604587 != (-9223372036854775807 - 1))));
                    }
                }
            }
        }
        var_29 = (max(var_29, (arr_12 [i_8] [1] [i_8] [1])));
    }
    #pragma endscop
}
