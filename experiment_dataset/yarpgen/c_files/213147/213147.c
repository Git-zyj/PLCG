/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 2] = (+-0);
        var_14 = var_8;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            var_15 = 19;
            var_16 *= ((((var_6 ? var_12 : -7539772799884404407)) * 1));

            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                var_17 = ((-25084 & (var_1 & var_2)));
                var_18 = 7570;
                var_19 = ((var_6 ? 51095 : var_4));
                var_20 = -54122;
            }
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_14 [12] [i_4] &= ((7 >> (255 - 237)));
            arr_15 [i_4] [i_1] [i_1] = var_0;
            arr_16 [i_1] [i_1] = 536870912;
        }
        arr_17 [i_1] = ((3936 ? -146805016 : (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 2])));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_24 [i_1] [i_1] = (((((var_12 ? 183407793 : var_11))) ? var_2 : var_3));

                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_21 = var_5;
                    var_22 = 249;
                    var_23 = -5701;
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, 157));
                    var_25 = (!25);
                    arr_30 [i_1] = (7 < 536870904);
                    var_26 = (max(var_26, 8547172087161649740));
                }
            }

            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                var_27 ^= ((~(arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2])));

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    arr_38 [i_1] [1] [i_5] [i_9] [i_1] [i_10] = -var_12;

                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_1] [i_9] [i_9] [0] [i_1] [i_1] = var_3;
                        var_28 = (((((var_12 ? 18446744073709551614 : 0))) || var_13));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        var_29 = 0;
                        var_30 = 36836586868471963;
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_5] [i_5] [i_1] = ((963363789 ? ((var_9 ? 142 : 536870916)) : (arr_12 [i_1 + 1])));
                        var_31 ^= (!2494229068708550015);
                        var_32 = (~57344);
                    }
                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        var_33 = (max(var_33, (!25103)));
                        arr_54 [5] [i_5] [i_9] [6] [i_1] [4] = ((0 ? (-127 - 1) : 0));
                        var_34 = (!280774608);
                    }
                    var_35 += var_2;
                }
            }
            for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
            {
                var_36 = (max(var_36, (var_13 / 7313855830129722764)));
                var_37 = var_6;
            }
            var_38 = (min(var_38, (!var_3)));
            var_39 = ((var_1 >> (var_5 - 28075)));
        }
    }
    for (int i_16 = 2; i_16 < 11;i_16 += 1) /* same iter space */
    {
        arr_59 [i_16] [i_16] = ((-2494229068708550015 == ((max(((((arr_55 [i_16] [9] [i_16 - 2] [7]) < var_6))), var_3)))));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    {
                        var_40 = (min(var_40, ((max((((1917038979 < (var_8 / var_9)))), ((-(((arr_45 [i_19] [2] [i_17] [i_17] [i_16]) ? var_11 : -624346751676603043)))))))));
                        var_41 = 835;
                    }
                }
            }
        }
        arr_69 [i_16] = ((-((max(var_13, (var_6 == var_13))))));
    }
    var_42 = (max(var_42, var_12));
    #pragma endscop
}
