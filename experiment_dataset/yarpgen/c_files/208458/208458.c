/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -67;
        var_21 = 1;
        arr_3 [i_0] [i_0] = (min((max((min(-7037145210680768273, 130)), 0)), ((max(-71, 75)))));
        var_22 = (max((arr_1 [i_0]), (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_23 |= (((((-1152921504606846976 ? ((0 ? 1 : (arr_1 [9]))) : ((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1]))))))) ? var_1 : (arr_0 [i_1])));
            var_24 = (min(var_24, (3795695339175217499 <= 127)));
            var_25 = ((-var_7 <= ((2849180460195156526 ? var_19 : 136))));
            var_26 = (min(((((((arr_5 [i_0] [i_0] [i_0]) ? var_19 : (arr_6 [i_0] [i_1])))) ? ((~(arr_1 [3]))) : var_5)), (((((0 ? var_3 : (arr_1 [i_1 - 1])))) ? (arr_5 [i_0] [i_0] [i_0]) : (~36027697507336192)))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = arr_6 [i_0] [i_2];
            var_27 = (arr_9 [i_0] [i_0] [i_0]);
            var_28 += var_19;
            arr_12 [i_2] = 1117880534467415983;

            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                var_29 = (((1835270130 ? -120 : -73)));
                var_30 = 131040;
            }
            for (int i_4 = 4; i_4 < 11;i_4 += 1)
            {
                var_31 = (228 ? 1 : 3811894100);
                var_32 *= (11430445988304800185 * 3795695339175217519);
                var_33 = (((arr_0 [i_2 + 3]) - var_19));
            }
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_34 += (max(1311973747, (!-114)));
                        var_35 = (min((var_4 <= 159), (((~(arr_21 [i_5] [i_6] [i_6]))))));
                        var_36 -= ((!(arr_18 [i_0] [i_5 - 2])));
                    }
                }
            }
            var_37 = (((((arr_14 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 + 2]) ? 67 : (arr_14 [i_5 - 2] [i_5 - 1] [i_5 + 2] [i_5 + 1]))) <= (arr_14 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 1])));
        }
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            var_38 ^= ((-((((-6228656980117898924 ? 1 : -1))))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_39 = arr_26 [i_0] [i_8 - 1];
                arr_32 [i_9] [i_8] = ((!(arr_25 [i_8 + 1] [i_8 - 1] [i_8 - 1])));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_0] [2] = (max((max(1, (((arr_7 [i_0] [i_0]) ? var_6 : (arr_27 [i_0]))))), (((!((max((arr_25 [i_0] [i_0] [i_10]), var_2))))))));
                var_40 = var_4;
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                arr_38 [i_0] [i_8] [5] [i_11] = ((((((arr_17 [11] [11] [i_8 - 1] [i_8 - 1]) ? (arr_17 [i_0] [i_8] [i_8 - 1] [i_8]) : var_3))) ? ((min((arr_8 [i_8 - 1] [i_8 + 1] [i_11]), var_11))) : (((arr_16 [i_8 - 1] [i_0] [i_8 + 1]) ? var_4 : var_17))));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_41 += 1;
                            var_42 ^= (arr_15 [i_11] [i_13]);
                            var_43 = (max(((-var_15 ? ((-72 ? var_17 : (arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((0 ? 159 : -16265)))), (arr_7 [i_8] [i_0])));
                        }
                    }
                }
            }
            arr_46 [i_8 - 1] [i_0] = ((-(arr_23 [i_0] [i_0] [2])));

            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_44 = 9223372036854775807;
                var_45 |= 64;
                var_46 = ((max((arr_48 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1]), ((17863573582359742728 ? 18446744073709551615 : (-9223372036854775807 - 1))))));
                var_47 = ((!((max(var_0, (max((arr_19 [i_0] [i_14]), 25406)))))));
            }
        }
    }
    var_48 |= var_3;
    var_49 = ((96 ? 17753245625038143456 : 6228656980117898924));
    #pragma endscop
}
