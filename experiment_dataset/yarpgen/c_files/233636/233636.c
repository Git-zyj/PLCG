/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = ((75 ? (arr_2 [i_0] [i_1] [i_2]) : (arr_7 [i_2] [i_2])));
                    var_11 |= (~245);
                    var_12 = (min(2449, 288230376118157312));
                }
            }
        }
        var_13 = (max(var_13, ((((min(((38200 ? 127 : 65535)), 255)) * (((arr_6 [i_0]) ? 0 : 7936)))))));
        var_14 = ((-29 ? 1640976848237057058 : 22));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                arr_14 [i_3 + 2] &= min((-99 / 16), (25521078 / 127));
                arr_15 [9] [i_3] = ((((((arr_9 [i_3]) / (((arr_9 [i_3]) ? var_7 : 9210))))) ? ((-(((arr_11 [i_4]) ? 0 : (arr_12 [i_3]))))) : (((-(arr_11 [i_3 + 2]))))));

                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    var_15 ^= (~224);
                    arr_18 [i_3 + 1] [i_3] [i_4] [11] = (min(((min((arr_10 [8]), (((arr_16 [i_3] [i_3 - 2] [i_3]) + (arr_13 [i_3 + 1])))))), (min((255 * 123), (((arr_11 [i_5]) & 0))))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_16 = (-127 - 1);
                                arr_27 [i_3 + 2] [i_4] [21] [i_7] [i_8] [i_6] &= (1 | 1640976848237057058);
                            }
                        }
                    }
                    var_17 = ((!(((var_7 ? (arr_17 [i_3 - 1] [i_3 - 1] [i_6]) : 255)))));
                    arr_28 [i_3] [i_3] = ((255 < (((-73 && ((min(-7404098878069811894, 12))))))));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_3 - 1] [i_9] [i_3 - 1] [i_3] = ((var_8 ? (arr_26 [i_9] [i_9] [i_9 - 2] [i_9] [i_9]) : (arr_16 [i_3] [i_4] [i_9])));
                    arr_33 [i_4] [i_4] [i_9] = (arr_20 [i_3] [i_4] [i_4]);
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_3] [i_3] [i_3] [i_3] = (((((15272448077070495901 != (arr_22 [i_10] [4] [4])))) | (0 >= 18446744073709551615)));
                    arr_37 [i_3] [i_4] [i_10] &= (((arr_31 [i_4 - 1]) ? ((((arr_26 [i_3] [i_3] [i_10 - 1] [i_3] [i_4 - 1]) ? var_0 : 2770209470))) : (177 ^ -2525236813646354902)));
                    arr_38 [i_3] = (arr_34 [i_3 - 1] [i_3 - 1] [i_4 - 1]);
                }
            }
        }
    }
    var_18 = ((var_7 ? var_3 : (((min(var_9, var_2)) & (~3474501489735602757)))));

    /* vectorizable */
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_19 = (((arr_23 [i_11] [1] [i_11 - 1] [i_11 - 1] [i_11]) ? ((2202232684 ? -113 : 5631239356396607525)) : (arr_42 [i_11 - 1])));
            var_20 = (((arr_22 [i_11 - 1] [i_11] [i_11 - 1]) < (18 / 65534)));
        }
        arr_44 [i_11 - 1] [i_11 - 1] = (((arr_29 [i_11 - 1] [i_11] [i_11 - 1]) ? 110 : (0 / 18689)));
        arr_45 [i_11] [i_11 - 1] = (((arr_16 [i_11 - 1] [i_11] [i_11]) | (1 * 2698296471)));
    }
    #pragma endscop
}
