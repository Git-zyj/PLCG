/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~-2139964493) != var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = -15;
        var_12 = (min(var_12, (arr_0 [i_0])));
        var_13 = (max(var_13, var_7));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = ((~((((arr_0 [i_1]) & -2437222059475730585)))));
        var_14 = (max(9223372036854775807, 1906180585623850568));
        var_15 = ((min((-2147483647 - 1), -2595853627369764396)));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 = (((arr_0 [i_1 - 1]) ? 78 : (arr_4 [i_1 + 2] [i_1])));
            var_17 &= -0;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_18 = -254;
                            arr_15 [i_1] [i_1] [i_3] [i_4] [i_5] = (arr_4 [17] [i_1]);
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_20 [i_1] [i_1] [i_1] = ((1 % (max((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 2]), (arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1])))));
            var_19 |= var_4;
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_20 = (27395 ^ 27118);
                            var_21 = (min((min(-111, 8515873941315024980)), (arr_0 [i_1 + 2])));
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_33 [i_1] [i_6] [i_1] = (min((((arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1]) ? (arr_16 [i_1 + 2]) : (arr_16 [i_1 - 1]))), (arr_32 [i_6] [i_10])));
                var_22 = (max(var_22, 192));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_41 [i_11] [i_1] = (min(-var_3, (min((((1580085608464954368 ? 1 : var_4))), (arr_25 [i_1])))));
                            var_23 = (arr_9 [i_1] [i_1] [i_1 + 1] [i_1]);
                            arr_42 [i_1] [i_1 + 2] [i_10] [17] [i_12] = ((-(arr_27 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_10])));
                            var_24 |= ((~(~var_6)));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                var_25 = (max(var_25, var_9));
                var_26 = (min(var_26, (4294967295 || var_9)));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                var_27 = (((arr_11 [i_1]) ? (arr_39 [10] [i_6] [i_14] [i_1 - 1] [i_6]) : (arr_11 [i_1])));
                arr_48 [i_1] [i_1] [i_1] = ((-(arr_37 [i_6] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1])));
                arr_49 [i_1] [14] [i_6] [12] = (((arr_31 [i_1 - 1]) ? (arr_21 [i_1]) : (arr_31 [i_1 + 2])));
                var_28 *= (-32767 - 1);
            }
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    arr_55 [i_6] [i_1] = ((((((((18 ? (arr_32 [i_1] [i_1]) : 1))) ? (((min(var_0, (arr_43 [i_6]))))) : (arr_54 [i_1] [i_1] [i_1] [10])))) ? (9753 <= 1) : 13013));
                    var_29 = ((((!((min(1175771432, var_9))))) ? (min((arr_14 [i_15] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]), (arr_14 [i_16] [i_16] [i_1] [i_1] [i_1 + 2] [i_1]))) : (arr_17 [i_1 + 2])));
                    var_30 = (((((var_5 ? (arr_8 [i_6] [0]) : var_0))) ? (((~(arr_26 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1])))) : ((~(arr_24 [i_1] [i_1 + 2] [i_1] [i_1 + 1])))));
                    arr_56 [i_1] [i_15] [i_15] [i_15] [i_15] = (max(((((((arr_3 [i_1] [i_16]) ? var_2 : var_0))) ? -var_6 : var_2)), ((~(max(-1967978329, 0))))));
                    var_31 = ((min(var_9, var_4)));
                }

                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    arr_59 [i_1] [i_1] [i_15] [i_17] = (min(2151814772914986769, -1));
                    var_32 = var_4;
                }
                for (int i_18 = 1; i_18 < 17;i_18 += 1) /* same iter space */
                {
                    var_33 = arr_51 [i_6] [i_1] [i_18 - 1];
                    var_34 = (-59759 ? (~3625434247534400467) : (((arr_51 [i_18 + 1] [i_1] [i_1 + 2]) ? (arr_51 [i_18 + 1] [i_1] [i_1 + 2]) : (arr_51 [i_18 + 1] [i_1] [i_1 + 2]))));
                    var_35 = var_2;
                    arr_63 [i_1 - 1] [i_1 - 1] [i_1] [15] [i_18 - 1] = var_9;
                }
                for (int i_19 = 1; i_19 < 17;i_19 += 1) /* same iter space */
                {
                    var_36 = var_6;
                    var_37 = (arr_35 [6] [i_1] [i_1] [i_1] [i_15] [i_19]);
                }
            }
        }
    }
    #pragma endscop
}
