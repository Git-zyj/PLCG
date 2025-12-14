/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_18 *= (((((var_10 ? (!var_2) : (((((arr_5 [i_0] [i_0] [i_0]) + 2147483647)) << (var_14 - 60922)))))) ? (1493677790 <= 0) : (((arr_2 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1]) : (arr_3 [i_0])))));
                var_19 = (min(var_19, (arr_1 [i_0])));
                arr_7 [5] [i_1 + 2] [i_1] = ((+((((min((arr_4 [i_0] [i_0] [i_0]), (arr_1 [i_0]))) != (arr_5 [i_1 + 3] [i_1 + 1] [i_1 + 3]))))));
            }
        }
    }
    var_20 = ((1888886385 ? 981967511 : -1480905214));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_16 [i_3] = (arr_6 [i_2]);
                    arr_17 [i_3] [i_4] = ((((arr_2 [i_2] [i_3]) || 32767)) || (((~(arr_9 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 ^= (1493677790 ^ 981967511);
                                var_22 = ((-(arr_20 [i_6] [i_6] [i_4] [i_5] [i_3] [3])));
                            }
                        }
                    }
                    var_23 = (((arr_25 [i_4] [i_3] [i_2]) ? (((arr_22 [i_4] [i_4] [i_3] [i_3] [i_2]) ? (arr_19 [i_2] [i_3] [i_4] [i_4] [i_4]) : (arr_0 [i_3]))) : (((1493677790 ? 1493677790 : 1891221137)))));
                    var_24 = (max(var_24, (((arr_14 [i_2] [i_2] [i_3] [i_2]) ? (arr_10 [i_4] [i_3]) : (arr_11 [i_2] [i_2] [i_2])))));
                }
            }
        }
        var_25 = ((((var_1 | (arr_6 [i_2]))) % (arr_11 [i_2] [i_2] [i_2])));
        var_26 = (min(var_26, (((((((arr_3 [i_2]) << (var_8 + 190733925)))) ? (arr_13 [i_2]) : (arr_18 [i_2] [i_2] [i_2]))))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 6;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_27 = (min(var_27, ((((arr_25 [i_7 + 1] [i_8 + 4] [i_8]) ? ((((arr_28 [i_2]) + (arr_26 [i_9])))) : (arr_0 [i_2]))))));
                        arr_33 [i_2] [i_7] [i_7] [i_8] [i_7] [i_2] = ((((((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_3 : (arr_20 [i_2] [i_7 + 2] [i_7] [i_7] [i_8] [i_9])))) ? (((var_14 ^ (arr_9 [i_7])))) : (((arr_32 [i_8 - 3]) ? -1550411315 : 3312999784))));
                        var_28 = (((arr_31 [i_9] [i_7 - 1]) + (arr_31 [i_7] [i_7 + 1])));
                        arr_34 [i_2] [i_7] [i_8] = (arr_32 [i_7 - 1]);

                        for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
                        {
                            var_29 = 79;
                            var_30 -= (arr_21 [9] [i_7] [i_7] [i_7 - 1] [1] [i_7]);
                            arr_39 [i_2] [0] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_10] = (arr_25 [i_10 + 1] [i_10] [i_10]);
                        }
                        for (int i_11 = 1; i_11 < 8;i_11 += 1) /* same iter space */
                        {
                            arr_43 [i_2] [i_7] [i_8] [i_8] [7] [i_9] [i_11] = (((arr_29 [i_7 + 1] [9]) ? (arr_40 [i_11 + 1] [i_7 + 1] [i_8 + 3] [i_7 + 1] [i_9] [i_8 + 2] [i_2]) : ((981967512 >> (((-127 - 1) + 137))))));
                            var_31 = (arr_18 [i_7] [i_8] [i_11]);
                            var_32 = (max(var_32, (((arr_41 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_8 + 4] [i_8 - 2]) ? (arr_41 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_8 + 2] [i_8 - 1]) : (arr_41 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_8 - 2] [i_8 - 1])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 3; i_12 < 18;i_12 += 1) /* same iter space */
    {
        arr_47 [i_12] [i_12] = (arr_46 [i_12] [i_12]);
        var_33 = (+(((arr_45 [i_12 - 3]) ^ (((arr_1 [i_12]) ? (arr_44 [i_12]) : var_8)))));
        var_34 = (max((-80 && 1), (arr_46 [i_12 - 2] [i_12 - 3])));
        var_35 = var_0;
    }
    for (int i_13 = 3; i_13 < 18;i_13 += 1) /* same iter space */
    {
        var_36 = ((((!(arr_2 [i_13 - 1] [i_13 + 2]))) || ((((arr_2 [i_13 - 2] [i_13 + 2]) ? -80 : (arr_2 [i_13 + 2] [i_13 - 2]))))));
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                {
                    var_37 = (arr_49 [i_13]);
                    var_38 *= (arr_6 [12]);
                    var_39 = (((min(((var_5 - (arr_2 [i_13 - 2] [i_14 - 2]))), (arr_3 [1]))) & (((((min((arr_44 [i_13]), var_14))) ? (arr_2 [i_13 + 1] [i_13]) : (max((arr_3 [i_15]), (arr_48 [i_13]))))))));
                }
            }
        }
        arr_58 [i_13] [9] = (min(var_16, ((~(arr_45 [i_13 + 2])))));
        arr_59 [i_13 + 1] [i_13] = (((arr_52 [i_13] [i_13] [i_13]) ? var_4 : ((max(((var_12 ? var_3 : (arr_54 [i_13]))), (arr_54 [i_13 + 1]))))));
    }
    var_40 = var_7;
    #pragma endscop
}
