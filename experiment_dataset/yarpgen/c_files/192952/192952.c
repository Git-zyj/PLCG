/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = ((((min((arr_7 [i_0] [i_1] [i_2]), (arr_7 [i_0] [15] [15])))) + ((~(arr_7 [i_0] [i_0] [i_0])))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (~(arr_3 [i_0]));
                    var_22 = (max((min((arr_7 [i_0] [i_1] [i_2]), var_2)), (min((arr_2 [i_0] [i_0]), var_14))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_23 = (((~var_14) ? ((3037231588 + (arr_1 [i_4] [i_4]))) : (!var_15)));
                    var_24 = ((~(arr_10 [i_3])));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_21 [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 2] [i_3] = arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1];

                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, (((~(arr_11 [i_3] [i_3 - 2]))))));
                            arr_24 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_6] [i_3 + 2] [i_6] [i_3] = ((1778863656 - (((!(arr_7 [i_3] [i_3] [i_7]))))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_8] [i_3] [i_6] [i_5] [i_4 - 1] [i_3] [17] = (arr_22 [i_4 - 1] [i_4 - 1] [i_3 + 1]);
                            var_26 -= ((((var_1 / (arr_13 [i_3] [i_8]))) - (((arr_25 [i_3] [i_4] [i_3] [i_6] [i_6]) ? (arr_8 [i_3 - 2] [i_6] [i_8]) : -5687763339130114281))));
                            var_27 = (((552757767 % 209) > (var_13 <= 18446744073709551615)));
                            var_28 = (arr_0 [i_4 - 1]);
                        }
                        arr_29 [10] [i_3] [i_3] [i_3] = arr_12 [i_3];
                    }
                    var_29 = (min(var_29, (!107)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    var_30 = (~1778863664);
                    var_31 = (((arr_10 [i_3]) <= ((((!(arr_1 [i_3] [i_10])))))));
                    arr_35 [i_3] [i_3] [i_3] = (((arr_6 [i_3 - 1]) * (((105 > (arr_33 [i_9]))))));
                    var_32 = var_4;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    arr_42 [i_11] [i_11] [i_11] [i_12] |= ((var_8 ? ((var_11 ? 2516103631 : 2516103631)) : (arr_12 [i_11])));

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        arr_45 [i_3 + 1] [i_13] [i_3] = ((-72 ? 1 : 170));
                        var_33 = 552757767;
                        arr_46 [i_3] [i_3] [i_13] [i_13] = (((arr_31 [i_3 + 2] [i_3 + 2] [19]) ? (arr_38 [i_3 + 2] [i_11] [i_12]) : (arr_31 [i_3 + 2] [i_11] [i_12])));
                        var_34 = var_1;
                        var_35 = ((((((arr_30 [i_3] [i_11] [i_13]) ? 49 : var_10))) ? (!var_3) : ((245 ? (arr_22 [i_3] [i_11] [i_12]) : var_0))));
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        arr_51 [i_3] [i_3] [i_3] = ((var_10 / (arr_18 [i_3 - 1])));
                        arr_52 [i_3] [i_12] [i_14] [i_14] [i_3] [i_3] &= (1 ^ -2753);
                        arr_53 [i_3] [i_11] [i_3] [i_3] [i_14] = (((arr_44 [i_3] [i_3] [i_12]) ? (((~(arr_30 [i_3] [i_12] [i_14])))) : 18014398509481983));
                        var_36 = (arr_1 [i_3 - 1] [i_11]);
                    }
                    arr_54 [i_3 - 2] [i_11] [i_3] = (arr_3 [i_3]);
                    var_37 = ((var_0 << (((var_12 || var_17) - 1))));
                }
            }
        }
    }
    var_38 = 2516103640;
    #pragma endscop
}
