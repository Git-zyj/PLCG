/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (min(((-32760 & (32739 ^ var_12))), 2023311254));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0 - 1] [i_1] [i_1] |= ((min(3701538823, var_5)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_15 = ((var_11 ? var_12 : (arr_5 [i_1 - 2] [i_3] [i_2] [i_0 - 1])));

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (~0);
                        var_17 *= (((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (9223372036854775807 - 9223372036854775807))) << (3689042942 - 3689042942)));
                        var_18 = (arr_12 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]);
                    }
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_19 = ((var_6 ? var_6 : (arr_16 [i_5] [i_5 + 3] [2] [i_5 + 1] [15])));
                        var_20 *= (((((var_8 ? var_11 : var_5))) ? ((593428493 ? (-9223372036854775807 - 1) : (arr_17 [i_1] [i_3] [i_2] [i_1]))) : 0));
                    }
                    var_21 = (((((var_3 ? (arr_10 [i_1]) : 12466531027342561783))) ? ((var_0 + (arr_3 [i_0] [i_2] [i_3]))) : var_1));
                }

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 4; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_22 = var_4;
                        var_23 ^= ((((33552384 ? 3382808350501332167 : 501052446))) ? (arr_12 [i_0 - 1] [i_7] [i_7] [17] [i_0 - 1]) : var_4);
                        var_24 ^= (((arr_13 [i_7 + 1]) ? 0 : var_0));
                    }
                    for (int i_8 = 4; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_25 = ((var_9 ? (-32767 - 1) : 65535));
                        arr_26 [i_1] &= var_4;
                        var_26 ^= ((~(arr_3 [i_1] [i_1] [i_8])));
                    }
                    for (int i_9 = 4; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_9] [i_9] = (var_7 / var_1);
                        var_27 *= 32767;
                        arr_32 [i_0] [11] [i_0] [i_0] = var_12;
                        var_28 = (min(var_28, (-31169 - var_1)));
                        arr_33 [i_2] [i_1] &= ((-((-3369536493838512681 ? var_0 : var_11))));
                    }
                    var_29 += -65535;
                    var_30 = ((var_4 ? var_2 : var_6));
                }
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    var_31 = var_2;
                    arr_36 [i_0] [i_1] [i_1] [i_10] [i_0] [3] = var_0;
                    arr_37 [i_0] [i_0] [i_0] [i_10] |= -26903;
                    var_32 ^= (arr_23 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [14] [i_1] [i_1]);
                    arr_38 [i_0] = (arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [6] [i_10 - 1] [i_0]);
                }
                var_33 = -var_6;
                arr_39 [i_0] [i_1] [i_0] = (~25673);
                var_34 = ((~(arr_6 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 + 3])));
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                arr_43 [i_0] [1] [10] = var_8;
                arr_44 [i_0] [i_0] [5] [i_1] = (((min(-var_3, var_1)) % (min(-var_1, (arr_20 [i_1 - 2] [i_0])))));
                var_35 ^= (max(3701538820, (((min(var_10, 1))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_36 += ((+(((-32767 - 1) * 0))));
                            arr_50 [i_0] [i_1 - 2] [i_0] [i_12] [i_13 + 2] = arr_20 [i_0] [i_0];
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_55 [i_0] = (((2594911824 ? var_3 : (arr_5 [i_0] [i_0] [i_0] [9]))));
                var_37 *= (((arr_2 [i_14] [i_1] [11]) ? (!var_1) : var_8));
                var_38 = (9223372036854775807 / var_11);
            }
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                var_39 = ((((var_11 < (arr_45 [i_0] [14] [i_0 + 2] [i_0 + 2]))) ? (arr_15 [17] [i_0] [i_0 - 1] [i_0 - 1]) : ((var_1 ? var_7 : var_2))));

                /* vectorizable */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    var_40 = (max(var_40, ((((((~(arr_34 [i_0] [i_0] [15] [1] [i_0])))) ? var_6 : var_10)))));
                    var_41 = (arr_54 [i_0 - 1] [1] [i_0] [i_15 - 1]);
                }
            }
        }
        arr_62 [i_0] [i_0] = min((min(((var_12 ? 17 : var_12)), (arr_0 [16]))), ((((min(var_11, -512)) - (((var_8 ? var_8 : -24687)))))));
        arr_63 [16] |= (((~-8) > var_10));
    }
    #pragma endscop
}
