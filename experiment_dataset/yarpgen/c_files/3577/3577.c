/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((222 ? (((!(((~(arr_1 [14]))))))) : (min(var_7, (-69 * 37085))))))));
                arr_5 [i_0] = (((!-60) ? ((((var_0 ? (arr_2 [i_0] [i_0]) : var_7)))) : (max((arr_3 [i_0] [4]), (arr_1 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 += (min(var_7, ((var_0 ? (max(var_6, (arr_11 [7] [i_1] [i_2]))) : (((min(4, 24))))))));
                            arr_12 [i_0] [i_0] [10] [i_0] [i_0] = (((var_10 + 2147483647) >> (64 - 57)));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] &= var_10;
                                var_14 = (max(var_14, ((((arr_2 [i_1] [i_1]) ? (arr_6 [i_1] [i_2] [i_1] [i_4]) : (arr_0 [i_4]))))));
                                var_15 = ((((max(((min(28450, 32768))), ((52 ? 1 : 1))))) != ((((((arr_2 [i_0] [i_1]) ? (arr_0 [i_0]) : var_4))) | (arr_4 [i_0] [i_0] [i_0])))));
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_16 = (max(var_16, var_9));
                                var_17 = ((4294967294 ? 83 : 2694131399));
                                var_18 = (min(var_18, ((((-11 ? 33 : 37085))))));
                                var_19 = (min(var_19, (((60 / (min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_2]))))))));
                            }
                        }
                    }
                }
                var_20 = ((-(min(-var_11, (((var_7 << (((arr_2 [i_0] [14]) - 93)))))))));
            }
        }
    }
    var_21 = (((min((min(var_7, var_4)), var_5)) | ((~(min(var_4, var_2))))));
    var_22 = 131040;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6] = ((-((((arr_21 [i_6]) != -103975345)))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((min((((!var_8) ? var_7 : (min((arr_26 [i_6]), var_10)))), ((((max(var_1, var_8))) - (!23))))))));
                                var_24 = (max(var_24, ((max(((2097136 ? 1 : 2298966430)), (((((4292870159 >= (arr_28 [i_6] [i_6] [13] [i_8] [i_9] [i_9]))) ? ((min((arr_26 [i_10]), (arr_31 [15] [i_9 + 2] [i_8] [i_7] [i_6])))) : (((var_0 != (arr_21 [i_6]))))))))))));
                                arr_33 [i_6] [i_6] [15] [i_6] [1] [i_10] = var_9;
                                var_25 = (((((((((var_9 ? (arr_28 [i_6] [i_7] [13] [i_8] [i_9 + 1] [i_10]) : (arr_32 [i_6] [i_7] [i_8] [i_6] [i_10])))) ? var_3 : 232)) + 9223372036854775807)) >> (((arr_27 [i_7] [i_9] [i_7]) ? var_9 : (arr_27 [i_9 + 1] [i_9 - 1] [i_9 - 1])))));
                            }
                        }
                    }
                }
                arr_34 [i_6] [i_7] = (min(((((min(2097137, 119))) || -1)), ((!(arr_20 [i_6])))));
            }
        }
    }
    #pragma endscop
}
