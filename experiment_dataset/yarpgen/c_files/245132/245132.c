/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_9;
                var_17 = (arr_1 [i_0]);

                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    var_18 += (max((min(var_8, 218)), (arr_8 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] [i_4] = (!var_15);
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = ((-(arr_13 [i_0] [i_1] [i_2] [i_3] [i_3])));
                                var_19 = (min(var_19, (((-((((31999 ? 9223372036854775807 : 65535)) / ((var_4 ? var_3 : 49055)))))))));
                                var_20 = ((~(~var_14)));
                            }
                        }
                    }
                    arr_18 [i_0] = ((((((max((arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 2]), var_8))) + 2147483647)) << (32 - 32)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_21 = var_15;
                    var_22 -= var_4;
                    var_23 = (((((9223372036854775805 ? 164 : 255))) ? ((-9223372036854775786 ? var_13 : 4)) : -var_9));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    var_24 = 14084;
                    var_25 = ((10 ? 9223372036854775807 : ((4 ? var_14 : 245))));

                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        var_26 |= (+-9223372036854775807);
                        arr_27 [i_0] [i_0] [i_1] = (((((var_5 ? (-9223372036854775807 - 1) : 7702))) ? 9223372036854775784 : (~22723)));
                        var_27 = var_8;
                        var_28 = (max(var_28, 22718));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        var_29 -= (((((var_14 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [6]) : -9223372036854775785))) ? (((31999 ? var_13 : var_10))) : (var_3 - var_9)));
                        arr_32 [i_0] [i_1] [i_1] [i_8] = var_14;
                        arr_33 [i_0] [i_1] [i_0] [i_1] [i_1] [i_6] = ((~(var_16 && 10)));
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    var_30 = (max(var_30, (~var_1)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                arr_43 [i_0] = (!9223372036854775807);
                                var_31 = (((!30) > ((var_15 * (arr_4 [i_0])))));
                                var_32 = var_15;
                            }
                        }
                    }
                    var_33 = (min(var_33, (((var_10 ? (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_11)))));
                }
                var_34 = (min(((3219141821 ? (-27052 & -27052) : (((-9223372036854775807 - 1) & var_10)))), 0));
                var_35 ^= (((((((arr_24 [i_0] [i_0] [i_0]) > (arr_8 [6]))) && -106)) ? ((-(min(1075825480, var_5)))) : (~49)));
            }
        }
    }
    var_36 = (max(var_36, 9223372036854775807));
    var_37 = ((!((max(((var_12 ? 36314 : var_11)), var_15)))));
    var_38 = (min((((-27070 ? -var_15 : var_15))), (--0)));
    var_39 *= (((var_3 + var_5) > (!var_13)));
    #pragma endscop
}
