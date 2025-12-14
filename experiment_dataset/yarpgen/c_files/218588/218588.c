/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_13 = (((arr_1 [i_0]) << (((arr_0 [i_0] [i_0]) - 34))));
        var_14 = (-2046336948 > (arr_0 [i_0] [i_0]));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_2] = (min((((+((2046336947 ? (arr_3 [i_1 - 1]) : var_10))))), (arr_5 [i_1] [i_1])));
                var_15 = ((((((arr_2 [i_1 - 1]) / (arr_2 [i_1 - 1])))) ? 18446744073709551615 : ((((arr_3 [i_2]) ? (arr_4 [i_1 + 2] [i_2]) : (arr_3 [i_2]))))));

                /* vectorizable */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_16 = (((arr_12 [i_3 + 1] [i_5 - 2]) ? (arr_2 [i_5 + 1]) : (arr_2 [i_5 - 2])));
                                arr_17 [i_2] = ((arr_16 [i_3 - 1] [i_3 - 1] [i_4] [i_5 + 3] [6]) ^ (arr_14 [i_3 - 1] [i_3 - 1] [i_5] [i_5 + 3] [i_5] [i_5]));
                            }
                        }
                    }
                    var_17 = (min(var_17, ((((arr_13 [13] [5] [i_3 + 1] [11] [i_3 + 1]) < (((arr_4 [i_2] [0]) | var_3)))))));
                    var_18 = (arr_10 [i_1] [i_2] [i_3 + 1] [i_3 - 1]);
                    var_19 = (max(var_19, ((!(arr_13 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3 - 1])))));
                }
            }
        }
    }
    var_20 = -2046336951;
    #pragma endscop
}
