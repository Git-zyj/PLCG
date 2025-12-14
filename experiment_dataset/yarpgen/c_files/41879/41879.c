/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (min(-var_6, (((var_7 ? ((max(1, var_4))) : ((min(-32744, var_3))))))));
    var_12 = 18446744073709551608;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [2] [i_0] [i_2 - 1] [i_3] [i_4] [i_4] = (((((arr_0 [i_0 + 3]) % -1)) | (arr_6 [i_0] [i_0])));
                                var_13 = ((((((arr_1 [i_0 + 1]) + (arr_13 [i_0] [i_0 - 1] [i_2 + 2] [i_0])))) ? ((((arr_2 [i_0 + 1]) || (arr_11 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_2 + 2])))) : (((((arr_5 [i_0] [7]) | var_4))))));
                                var_14 = ((((min(-201290173, (((arr_6 [i_2] [i_3]) ? (arr_11 [i_0 + 2] [2] [i_0] [i_0] [i_0]) : (arr_6 [i_3] [i_0])))))) / ((30324 ? 872072655 : 18446744073709551602))));
                            }
                        }
                    }
                    var_15 = (((arr_10 [i_0 - 1] [i_2 + 2] [i_2 - 1]) + ((max((arr_10 [i_0 + 3] [i_2 + 1] [i_2 + 1]), var_5)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_18 [i_0 + 4] [i_1] [i_2 - 1] [i_0] = 1;
                        arr_19 [i_0] [i_1] [i_1] [i_1] = 1;
                        arr_20 [i_0 + 1] [i_0] [i_2 - 1] [i_5] = ((-(32761 > 71)));
                        var_16 = (((arr_0 [i_0 + 1]) || -22));

                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            var_17 = ((((-1 ? 32754 : (arr_15 [7] [i_1] [i_2] [i_5] [i_6]))) * (arr_3 [i_2] [i_5])));
                            var_18 = (arr_12 [i_2] [i_2 + 1] [i_6 - 3] [i_2 + 1] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_2 - 1] [i_5] [i_5] [i_0] [i_7] = (arr_8 [i_0 + 1] [i_0] [i_0]);
                            var_19 = (arr_23 [i_0 + 2]);
                        }
                    }
                    arr_28 [i_0] = (arr_25 [i_1] [i_0]);
                }
            }
        }
        arr_29 [i_0] [i_0] = (max(((-(arr_13 [i_0 + 2] [i_0 + 2] [1] [i_0]))), ((-((-(arr_22 [i_0 + 3] [i_0] [i_0] [i_0 + 4] [i_0])))))));
        arr_30 [i_0] [i_0 - 1] = (max(((((arr_0 [i_0 + 3]) == (arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0])))), -2147483647));
        var_20 = (arr_0 [i_0]);
    }
    #pragma endscop
}
