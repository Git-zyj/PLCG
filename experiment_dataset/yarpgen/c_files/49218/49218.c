/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = 8985310680483126504;
                var_13 = (min(var_13, (7435932650897616488 != var_3)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = -8985310680483126504;
                    arr_7 [i_0] [i_1] [i_1] = ((0 && (min(1, 0))));
                    arr_8 [3] [7] [7] [i_0] = ((((((((var_1 >> (var_0 + 1878408416)))) ? -1 : (var_5 <= var_11)))) || 5433810960859657130));
                    var_15 += (max(-2093094084, ((-(~var_5)))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] = (((((!3222676630) ? 3421174719870300046 : (!-8355048586196526747))) >> (((max((max(1, 2021012902)), var_5)) - 2021012858))));

                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_16 -= var_7;
                        var_17 = (min(var_17, var_5));
                    }

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_18 = (3958567956611157947 ? 2273954400 : 18446744073709551615);

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] [i_6] = (-(arr_14 [5] [i_1] [5] [5]));
                            var_19 = (arr_16 [i_5 - 1] [i_0] [i_5 + 1] [i_5]);
                            var_20 = ((-(arr_18 [i_5 + 1] [i_6 + 1] [i_6] [i_5 + 1] [i_5 + 2] [i_5])));
                            var_21 = (((((255 ? var_1 : (arr_14 [i_0] [i_0] [i_0] [i_0])))) ? (arr_16 [i_5] [i_0] [i_5 - 1] [i_5 - 1]) : (((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) < var_2))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_22 += (~var_1);
                            var_23 = ((5433810960859657118 + (!1)));
                        }
                        var_24 = (((((!var_11) || var_10)) ? (((-((var_5 - (arr_16 [i_0] [i_0] [15] [1])))))) : ((1 ? 16435416680083244271 : 5433810960859657130))));
                        var_25 = (max(((((((arr_16 [i_0] [i_0] [i_0] [i_0]) ? var_5 : var_8))) ? 18446744073709551615 : (((max(var_5, var_11)))))), (((((1072290666 ? 1882688666 : var_1)) <= (arr_2 [i_1] [i_1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_27 [i_0] = arr_3 [i_3] [i_3] [1];
                        arr_28 [i_0] [i_0] [i_0] = (~((var_2 ? var_8 : var_11)));
                        arr_29 [i_0] = 1072290652;
                        var_26 += (1072290666 < var_1);
                    }
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_0] = (min((max((((var_10 ? 0 : var_5))), (((arr_25 [i_0] [1] [i_1] [i_1] [2]) & var_3)))), (((var_5 * (var_2 + 1))))));
                    arr_34 [i_0] [i_1] [i_1] [i_1] = (((((~(arr_14 [i_0] [i_0] [i_1] [i_0]))) <= var_5)) || ((((((var_2 + (arr_14 [i_1] [i_1] [i_9] [i_0])))) ? ((max(var_10, (arr_0 [i_9])))) : (arr_31 [i_0] [i_1] [i_9])))));
                    arr_35 [i_0] [i_0] [i_1] [i_9] = (1 < (~444078763));
                }
                var_27 = ((((min(var_2, -var_2))) ^ (arr_16 [i_0] [i_0] [i_0] [i_1])));
            }
        }
    }
    var_28 = min(var_2, (max(var_5, ((255 ? var_4 : -1)))));
    #pragma endscop
}
