/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 |= (max(676206770286042915, (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [3] [i_0] [i_3] = (((arr_3 [i_1 - 2] [i_1 + 1] [i_0 - 2]) ? (((arr_1 [i_1 - 3]) ? (arr_1 [i_1 + 3]) : (arr_1 [i_1 - 1]))) : ((((arr_3 [i_2] [i_2 + 1] [i_0 + 2]) ? (var_5 / 6085618429455242915) : ((((!(arr_10 [i_1] [i_1] [i_3] [i_2 - 2] [i_2]))))))))));
                        arr_13 [i_2] [i_0] = (max((((arr_8 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2]) ? (arr_0 [6] [i_1 - 3]) : (arr_0 [i_0] [i_1 - 1]))), var_6));
                    }
                }
            }
        }
        arr_14 [2] [i_0] |= ((((!(((arr_0 [i_0] [i_0]) && var_9))))) ^ (arr_0 [i_0] [i_0]));
        var_12 = (max(var_12, 1));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [i_5] [i_5] [i_4] [i_5] [15] = (max((((~(arr_23 [i_4 + 3] [i_5] [i_6] [i_7] [i_4 + 3] [i_7 - 1])))), ((~(arr_22 [i_4] [i_5])))));
                        arr_28 [i_4] [i_5] |= (arr_24 [i_4] [i_4] [i_6] [i_4] [i_7] [i_7]);
                    }
                }
            }
        }
        var_13 = (max(var_13, ((max((((1125897759358976 ^ 21443) >> (((arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 2]) ? 0 : var_1)))), ((max((arr_15 [i_4]), (arr_18 [i_4] [1])))))))));
        var_14 = ((((6338366904367292142 ? -1110989024 : 12604912416955040015)) % (arr_16 [i_4 + 3] [i_4 - 1])));
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_15 += (min(((~(((arr_31 [i_12]) ? var_5 : (arr_25 [i_8] [i_8] [i_8] [i_8]))))), (((!(arr_19 [i_8 + 2]))))));
                                arr_42 [i_8 - 1] [i_8 - 1] [i_10] [i_11] [i_12] = ((var_0 ? ((-(arr_24 [i_8] [i_9] [i_8 + 2] [i_11] [i_8 + 2] [i_12]))) : (arr_31 [i_8])));
                                var_16 += var_7;
                                var_17 = (((arr_18 [7] [i_11]) & (arr_31 [i_12])));
                            }
                        }
                    }
                    arr_43 [i_10] = ((((~(arr_26 [i_8 - 1] [i_8 + 2] [i_8] [i_8 - 1]))) & var_0));
                    var_18 += (arr_35 [i_9] [i_8 + 1] [i_8 + 1] [i_10]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        arr_51 [23] [i_14] = (~52776558133248);
                        arr_52 [i_14] [i_13] [i_13] [i_13] = ((((((min((arr_30 [i_15]), (arr_21 [i_8] [i_13] [i_14]))) & (((arr_19 [i_15]) % -1110989026))))) ? (arr_36 [i_8] [i_13]) : var_7));
                    }
                    arr_53 [i_8] [i_13] [i_8] [i_8] |= ((-(max((((var_8 ? -1110989024 : var_7))), var_0))));
                }
            }
        }
        arr_54 [i_8 + 4] = (arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
    }

    /* vectorizable */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        var_19 = -109860283;
        arr_57 [i_16] [i_16] = 74;
        arr_58 [i_16] &= (var_7 ? (arr_36 [i_16] [i_16]) : (arr_36 [i_16] [19]));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        var_20 = (max(var_20, (((var_7 ? (arr_36 [i_17] [i_17]) : (arr_20 [i_17] [i_17] [i_17]))))));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 17;i_20 += 1)
                {
                    {
                        var_21 ^= ((((arr_61 [i_20]) ? (arr_17 [i_17] [i_18]) : var_4)) & (arr_46 [i_17] [i_20 - 1] [i_20 - 1] [i_20 + 1]));
                        var_22 = ((arr_49 [i_19 + 1] [i_20] [i_20] [i_19]) ? (arr_49 [i_19 - 1] [i_20] [i_20] [i_19]) : 1110989031);
                        arr_73 [i_19] = var_0;
                    }
                }
            }
        }
    }
    var_23 = var_6;
    var_24 = max(((-var_8 & ((min(var_4, var_4))))), (((~((-770334521129207324 ? -1110989026 : -1110989026))))));
    var_25 = (max(((76278891 ? 1 : 52776558133248), (var_1 >= var_8))));
    #pragma endscop
}
