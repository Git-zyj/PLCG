/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = 255;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (((((245 ? 64 : 268435455))) ? (var_7 <= var_9) : var_19));
                    var_21 = ((!((((arr_0 [i_0]) ? var_19 : (arr_5 [13] [i_1]))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((var_0 ? 64 : -2075309082));
                            var_22 = (((((~(arr_14 [i_4] [i_4 - 1] [i_4] [10])))) ? (((arr_9 [i_1 - 1] [i_3 - 1] [11]) ? ((max((arr_13 [i_0] [i_0] [i_0] [i_3 - 2] [i_4]), var_2))) : ((max(0, (arr_1 [i_0] [i_1])))))) : (((((-(arr_0 [i_1 + 1])))) ? (arr_3 [i_0] [i_0] [3]) : var_3))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_3]);
                        }
                    }
                }
                arr_17 [i_0] = arr_7 [6] [8];
            }
        }
    }
    var_23 = (min((((((var_11 ? var_17 : 2219658213))) ? (var_5 | 18446744073709551597) : var_11)), var_8));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_24 *= (arr_19 [i_5] [i_5]);

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_25 = ((~(max((~0), (min(var_5, 2147483647))))));
                    var_26 = (0 - -var_2);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_27 = ((var_4 ? var_12 : (arr_2 [i_5] [13])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_28 = ((((var_8 ? var_3 : (arr_5 [i_5] [i_6])))) ? ((5 ? (arr_5 [i_6] [i_6]) : (arr_13 [i_5] [i_6] [i_5] [i_9] [i_6]))) : (((6917529027641081856 ? var_8 : (arr_23 [i_6] [i_8] [i_8] [i_10])))));
                                var_29 -= (((arr_14 [10] [i_8] [i_9] [i_10]) ? ((((arr_3 [i_10] [i_10] [i_10]) % 44))) : (arr_29 [i_5] [i_5] [i_8] [i_8] [i_10])));
                                var_30 = (((arr_25 [i_5] [i_5] [i_5] [i_5]) || (!var_1)));
                                var_31 = (((arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]) || -1494081399));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_36 [i_11] [i_6] [i_6] [7] = ((((((arr_19 [i_6] [i_11]) ? -53 : (!11529215046068469744)))) ? (((var_16 <= (arr_9 [i_5] [i_5] [i_5])))) : (arr_9 [i_11] [i_11] [i_11])));
                    arr_37 [i_5] |= arr_29 [i_5] [i_6] [i_11] [i_11] [i_11];
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_32 ^= ((((min((((arr_41 [i_5] [i_6] [i_12]) ? (arr_26 [i_5]) : -26524)), (!0)))) ? ((((max((arr_19 [i_6] [i_12]), (arr_34 [i_5] [i_5] [i_5])))) ? -1 : (((arr_39 [i_12]) ? (arr_21 [i_5] [i_5] [i_12]) : 3672559776169122193)))) : (arr_14 [i_5] [i_6] [i_12] [i_6])));
                    var_33 = (((arr_1 [i_6] [i_6]) & (((max((arr_40 [i_5] [i_5] [i_5] [i_5]), (arr_9 [i_5] [i_6] [12])))))));
                }
            }
        }
    }
    #pragma endscop
}
