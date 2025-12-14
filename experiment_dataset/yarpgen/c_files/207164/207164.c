/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_1] [i_0] [i_1] = 1480193223;
            var_14 ^= ((((((((3410801674236326427 << (var_5 - 944565029)))) ? 1315 : (var_6 - var_3)))) <= (((var_7 ? var_10 : var_10)))));
            arr_6 [i_1] = (min((((((((!(arr_3 [i_0] [i_1]))))) - (arr_0 [7])))), var_13));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_0] = (((~var_10) & ((min(var_13, (var_5 - var_12))))));
            var_15 = (min(var_15, (((-((((var_2 ? var_6 : 4801120987139342377)))))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_16 *= ((var_13 <= ((var_2 ? var_10 : var_10))));
                arr_12 [i_0] [i_0] [i_0] = ((~(-1316 != -56)));
                arr_13 [i_3] [i_2] [7] = ((var_11 ? (arr_3 [i_3] [i_0]) : (((arr_2 [i_2]) % 42561))));
            }
            for (int i_4 = 3; i_4 < 8;i_4 += 1) /* same iter space */
            {
                var_17 &= (((var_2 ^ -27777) >> ((((((((arr_2 [i_0]) * var_6))) ? ((var_6 ? 4294967293 : 4294967295)) : var_11)) - 4294967288))));
                arr_17 [i_4] [i_2] [i_0] [i_4] = var_9;
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_18 -= ((3415587413532174892 / (((511 ? 1316 : (~var_3))))));
                            var_19 = (arr_11 [i_0] [i_2] [i_4] [i_6]);
                            var_20 = (min(var_20, ((((((((var_3 != (arr_16 [i_5] [i_5]))) ? (min(var_6, var_9)) : var_5))) ? (((var_5 ? (var_8 != var_5) : (arr_15 [i_0] [i_2] [i_4] [i_5])))) : (min((((arr_16 [i_5] [i_2]) ? var_2 : 15035942399473225188)), ((var_2 ? var_13 : var_2)))))))));
                            arr_23 [i_0] [i_0] [i_4] [i_0] [i_0] = (max(var_8, var_1));
                        }
                    }
                }
                var_21 = ((-((var_12 ? (arr_7 [i_4 - 3] [i_4] [i_4 - 1]) : var_12))));
            }
            /* vectorizable */
            for (int i_7 = 3; i_7 < 8;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_28 [i_7] = (var_3 ^ var_1);
                    var_22 *= -5592455717983056229;

                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {
                        var_23 = var_13;
                        arr_33 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9] = (((arr_30 [i_9] [i_9 + 2] [i_7] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 3]) <= var_2));
                        var_24 *= var_12;
                    }
                    arr_34 [i_0] [i_7] [i_2] [i_2] [i_7 + 3] [i_8] = var_9;
                }
                var_25 = (max(var_25, var_10));
                arr_35 [i_0] [i_0] [i_7] = ((3415587413532174892 >> (var_13 - 12875006013670422959)));
                var_26 = 2160714121;
            }
            for (int i_10 = 3; i_10 < 8;i_10 += 1) /* same iter space */
            {
                var_27 = (min(((3693935384 || (arr_15 [i_0] [i_2] [i_10] [2]))), ((((!(arr_0 [i_0]))) && (((var_4 ? var_5 : 804070886)))))));
                arr_39 [i_0] [i_2] [i_10] [i_10 - 2] = ((var_11 ? (((var_10 + 9223372036854775807) << ((((var_9 ? var_1 : 32751)) - 38)))) : ((min((min(3002492331, (arr_25 [i_0]))), var_5)))));
            }
        }
        var_28 = ((((max(var_5, ((((arr_4 [i_0] [i_0]) == 3)))))) ? (min(((32747 ? var_8 : var_0)), 32747)) : (~var_10)));
    }
    var_29 = ((846949977 * (((17846 == (var_1 <= var_2))))));
    #pragma endscop
}
