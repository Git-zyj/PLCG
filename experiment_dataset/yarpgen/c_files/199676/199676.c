/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-((var_17 ? 1 : var_0)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((-(19859 + 1)))));
        arr_3 [i_0] = ((~((var_6 ? 1889363256 : 1))));
        arr_4 [i_0] = var_10;
        var_20 = ((((min(-1889363256, ((0 ? 33912 : var_16))))) || (18446744073709551590 & 0)));
        var_21 = (((((~(arr_1 [i_0])))) ? (max(1, 2)) : var_8));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = (max(((2147483647 ? 239262243 : 7290695176695335292)), -1942188296));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                arr_14 [i_1] [i_2] [i_2] = var_12;
                var_23 = 65527;
                arr_15 [i_1] [i_2] [i_3] = (min(((((1 ? 2691445343 : 65525)) * var_4)), (~var_4)));
                var_24 = (max(-437557734, 32767));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_25 ^= (((((-1371661141 ? (arr_17 [i_1] [i_2] [i_3] [i_4]) : 1))) ? 44860 : 2032));
                    var_26 = var_2;
                    var_27 = ((-(7290695176695335292 * var_18)));
                    var_28 = ((65531 ? 1 : var_16));
                }
                for (int i_5 = 4; i_5 < 21;i_5 += 1)
                {
                    arr_22 [i_1] [i_2] [i_2] [i_5] = (((2235536852 ? 1 : 0)));
                    var_29 = var_11;
                }
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_30 = (min(var_30, (var_18 / 65534)));
                var_31 = (36022 ? 31620 : -var_16);
            }
            var_32 = ((((((arr_20 [i_2] [18] [i_2] [i_2] [i_1] [i_2]) * 28))) ? (~var_13) : ((max(1, (arr_20 [i_2] [i_1] [i_1] [i_1] [i_2] [i_2]))))));

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_33 = (min(var_33, (((55447 ? -437557734 : (arr_29 [i_1] [i_1] [i_7] [i_7] [i_8]))))));
                    var_34 = arr_6 [i_1];
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_35 = ((~((56236 ? 641042948 : 641042945))));
                    arr_34 [i_1] [i_2] [0] [i_2] [i_1] [i_1] = (min(var_15, -var_6));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_36 = 7172;

                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_37 ^= var_1;
                        var_38 = (min(var_38, (((var_16 ? 1 : (arr_37 [i_1] [i_1] [i_10]))))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_2] [i_2] [i_7] [14] [1] = 32757;
                        var_39 = (arr_12 [i_1] [i_7] [i_10] [i_12]);
                        arr_44 [17] [i_2] [i_2] [i_7] [i_10] [i_12] = ((~(var_17 ^ -1)));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_40 ^= ((var_17 ? var_15 : var_3));
                        arr_48 [i_1] [i_2] [i_7] [i_2] [i_13] = (~856630491);
                        arr_49 [i_2] [14] [14] [i_10] = ((856630491 + (arr_30 [i_10])));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        arr_53 [i_2] = ((var_13 ? 13 : var_7));
                        var_41 = 1;
                    }
                    arr_54 [i_2] [i_2] [i_2] = 307842251;
                    var_42 = var_13;
                    var_43 = (min(var_43, ((((arr_51 [i_7] [i_7]) ? var_11 : var_8)))));
                }
                arr_55 [i_2] [i_2] = ((min(var_2, ((1 ? 201326592 : var_18)))));
                var_44 = (((((arr_5 [i_1]) - var_13)) ^ (min(var_0, ((1 ? 1 : -825943660))))));
                var_45 = (((((((~var_4) | 825943675)) + 2147483647)) << ((((((var_17 ? -1 : ((2147483640 ? 2147483640 : 30720)))) + 21)) - 20))));
            }
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                var_46 = ((1 ? var_13 : ((4599 & (var_7 & var_0)))));

                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    var_47 = ((((max(var_17, ((min(var_5, var_4)))))) ? (((53357 - ((max(25, 1)))))) : (max(((min(1, var_6))), (arr_42 [i_2] [i_16])))));
                    arr_61 [i_2] [i_16] = (((var_11 + var_1) ? ((18078026328931626760 ? var_8 : (arr_8 [i_1]))) : 8192));
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        arr_64 [i_17] = ((var_8 ? (((var_4 ? 1349109109 : var_0))) : (((arr_42 [i_17] [i_17]) ^ var_16))));
        var_48 = 13;
    }
    #pragma endscop
}
