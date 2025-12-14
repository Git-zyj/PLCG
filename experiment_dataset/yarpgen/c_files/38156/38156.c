/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] = max((((arr_3 [i_3] [i_3] [i_1]) ? (((arr_4 [i_2]) ? var_5 : (arr_8 [i_0] [i_1] [1]))) : var_6)), (((!(3730344447 & -18)))));
                            arr_10 [i_3] [i_1] [i_1] [8] = (~var_5);
                            var_11 = (((arr_1 [i_1 + 1]) % var_4));
                            var_12 ^= max((((!(arr_6 [i_0] [5] [i_2] [i_3])))), (arr_8 [i_0] [i_1] [i_3]));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_1] = (((arr_8 [i_1 + 2] [i_1 + 1] [i_1 - 3]) < (arr_0 [i_1 + 4])));
                    var_13 = (min(var_13, (((!((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? var_6 : 1004091660))))))));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_14 = 353735952;
                    var_15 = arr_5 [i_0] [i_1 + 1];
                }

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_16 = (-(max(var_7, 86098328)));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_17 = (arr_1 [i_1 + 4]);
                        var_18 = var_6;
                        var_19 = (-(~var_8));
                        var_20 = min((((arr_1 [i_1 - 3]) - 2074211541)), ((-(arr_1 [i_1 + 2]))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_21 += 2890942342881253273;
                                var_22 = 1537008535;
                                arr_28 [i_0] [i_1] [i_6] [i_8] [i_1] = ((-((((var_8 / (arr_3 [i_0] [i_0] [i_1]))) + (arr_4 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = max((max(var_3, (4294967295 & var_10))), var_1);
    var_24 = (~var_9);
    var_25 = var_2;
    #pragma endscop
}
