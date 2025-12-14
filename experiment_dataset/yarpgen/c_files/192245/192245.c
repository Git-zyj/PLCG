/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((-((-(arr_2 [i_0 + 1] [i_1] [i_1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_20 = -var_15;
                    var_21 = ((var_9 << (var_9 - 132)));
                    var_22 ^= (((arr_4 [i_0 + 1]) || (arr_1 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 = (arr_7 [i_3]);
                                var_24 = (max(var_24, (var_13 / var_15)));
                                arr_14 [i_2] = var_3;
                                arr_15 [5] [9] [i_2] [i_2] [i_4] = (((((-(arr_9 [i_0])))) ? var_7 : var_14));
                            }
                        }
                    }
                }
                var_25 -= (103 | 6500530254106549409);

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_19 [i_5] = (((-6500530254106549410 || -6500530254106549409) <= ((-((var_0 ? (arr_9 [i_5]) : var_17))))));
                    var_26 -= ((+(min((var_14 + var_14), (arr_5 [i_0] [i_1] [i_5])))));
                    var_27 = ((var_1 <= var_4) ? var_5 : (var_9 / var_16));
                    var_28 = (((((-((var_7 * (arr_3 [i_0 - 1] [i_0 + 1])))))) / (max(6500530254106549409, 6500530254106549409))));
                    var_29 = (min(6500530254106549405, -6500530254106549409));
                }
                for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_30 = ((!(((-(arr_5 [i_6] [i_6 - 1] [i_6 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_31 = (((((((var_6 / (arr_8 [i_7]))) < var_17))) / var_13));
                                var_32 ^= ((((-6500530254106549406 ? -6500530254106549409 : -6500530254106549406)) ^ 6500530254106549405));
                            }
                        }
                    }
                    var_33 = ((((6500530254106549405 ? -6500530254106549409 : -6500530254106549405)) / ((((var_9 - var_6) - (((var_2 ? (arr_18 [i_0]) : var_1))))))));
                }
                for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_34 = (min(var_34, ((((max(var_16, (arr_30 [i_0] [i_0 - 1])))) * (((!(arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
                    arr_31 [i_0] [i_1] [i_9] = (-6500530254106549401 - -6500530254106549405);
                }
            }
        }
    }
    var_35 = ((var_15 || var_8) ? var_12 : var_17);
    #pragma endscop
}
