/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (((((-(~var_2)))) ? (((arr_1 [i_1]) ? (((arr_0 [i_0]) ? var_2 : (arr_0 [i_1]))) : 26983)) : ((((arr_2 [i_0]) ? 1 : 0)))));
                    var_20 = ((max((((arr_4 [i_1] [i_1] [i_1]) ? 5914 : (arr_3 [i_0]))), 26983)));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_1] [i_3] [i_1] [i_3] = 2014571670;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_17 [i_4] [i_1] [i_0] [i_1] [i_0] = (((arr_10 [i_3 + 1] [i_3] [i_3 + 1] [8]) >> (arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                            arr_18 [i_1] [4] [i_2] [i_1] [i_0] [i_1] = 20491;
                            arr_19 [i_4] [i_1] [i_1] [12] [i_1] [i_1] = ((109 ? -76 : 25809));
                            arr_20 [i_1] [i_2] [i_1] = 109;
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_21 = (((arr_5 [i_0] [i_1] [19] [i_3 - 1]) ? (arr_21 [i_0] [i_1] [i_0] [i_3 - 1] [i_1] [i_2] [i_3 - 1]) : (arr_6 [i_5 - 2] [i_5 - 2] [i_1])));
                            var_22 = (((arr_7 [i_1] [i_1] [i_0]) + -110));
                        }
                        var_23 = (-109 && 26975);
                    }
                }
            }
        }
    }
    var_24 = ((17046 ? 37705 : 59609));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            {
                arr_29 [i_6] = ((-(((((arr_5 [i_7 + 3] [i_7 + 3] [i_6] [i_6]) ? (arr_11 [i_7]) : 2280395625)) - (arr_4 [i_7] [i_7] [i_7])))));
                var_25 = (((arr_2 [i_6]) * (~-5914)));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_35 [16] [16] [i_8] [i_9] [17] = (arr_27 [10] [7] [i_6]);

                            for (int i_10 = 0; i_10 < 18;i_10 += 1)
                            {
                                arr_38 [i_6] [i_7 - 2] [i_8 + 1] [7] [i_10] = var_1;
                                var_26 = ((-((26983 ? (arr_7 [i_6] [i_6] [i_6]) : (arr_7 [i_9] [i_6] [i_9])))));
                            }
                            for (int i_11 = 1; i_11 < 1;i_11 += 1)
                            {
                                arr_41 [i_11] [i_9] [i_8 + 4] [i_7] [i_7] [i_6] = ((!(((var_11 / (arr_27 [i_6] [5] [i_11 - 1]))))));
                                var_27 = ((15393162788864 ? 4503599560261632 : 125));
                                var_28 = (-2147483647 - 1);
                                arr_42 [i_8] = 18574;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (0 >= 1);
    #pragma endscop
}
