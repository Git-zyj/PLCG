/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_3, ((((101 + var_4) || var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_17 = ((3520631296 ? (((!(arr_8 [i_0] [i_1 - 1] [i_3])))) : 1));
                        var_18 = (max(var_18, (((10624 ? var_2 : var_14)))));
                        var_19 = var_8;
                        var_20 ^= var_11;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_21 = ((~((var_0 ? var_4 : var_0))));
                        var_22 = (-(~var_15));
                        var_23 = (max(var_23, ((((arr_8 [i_1 + 1] [i_1 + 3] [i_1 + 3]) ? var_14 : var_2)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [6] [i_5] [i_6] = var_0;
                            arr_22 [i_0] [i_0] [i_0] [11] [i_0] [i_0] [i_0] = (((arr_4 [i_0] [i_0]) / (~var_0)));
                        }
                        arr_23 [i_0] = (arr_6 [i_1] [i_0] [i_5]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_24 *= (((arr_29 [i_8] [i_7] [i_2]) - (arr_4 [i_0] [i_8])));
                                var_25 = ((((max(89, (min(var_12, 123))))) <= (~17592118935552)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
