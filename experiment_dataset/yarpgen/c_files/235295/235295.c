/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = 31;
                    var_16 = var_10;
                }
            }
        }
        var_17 = 3485003992;
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_11 [16] = (arr_0 [1]);
        arr_12 [i_3] = (((((arr_1 [i_3 + 2] [i_3 - 1]) / (arr_1 [i_3 - 1] [i_3 + 1]))) % ((max(127, (arr_4 [i_3 + 1] [i_3 + 1] [4]))))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_18 = ((!(((((-547583209 % (arr_3 [i_3 - 1]))) >> ((((var_11 - (arr_10 [i_3] [i_3]))) - 14942145958081332750)))))));
            arr_15 [i_4] [i_4] = (min((var_5 * var_10), (var_11 != -var_8)));

            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                arr_19 [i_3 + 2] [i_4] [15] = 411796962616301804;
                var_19 = (((min(((min(var_13, var_13))), -127)) == (((((arr_13 [i_5 + 1] [i_5 - 1] [i_5 + 1]) > (max(2272763454, var_13))))))));
                arr_20 [i_3] [i_4] [i_3] [i_3] = (min(172, 121));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_20 = (var_4 != (arr_18 [i_3] [17] [17] [i_6]));
                        var_21 = ((((((770200567 ? var_13 : var_12)) * (117 / 211))) + var_6));
                        arr_26 [i_4] [i_7] [i_7] = (((((-113 ? 0 : var_13)))));
                        arr_27 [2] [i_7] = arr_7 [i_3] [i_4] [i_6] [i_7];
                        var_22 = (~127);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_23 = var_9;
            var_24 = ((-(arr_7 [i_3] [i_3 - 1] [i_3] [i_3])));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_34 [2] = (((((~4294967295) % (min(var_8, (arr_9 [i_3] [i_3]))))) / ((max(var_13, 1373584134)))));
            var_25 = ((((((arr_9 [i_3 - 1] [i_3 + 1]) ? var_1 : var_4))) ? ((~(arr_9 [i_3 + 2] [i_3]))) : ((((arr_9 [i_3 + 1] [i_3 + 2]) ? 11 : var_10)))));
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_39 [i_3] [i_10] [i_10] = ((65535 < (min((arr_25 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [6] [i_3 + 2]), (max((arr_37 [i_3] [i_3 + 2] [i_10]), var_2))))));
            var_26 = 65535;
            arr_40 [i_3] [i_10] [i_10] = ((2058982766 ? 122 : -113));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_44 [i_3 + 2] [i_10] [i_11] [i_11] = (770200585 == 142787768);
                arr_45 [i_3] [i_3] [2] = var_10;
                var_27 = (((!547583209) ? 4294967295 : ((7 ? 60 : 7974257940084349056))));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_28 = var_6;
                var_29 = var_4;
                var_30 = ((((var_9 / (((arr_6 [i_3] [i_10] [i_12] [i_12]) ? 1 : var_2)))) >= ((((((var_11 ? -6223551400619151072 : 326791198)) > var_6))))));
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {

                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {
                    arr_53 [i_3] [i_3] [i_3] [i_10] [i_13] [i_14] = (max((min((max(9775, var_9)), (!-123))), 56));
                    var_31 = ((var_9 ^ ((((!(!var_10)))))));
                }
                var_32 = (arr_5 [i_3] [6] [16]);
                arr_54 [i_3 + 1] [i_3 + 1] = 1;
                var_33 = ((-(--65525)));
            }
        }
    }
    var_34 = (4294967295 % var_2);
    var_35 = var_9;

    for (int i_15 = 1; i_15 < 17;i_15 += 1) /* same iter space */
    {
        arr_59 [i_15] = (max(((max(var_6, 3))), var_8));
        arr_60 [i_15] [i_15] = ((max((arr_22 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1]), var_4)) + ((max(var_7, 65535))));
    }
    for (int i_16 = 1; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_36 = (((((((arr_14 [8]) | 128))) ^ (var_11 & var_1))));
        arr_63 [0] = ((-547583205 ? var_2 : (((min(3922637596, var_8))))));
        arr_64 [i_16] = ((4611545280939032576 ? (((arr_62 [i_16 - 1]) / (arr_8 [i_16] [i_16] [0] [0]))) : ((((max(var_8, 65535)) != -var_5)))));
    }
    #pragma endscop
}
