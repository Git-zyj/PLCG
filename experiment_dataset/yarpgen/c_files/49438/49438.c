/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 |= (((((min(var_7, 39380)))) ? (arr_3 [i_0]) : (((!(((26174 ? (arr_3 [i_0]) : (arr_0 [i_0])))))))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_21 ^= (arr_3 [i_1 - 1]);
            var_22 ^= (arr_1 [i_1]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_23 = (max(var_23, (((26169 ? 115 : 26126)))));
            var_24 = 63191;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_25 = (min(var_25, (((((((((26155 ? 53403 : 1443997747))) < (min(-99, var_15))))) << (((((((arr_9 [i_3]) ? 63095 : (arr_7 [i_3] [i_3] [i_3]))))) - 95)))))));
            arr_10 [i_0] [i_0] [i_0] |= var_10;
            var_26 |= (((arr_7 [i_0] [i_0] [i_0]) ? ((+((min((arr_6 [i_3]), (arr_0 [i_0])))))) : (~42375)));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_13 [i_0] [i_4] |= (arr_12 [i_4]);
            var_27 += ((~((min(1, 0)))));
            var_28 *= ((((((((10 ? 53403 : -122))) ? var_5 : 109))) ? var_13 : (min((min(-7346497962460656790, var_6)), 28373))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_29 = (max(var_29, (arr_11 [i_0] [i_7])));
                            var_30 |= ((32296 ? ((var_15 ? 660036476725435663 : (((var_17 ? (arr_1 [i_0]) : (arr_5 [i_4] [i_4] [i_6])))))) : (!var_17)));
                            var_31 -= var_8;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_32 = (max(var_32, ((((((min(59518, (arr_11 [i_9] [i_0]))))) ? (var_5 & var_5) : (arr_9 [i_0]))))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= 45051;
                    }
                }
            }
        }
        var_33 = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_34 = 3589511377;
        arr_33 [2] &= -75;
        arr_34 [i_10] = (arr_21 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 8;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            {
                arr_40 [i_11 + 2] |= (((((!(arr_22 [13] [i_12] [i_12] [i_12] [i_12]))) ? 0 : (arr_3 [i_12]))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {

                            for (int i_15 = 0; i_15 < 1;i_15 += 1)
                            {
                                var_35 ^= ((+(min(1, (((arr_3 [i_11]) ? 660036476725435663 : (arr_8 [i_14] [10] [i_14])))))));
                                var_36 = (min(var_36, (((((((((var_8 ? 124 : 68))) ? (min((arr_1 [i_13]), 1499147424)) : (((241 ? 115 : (arr_36 [i_12] [i_14]))))))) & 14146025174985859885)))));
                            }
                            for (int i_16 = 0; i_16 < 11;i_16 += 1)
                            {
                                arr_50 [i_16] [10] [i_13] [10] [i_11] &= ((((arr_49 [i_11] [10]) || (arr_27 [i_11 + 3] [i_12] [i_11 + 3] [i_11 + 3] [i_11] [i_11]))));
                                arr_51 [i_13] [6] |= (~254);
                            }
                            arr_52 [i_11] [i_11] [i_13] [i_11] [i_11] = (min((min(-24348, ((44564 ? -1871509786 : 0)))), (arr_2 [i_11 - 1])));
                        }
                    }
                }
            }
        }
    }
    var_37 = ((1 ? 35278 : var_3));
    #pragma endscop
}
