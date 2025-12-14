/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_10 = var_1;
                                var_11 = (max(var_11, ((((arr_10 [i_4 + 3] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 1]) > ((var_2 % (arr_10 [i_4 - 2] [i_4 - 2] [i_4 + 4] [i_4 + 1] [i_4 + 1]))))))));
                            }
                            for (int i_5 = 1; i_5 < 18;i_5 += 1)
                            {
                                var_12 = (((((min(1, var_2))) * (((var_7 + 9223372036854775807) >> (var_3 - 60))))));
                                var_13 = (min((arr_4 [i_0] [i_0] [i_0]), (((arr_4 [i_5] [i_2] [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [i_2] [i_2] [i_5 - 1])))));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [19] = (((arr_2 [4]) ? (var_5 * -var_0) : var_0));
                                var_14 = (min((arr_9 [i_1] [i_5 + 2] [i_5 - 1] [i_5 + 4]), var_7));
                                arr_16 [i_5 + 4] [i_3] [i_2] [i_1] [5] |= var_0;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_19 [i_0] [12] [5] [4] = (min(((~(arr_2 [i_2]))), (arr_18 [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0])));
                                arr_20 [i_6] [i_6] [1] [i_6] [i_6] [i_6] [i_6] = ((((((arr_0 [14] [i_1]) ? (arr_0 [i_3] [i_0]) : var_5))) ? (~59) : (arr_13 [i_0] [i_0] [i_1] [13] [i_0] [i_6])));
                                arr_21 [14] [i_1] [17] [7] [i_6] = (min((((~(arr_11 [13] [13] [13] [i_3] [i_3])))), (min(var_2, (arr_11 [i_6] [i_3] [i_2] [i_1] [i_0])))));
                            }
                            var_15 = ((var_5 % ((~(((arr_4 [i_0] [i_1] [i_2]) | (arr_2 [i_3])))))));

                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_16 ^= (-(((!(arr_1 [i_7])))));
                                var_17 = ((~var_8) > (min((arr_12 [i_0] [i_1] [i_0] [i_1] [i_7]), ((((arr_24 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_7]) ? var_9 : (arr_24 [i_0] [6] [i_2] [i_2] [i_3] [i_3] [6])))))));
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_7] = var_8;
                            }
                            for (int i_8 = 0; i_8 < 22;i_8 += 1)
                            {
                                var_18 ^= ((((((min((arr_14 [i_0]), var_8))) ? var_6 : ((var_3 ? (arr_17 [i_0] [i_1] [4] [i_1]) : var_9)))) % ((min((arr_2 [i_3]), (((var_5 <= (arr_18 [20] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0])))))))));
                                var_19 *= (arr_13 [i_0] [i_0] [i_2] [15] [16] [i_8]);
                            }
                            for (int i_9 = 2; i_9 < 20;i_9 += 1)
                            {
                                var_20 = (min(var_20, ((((((197 ? 76 : 1))) == ((~(arr_8 [i_0] [i_1] [i_2] [i_2]))))))));
                                var_21 = 831456647;
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 0;i_10 += 1)
                            {
                                var_22 = (((arr_8 [i_0] [i_10 + 1] [i_2] [i_3]) > (arr_8 [i_0] [i_10 + 1] [i_2] [i_3])));
                                var_23 *= (arr_14 [i_10 + 1]);
                                arr_33 [i_10] [i_3] [i_2] [i_3] = (((~(arr_23 [12] [i_3] [19] [2] [1] [2] [i_0]))));
                                var_24 = (var_4 == (arr_27 [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_3]));
                            }
                            var_25 = ((-(arr_9 [i_3] [i_2] [i_1] [i_0])));
                        }
                    }
                }
                var_26 ^= (min(var_8, (min(((((arr_29 [i_0] [i_0] [i_0]) > (arr_4 [9] [i_1] [i_0])))), (((arr_18 [15] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_22 [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_4 [18] [i_0] [i_1])))))));
                var_27 = ((-((((((~(arr_13 [15] [i_0] [i_0] [i_1] [i_1] [i_0])))) > var_7)))));
                arr_34 [i_1] [i_1] [5] = ((-(arr_5 [i_0])));
            }
        }
    }
    var_28 = var_0;
    var_29 = ((((~var_9) | var_3)));
    #pragma endscop
}
