/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_4 [18] [i_1 - 1] |= (min((~var_13), var_7));
            arr_5 [i_0] [i_0] = ((arr_1 [i_0]) ? -5570478508877616015 : ((((var_6 % var_13) / (((arr_3 [i_0] [i_0] [3]) ? var_3 : 48076))))));
            arr_6 [i_0] [16] [i_0] = 3463076019;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                arr_12 [i_3] [i_0] [i_0] [i_0] = 8917279040304760219;

                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_15 = (((((var_12 ? var_0 : var_5))) ? (arr_13 [i_3] [i_0] [i_3 - 1] [i_0] [i_3 - 1]) : var_10));
                        var_16 -= (!55091);
                    }
                    arr_18 [i_0] [i_0] [i_3 - 1] [i_3 - 1] = var_10;
                    var_17 |= var_10;
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_18 = (arr_0 [i_0] [i_0]);
                    var_19 = var_14;
                    arr_21 [i_0] [i_0] [i_3 + 1] [i_0] [i_2] [i_0] = -5570478508877616009;
                    var_20 += var_3;
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_0] [i_0] [10] [10] [i_0] |= (arr_22 [i_0 + 1] [i_0 + 1] [i_2] [10] [i_0]);
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                        var_21 *= -16;
                        var_22 = (var_12 ? var_14 : (arr_13 [i_0 + 1] [i_0] [i_7] [i_2 - 1] [i_0 + 1]));
                        var_23 = ((-21 ? -1 : 3236329094));
                    }
                    arr_29 [i_7] [i_0] [i_0] [i_0 + 1] = (((~var_11) > ((-(arr_14 [i_3] [i_7])))));

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_32 [i_2] [i_3] [i_0] [i_9 - 1] = var_6;
                        arr_33 [i_0] [1] [i_0] [i_0] [i_0 + 1] = 14;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_24 = (!(((var_3 ? 14 : 3463076019))));
                        var_25 = 3463076019;
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_26 = ((-(arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [i_2 + 1] [i_0])));
                        var_27 = ((var_6 ? ((19327 ? 7063896746755501548 : 5570478508877615993)) : (~2000996723)));
                        var_28 |= (~0);
                    }
                    arr_38 [i_0] [1] [i_2] [19] [i_0] [i_0 + 1] = (arr_7 [i_3 + 1] [i_2 + 1] [i_2]);
                }
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                var_29 = (((3831475608556899057 ? var_11 : 1)));
                var_30 = (arr_31 [i_0] [i_0 + 1] [i_2 - 1] [i_2 - 1] [7]);
            }
            arr_42 [17] [i_0] [i_0] = var_14;
            var_31 = (!46078);
            arr_43 [i_0] [i_0] = ((-(~var_5)));
        }
        var_32 = (max(var_32, var_9));
        arr_44 [i_0] = (arr_9 [i_0]);
        arr_45 [i_0] = var_3;
    }
    var_33 = (min(-1, (min(9223372036854775807, var_12))));
    #pragma endscop
}
