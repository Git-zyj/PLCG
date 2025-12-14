/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-6, ((3152387234 ? 8693390518168220298 : 235))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (arr_2 [i_2 - 2]);
                                var_16 = (min(var_16, var_7));
                                arr_16 [i_0] [i_1] [i_0] [12] [i_0] = (248 >= 15059952801668062318);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 8166088578116310003;
                            arr_23 [i_0] [0] = (((arr_21 [i_0] [12] [i_6] [i_2 - 1] [i_0]) >> ((((var_11 ? 21747 : (arr_4 [i_0]))) - 21727))));
                            var_17 = (!6856990174490544002);
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_1] [i_0] [i_7] = ((var_5 <= ((var_0 ? var_10 : var_1))));
                            arr_27 [i_0 - 2] [i_0 - 2] [i_0] [i_5] [i_7] = 250908419;
                            arr_28 [i_0] [i_0] = (!17259739391909823832);
                        }
                        var_18 = (((arr_21 [i_2 - 1] [i_2 - 1] [5] [i_5] [i_0]) ? (arr_15 [i_2] [i_0] [i_2] [i_0] [i_0 - 3]) : (((max((arr_17 [i_0] [12] [i_0]), var_10))))));
                        arr_29 [i_0] [i_0] [i_1] [i_2 - 1] [i_5] = arr_19 [i_0] [i_1];
                    }
                    var_19 = arr_6 [i_0 + 1] [i_0];
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_34 [i_0] [i_1] [i_0] [i_1] [0] = var_13;
                                arr_35 [8] [8] [1] [i_8 - 1] [i_0] = (min((max((((var_10 ? var_4 : (arr_19 [i_0] [i_0])))), 249)), (~3269450766)));
                                arr_36 [i_2] [i_8 + 1] [i_0] [i_2] &= (max(-var_11, (((!(((arr_3 [i_2] [i_2]) <= 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
