/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0 + 1]) ? var_4 : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((!(arr_1 [i_0 + 1])));
        arr_4 [i_0] [i_0] = ((((-1415266659 ? (arr_1 [i_0]) : var_8)) ^ (!0)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 = ((+((((((arr_7 [i_1] [6]) ? var_12 : 1))) ? (((min(7669, 0)))) : ((var_3 ? var_3 : var_1))))));
        arr_8 [i_1] [i_1] = (min((((var_2 * ((var_2 ? var_10 : (arr_0 [i_1] [i_1])))))), var_1));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = ((-(arr_6 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_14 |= ((+(((-127 - 1) ? (arr_15 [i_3]) : var_4))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 11;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_26 [i_6] = (((arr_17 [i_6] [i_5 - 4] [i_4 - 1]) ? (arr_7 [i_4 - 3] [i_5 + 1]) : (arr_21 [i_5] [i_4 - 2] [i_4] [i_5])));
                            var_15 = var_7;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_16 = ((((1594115127 ? 4665172757712037938 : (arr_28 [i_2] [2]))) < (var_3 ^ var_2)));
                            arr_29 [i_4] [i_7] [i_4 - 3] [i_4] [i_3] [i_7] [2] = (((arr_12 [i_5]) ? var_5 : 3963759859287542372));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_32 [i_2] [i_3] [9] [i_2] = var_4;
                            var_17 = ((!((((arr_15 [i_2]) ? 0 : var_3)))));
                        }
                        var_18 = (arr_17 [i_2] [i_3] [i_5]);
                    }
                }
            }

            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                arr_36 [9] [9] [9] = (((arr_18 [i_2] [i_9 - 2]) ? (arr_18 [i_3] [i_9 - 2]) : var_9));

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_19 = (arr_5 [i_2] [i_2]);
                    arr_39 [6] [6] = (((((var_0 ? var_0 : 79))) ? (arr_28 [i_9 + 3] [i_9 + 1]) : (var_7 > var_0)));
                }
                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_45 [i_2] [i_3] [i_9 + 1] [i_3] [i_2] [i_12] = (((-410801610 / var_4) ? (((-12245 + 2147483647) << (var_3 - 22304))) : (arr_43 [i_9 - 1] [i_9 - 2] [i_9 + 4] [i_9 + 4] [i_11] [i_11])));
                        arr_46 [i_12] [i_12] = (arr_40 [i_2] [i_3] [i_2] [i_11]);
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_20 = ((-((var_10 ? var_2 : (arr_38 [i_11] [i_3] [i_11] [i_3] [i_11] [i_9 + 3])))));
                        var_21 ^= (var_5 >= var_0);
                        arr_50 [i_2] [i_13] = (var_4 * var_8);
                    }
                    arr_51 [i_3] [i_3] [i_11 + 3] = (((arr_33 [i_3] [7]) ? (var_5 || var_2) : ((var_11 ? var_1 : 1))));
                    arr_52 [i_11 - 2] [i_11] [5] [7] [i_2] = 17426;
                }
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    var_22 = ((((10804699196483062333 ? var_1 : (arr_33 [1] [i_3]))) * var_2));
                    arr_56 [i_2] [i_3] [i_2] [i_14] [i_14] = (((arr_37 [i_2] [i_2] [i_14] [i_3]) ^ (2700852169 > 1)));
                    var_23 -= (arr_40 [i_2] [i_9] [i_2] [i_2]);
                }

                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    arr_59 [i_15] [i_15] [i_2] [i_15] [i_2] = (((var_1 ? var_1 : (arr_1 [i_9 + 1]))));
                    var_24 = ((!(arr_27 [i_9] [i_9] [i_15] [i_9 - 1])));
                }
            }
            var_25 = ((var_6 & (arr_30 [i_3] [i_3] [i_2] [i_2] [6] [i_2] [i_2])));
            var_26 = ((-(arr_11 [i_2])));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        arr_63 [i_16] [i_16] = ((((~(arr_1 [i_16]))) * -69));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 12;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 11;i_20 += 1)
                        {
                            {
                                var_27 |= 112;
                                arr_74 [i_16] [i_17] [i_18] [i_18] [i_20] = (((9223372036854775807 & var_4) ? 0 : ((29231 ? var_1 : var_7))));
                                arr_75 [i_17] [i_17] = ((-(arr_69 [i_20] [i_17] [i_17] [i_18])));
                                arr_76 [i_16] [i_17] [i_17] [i_17] [i_20 + 2] = (((arr_0 [i_17] [i_17]) ? var_2 : (arr_66 [i_16])));
                                var_28 = ((-((var_5 ? var_6 : var_10))));
                            }
                        }
                    }
                    arr_77 [i_17] [i_17] [i_18] [i_18 + 1] = (12775636377901918339 - var_11);
                    arr_78 [i_17] = ((var_7 ? var_11 : -var_4));

                    for (int i_21 = 2; i_21 < 13;i_21 += 1)
                    {
                        arr_82 [i_17] [i_18] [i_18 + 1] [i_21] [i_16] [i_16] = (((arr_64 [i_17] [i_17]) ? var_7 : ((var_4 ? var_5 : -429875266315282143))));
                        arr_83 [i_17] [i_17] [i_18] [i_17] [i_21] [i_16] = ((var_3 ? var_5 : 19759));
                    }
                }
            }
        }
        var_29 = (16340 > var_3);
        var_30 = (var_10 != 7642044877226489283);
        arr_84 [i_16] = (((((var_6 < (arr_80 [4] [10] [i_16] [i_16])))) & (((var_9 != (arr_79 [i_16]))))));
    }
    var_31 = var_2;
    var_32 = (!var_9);
    #pragma endscop
}
