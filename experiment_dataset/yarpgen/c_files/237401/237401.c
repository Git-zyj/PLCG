/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (arr_1 [i_2]);
                    arr_9 [1] [i_1] [1] [i_1] = ((((((12242007575262329730 << 1) ^ (arr_6 [1] [4] [i_2] [i_2])))) ? (arr_4 [i_0] [i_0]) : ((((!var_0) * (arr_2 [i_0]))))));
                    var_19 = (+(((arr_4 [i_0] [i_1]) ? (min((arr_8 [i_0] [i_1] [i_0]), (arr_4 [i_1] [i_2]))) : (var_16 == 55572))));
                    var_20 += (arr_8 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_21 = ((((min((((4275351671 ? 1 : 9963))), ((var_16 ? var_2 : var_2))))) ? (((!((min(var_6, var_15)))))) : (!var_1)));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_14 [10] [10] = var_10;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {
                    arr_20 [i_4] = ((var_17 ? 55572 : var_3));

                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        arr_24 [i_3] [i_5 + 1] [i_4] [i_3] [i_4] [i_6] = -var_7;
                        var_22 = (min(var_22, ((((arr_8 [i_3] [i_6 - 1] [i_5 - 3]) ? ((((arr_3 [4] [i_5] [i_4]) >> (((arr_1 [5]) - 1682182372))))) : ((2190991916 ? var_2 : (arr_4 [1] [i_4]))))))));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    {
                        var_23 = ((26498 ? (((arr_15 [i_3] [i_3] [i_3]) ^ 9963)) : ((var_0 >> (var_2 + 29272733367395238)))));
                        arr_36 [i_3] [i_8] [i_8] = (arr_30 [i_3] [i_8] [i_8]);
                    }
                }
            }
            arr_37 [i_3 - 1] [i_3] = (((((arr_13 [i_3]) ? var_15 : (arr_32 [i_3] [i_3]))) - (arr_33 [i_3] [i_3] [5])));
        }
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            var_24 *= var_15;
            arr_40 [i_3 + 1] [7] = (((!1) ? 247 : var_17));
            var_25 *= (arr_27 [i_10 + 2]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    {
                        var_26 *= ((-1 ? (arr_10 [i_3 + 1] [i_10 - 1]) : (arr_10 [i_3 - 1] [i_10 + 1])));
                        var_27 = (((arr_10 [i_3] [i_3]) ? (arr_10 [6] [i_3 + 1]) : (arr_1 [i_3 + 1])));
                        var_28 = (((arr_21 [i_12] [3] [1] [i_10] [i_3] [i_3]) ? (((arr_6 [i_3] [i_10] [i_11] [i_3]) & (arr_11 [i_3] [i_10]))) : (~var_14)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 8;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_29 = (arr_3 [i_3] [i_3] [i_3 + 2]);
                            var_30 = (((var_14 != var_1) * (arr_28 [i_3 - 1] [i_14 - 2])));
                            var_31 = (max(var_31, (((!(arr_31 [i_15 + 1] [i_14 + 2] [i_10 + 2]))))));
                            var_32 = (((arr_26 [i_3] [i_3]) ? (arr_41 [i_3] [1]) : var_3));
                            arr_54 [i_3] [2] [i_13] [i_10] [i_15] |= (var_12 ? (((arr_46 [i_15]) ? (arr_51 [i_3] [i_3 - 1] [i_10 - 1] [10] [i_10] [i_10 - 1] [i_3 - 1]) : var_7)) : (!19615601));
                        }
                    }
                }
            }
        }
        var_33 = (!-110);
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 9;i_17 += 1)
            {
                {
                    var_34 ^= (((arr_13 [i_17]) ? (arr_33 [i_17 + 3] [i_3 + 2] [i_3 + 2]) : ((var_3 ? (arr_12 [1]) : 230))));
                    var_35 = ((~(arr_61 [i_3] [i_16] [i_17 + 2])));
                    arr_62 [i_3] [i_16] = (((((-1 ? 1 : 223))) ? (arr_59 [i_3 + 1] [i_17 + 1] [2]) : var_14));
                }
            }
        }
    }
    var_36 = (min(var_36, (~var_5)));
    #pragma endscop
}
