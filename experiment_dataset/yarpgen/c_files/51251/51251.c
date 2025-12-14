/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (210 ^ 1048575);
        var_20 = 7697160464627288979;
        arr_4 [i_0] = ((((min(-23055, (arr_1 [i_0])))) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (var_10 / 195)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_21 = (1895931202 != 45);
                        var_22 = (3670492525 ? ((-91 ? var_2 : (arr_0 [i_0] [i_0]))) : (((!(arr_0 [i_0] [i_2])))));
                        var_23 += (((((~(201 == -1713907283)))) ? 0 : (((((-5 ? 203 : 18446744073709551614))) ? var_3 : 45))));
                    }
                }
            }
        }
        arr_12 [i_0] [16] |= (54 ? ((1 + ((~(arr_9 [i_0] [i_0] [4]))))) : (~-31815));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_24 [i_4] [6] [i_6] [i_7] [i_8] = (((!((((arr_9 [0] [i_5] [i_8]) - (arr_21 [i_8] [i_7] [11] [i_5])))))));
                                arr_25 [i_4] [i_4] [i_6 + 1] [i_7] [i_4] = (((((~(max(9, var_4))))) ? (((-107 <= (arr_7 [i_4] [i_6 - 1] [i_4])))) : (((var_3 + 2147483647) << ((var_11 ? 0 : var_18))))));
                                arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] = (((189 ? ((195 ? (arr_23 [6]) : 250)) : (arr_22 [i_4] [i_6 + 1]))));
                                var_24 = ((~(min(var_10, 19))));
                            }
                        }
                    }
                }
                arr_27 [i_4] [i_4] [i_5] = (arr_19 [12] [i_5] [i_5] [i_5]);
            }
        }
    }
    var_25 = ((!(236 && var_7)));
    #pragma endscop
}
