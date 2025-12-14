/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, 11831865892493062273));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = arr_7 [i_4] [i_1] [i_3] [5];
                                var_17 -= (arr_11 [i_0] [i_1 - 2] [6] [i_4] [i_0] [8]);
                            }
                        }
                    }
                    var_18 = 0;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 = (arr_9 [5] [5] [7] [i_1] [i_6]);
                                arr_16 [4] [0] [4] [9] [i_1] [i_1 - 1] = (max((arr_2 [i_0] [i_1 - 2] [i_2 - 1]), (arr_3 [4] [i_1])));
                                var_20 = ((-((min(130560, 6614878181216489330)))));
                                var_21 ^= ((((max((((!(arr_7 [i_0] [i_6] [i_6] [i_5 + 2])))), 11206457658484390898))) ? -1 : ((-(arr_12 [i_2 + 1] [10] [5] [i_5 - 3])))));
                                var_22 = 25;
                            }
                        }
                    }
                    arr_17 [i_1] = (((min((!0), 7407076226391798673)) <= (((((var_4 > (arr_13 [i_0] [i_1] [i_1] [i_1] [i_0] [i_2]))))))));
                    var_23 = ((-(min((arr_0 [i_1 + 1]), (arr_4 [i_0] [i_1 - 3] [i_2 + 1])))));
                }
            }
        }
        var_24 = (arr_7 [i_0] [i_0] [i_0] [4]);
        arr_18 [i_0] &= (min(var_13, (((arr_14 [10] [i_0] [i_0]) * (arr_14 [i_0] [6] [i_0])))));
    }
    var_25 = (max(var_8, (var_6 && var_12)));

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_22 [12] &= ((-(arr_21 [6])));
        var_26 = (max(6614878181216489343, (arr_19 [i_7])));
        arr_23 [0] |= (!10650573722069379478);
        arr_24 [i_7] [i_7] = (min(var_10, (min((min((arr_19 [i_7]), 6614878181216489343)), (arr_20 [i_7])))));
        arr_25 [i_7] = var_9;
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        arr_28 [i_8] [3] = -15465951037925210221;
        arr_29 [7] = (max(5859423091047357592, ((((arr_20 [i_8]) ? -1 : (arr_20 [i_8]))))));
    }
    #pragma endscop
}
