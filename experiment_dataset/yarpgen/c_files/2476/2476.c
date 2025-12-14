/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 -= ((((((-32767 - 1) & (arr_2 [i_0])))) ? (((arr_1 [i_0]) ? var_6 : (arr_0 [i_0]))) : (arr_0 [i_0])));
        var_13 ^= (((-(arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((arr_4 [i_0]) ? (!-5016124774544037405) : 32762)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1] [i_3] [i_2] [i_2] [i_1] [i_0] = 2138832925;
                                var_15 ^= ((!(arr_2 [i_0])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [21] = var_3;
                }
            }
        }
        var_16 = (min(var_16, (-32754 == -4)));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_21 [1] = var_2;
        arr_22 [i_5] [i_5] |= ((((255 && var_10) > ((((arr_10 [i_5] [i_5] [i_5] [i_5]) >= (arr_2 [i_5])))))) ? (!var_5) : ((min((arr_15 [i_5] [12] [i_5] [i_5] [i_5] [i_5]), -10))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_17 = ((~(+-10689)));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_18 = (max(var_18, var_8));
            arr_29 [10] [i_7] [i_6] = var_0;
            arr_30 [i_7] = -1811548715;
            arr_31 [i_7] [15] = (((arr_25 [i_6]) & var_8));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_35 [i_6] [i_6] = (((((var_10 ? var_0 : var_4))) / var_0));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    {
                        var_19 = (((arr_18 [i_8]) ? ((((((arr_36 [i_6]) * 3))))) : (min(0, 150))));
                        arr_41 [i_6] [i_8] [i_6] [i_9] [i_6] [i_6] = (((!var_7) / ((max(-1790483554, var_8)))));
                        var_20 += arr_20 [i_8];
                    }
                }
            }
            var_21 ^= var_9;
        }
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            arr_44 [i_11] [i_11] = ((((max((arr_40 [i_6] [i_11] [i_11] [i_6]), (arr_38 [i_6] [4] [i_11 - 1] [i_11] [i_11])))) == (max((var_3 / var_4), ((9 ? (arr_40 [i_11] [i_11] [16] [i_6]) : var_7))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    {
                        var_22 ^= (max((((!(255 <= 8)))), (min(1, (((133 ? (arr_6 [23]) : 1)))))));
                        arr_50 [i_6] [i_11] [1] [i_11] = ((124 << (((((arr_28 [i_6]) >> (((max((arr_4 [1]), var_8)) - 8285)))) - 115879504))));
                    }
                }
            }
            arr_51 [i_11] [i_11] [i_6] = var_3;
            var_23 = (max(var_23, ((((!var_3) > ((1 << (-117 - 65415))))))));
        }
        for (int i_14 = 4; i_14 < 19;i_14 += 1)
        {
            var_24 = (max(var_24, ((max(((((14731198778302289800 ? var_0 : var_6)))), (arr_25 [i_6]))))));
            var_25 = var_6;
            arr_54 [i_14] = (~-5155433423387707363);
            var_26 += var_1;
            arr_55 [i_6] [i_14] = ((((max(var_8, (arr_27 [i_14] [i_14 + 2] [7])))) ? (arr_27 [i_14] [i_14 + 2] [17]) : (1811548730 != 57588)));
        }
        arr_56 [20] = var_2;
        var_27 = ((-18 + 2147483647) >> ((+((((arr_7 [18] [i_6]) && var_8))))));
    }
    var_28 = (var_4 != var_7);
    #pragma endscop
}
