/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((((arr_1 [i_0]) ? 2 : 20108)));
            var_16 = (min(-20108, (-2147483647 - 1)));
            arr_6 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (!3) : -18446744073709551600))) ? (((min((arr_2 [i_0]), var_12)))) : (arr_4 [i_0] [8] [i_0])));
            var_17 = (min(var_1, (var_0 && var_2)));
            arr_7 [8] [i_1] |= 15;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_18 = (var_6 ? (arr_10 [i_2 + 3] [i_2 + 3]) : var_9);
            var_19 = ((-(arr_8 [i_2 + 3] [i_2] [i_2 + 2])));
            var_20 = (((arr_4 [i_2 + 3] [i_2 + 4] [i_2 + 4]) | -10777));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_21 = (min(var_21, (arr_13 [i_0] [i_3] [i_3])));
            var_22 = ((-(((arr_10 [i_0] [i_3]) ? (arr_12 [i_0]) : -27))));
            var_23 = -var_0;
        }

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_24 = (min(var_24, (!15)));
            var_25 = (max(var_25, (((((!(((var_2 ? (arr_9 [i_4]) : var_0))))) ? (((((((arr_11 [i_4] [i_0]) ? var_0 : (arr_15 [i_0] [i_4]))) <= ((((arr_2 [i_4]) ? (arr_1 [i_4]) : -20108))))))) : var_8)))));
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_26 -= var_6;
                            var_27 = (max(var_27, (((!(arr_20 [i_0] [i_4] [i_5] [i_4] [i_7]))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] = (~(((((var_8 ? var_11 : var_10))) ? ((4477618254722304044 ? (arr_17 [i_7] [i_4]) : var_11)) : (min(1, 18446744073709551600)))));
                        }
                    }
                }
            }
            var_28 = (((128 <= var_2) ? ((-(arr_22 [i_0] [i_0] [i_4] [i_0] [i_4] [i_4]))) : (((((max(var_12, var_15)) == (min(1, -4477618254722304051))))))));
        }
        var_29 = ((1 * ((-((max(65, 971)))))));
        arr_26 [i_0] [i_0] = (max((((!((min(var_4, 4292202541571710192)))))), 23142));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_30 = 1;
                                arr_39 [i_8 + 1] [i_8 + 1] [i_11] = (((((var_5 ? 138 : var_12))) == (arr_32 [i_9 - 2])));
                                arr_40 [i_8] [i_8] [i_8 + 1] [i_8] [i_8] = (((arr_37 [i_12] [i_12] [i_9 + 1] [i_9 + 1]) - 4477618254722304026));
                            }
                        }
                    }
                    var_31 = (arr_32 [i_10]);
                }
            }
        }
        var_32 = (((arr_33 [i_8] [i_8] [i_8] [i_8]) ? (arr_33 [i_8 + 1] [i_8] [i_8 - 1] [i_8 + 1]) : (arr_38 [i_8 + 1] [i_8 + 2])));
        arr_41 [i_8] = (arr_32 [i_8 + 2]);
    }
    for (int i_13 = 2; i_13 < 8;i_13 += 1)
    {
        arr_44 [8] = ((1 ? 1 : 459818649313327533));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 6;i_16 += 1)
                {
                    {
                        var_33 &= ((1 << (-77 + 98)));
                        var_34 = (arr_32 [i_13]);
                    }
                }
            }
        }
        var_35 = max(65535, -4477618254722304051);
    }
    var_36 = (-(max(((2798285997847773356 ? 4477618254722304020 : 17300427215483733476)), var_0)));
    #pragma endscop
}
