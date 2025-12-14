/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (max(var_11, var_3));
        arr_3 [i_0] = -1032489420;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = max(((~(arr_1 [i_1]))), (2284339056 - 2284339056));
        arr_9 [i_1] = ((~3298081403) - 4192);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_12 = ((min((max(9366, 2284339056)), (arr_6 [i_2] [i_2]))) <= 41366);
        var_13 = (min(var_13, ((~(max((min((arr_1 [1]), 1)), 6144))))));
        var_14 *= (((~4192) - ((~(~6144)))));
        var_15 ^= (min(15, 590454619));
        var_16 = ((((max((min((arr_4 [i_2] [i_2]), var_7)), ((var_10 ? (arr_0 [i_2]) : 4294961149))))) ? ((-(~4294961151))) : 1));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_16 [16] = (arr_14 [i_3]);
        arr_17 [i_3] = 4294961121;

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_17 = (((min((61319 == 3367488087), (min((arr_14 [i_3]), 2284339082)))) | (arr_14 [i_4 + 4])));
                var_18 = (max((arr_22 [i_3] [i_4] [i_5]), 33532));
                arr_23 [i_5] = (var_2 & 0);
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_34 [i_3] [i_4] [i_6] |= var_7;
                            var_19 = var_6;
                            arr_35 [i_3] [10] [i_6] [i_7] [0] [i_6] = (arr_27 [i_3] [i_8] [i_8] [i_4 + 4] [i_8] [i_6]);
                        }
                    }
                }
                var_20 *= ((arr_30 [i_4] [i_4] [i_4 + 3] [i_4 - 1]) | 4174);
            }
            arr_36 [i_3] |= ((~(((~6140) ? 1 : -1))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_21 ^= (min(((((var_6 ? 4294967295 : 61340)) & ((4294967288 ? 1770839219 : 0)))), (min((arr_28 [i_3] [i_4] [0] [i_4] [2]), (arr_32 [i_3] [i_4] [i_4] [i_10] [i_11] [i_4 + 1] [0])))));
                            arr_45 [i_3] [i_3] [i_3] [i_10] [i_11] = min((max(514719509, 4840)), (((arr_30 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 3]) ? 61362 : (arr_43 [i_10] [i_10]))));
                        }
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            var_22 = ((min((arr_42 [i_3] [i_12 + 1] [i_12] [i_12 + 1] [i_3]), 49834)) - ((min(((-(arr_14 [i_12]))), (((arr_14 [7]) << (49840 - 49811)))))));
            arr_48 [i_3] [i_3] = 3780247787;
        }
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            var_23 = 1;
            arr_51 [i_13] [i_3] [i_3] = (((min((15708 * var_2), ((max(49834, (arr_49 [i_3])))))) << var_1));

            for (int i_14 = 3; i_14 < 15;i_14 += 1)
            {
                arr_54 [i_14] = arr_26 [i_13 - 2] [i_14 + 1];
                arr_55 [i_3] [i_3] |= min((arr_33 [i_13 + 1] [i_14 + 1] [i_14] [i_14 + 2] [i_14 + 2]), ((min(1959950334, 1))));
                var_24 = (max(var_24, var_2));
            }
        }
        var_25 = (min(37755, 49834));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 8;i_16 += 1)
        {
            {
                arr_61 [i_16] = min(((min(var_6, (28 <= 1)))), (((4 ? var_10 : var_0))));
                var_26 = 65535;
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 9;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            {
                                arr_69 [i_15] [i_18 - 3] [i_15] |= ((min(((4294961151 & (arr_30 [i_15] [8] [1] [i_18]))), 1)));
                                arr_70 [i_18] [i_16] [i_16] [i_16] [i_16] [i_16] [8] = arr_26 [i_17] [i_18 + 1];
                                arr_71 [i_18] = ((((4294967278 >> (var_3 - 2125511247)))));
                                var_27 *= (max((arr_62 [i_16 - 2] [i_16 + 1] [i_16 + 1]), 4294967289));
                            }
                        }
                    }
                }
                var_28 = var_6;
            }
        }
    }
    var_29 |= ((min(65530, 4840)));
    #pragma endscop
}
