/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (!1);
                    arr_11 [9] [i_1] = ((((max((arr_7 [i_0] [i_0]), (arr_7 [i_0] [i_1])))) ? (((((arr_7 [1] [i_0]) == (arr_7 [i_0] [i_0]))))) : (((arr_7 [i_1] [i_0]) % (arr_7 [i_0] [i_0])))));
                }
            }
        }
        var_17 = (((((!(-1 >= 239)))) != ((max((max(var_11, 0)), (arr_3 [i_0] [12] [i_0]))))));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] = (((((~(arr_13 [15] [i_3 - 1])))) + (((var_8 & 10948024813149220945) ? var_6 : ((var_13 ? 2416126983174651156 : (arr_12 [i_3])))))));
        arr_16 [i_3 + 1] = (((((~(((arr_13 [i_3] [i_3]) & 3712456832557401158))))) ? (((!(arr_13 [i_3 + 1] [i_3 + 2])))) : 1830591109));
        var_18 *= (!16);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_3 - 1] = -4;
                                arr_27 [i_5] = (115 >= 2416126983174651156);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_33 [i_3 - 1] [20] [20] [i_9] = ((~(min((~9223372036854775803), (arr_23 [i_3 + 2] [i_3 + 2] [i_8] [i_8 - 3] [18] [24])))));
                                arr_34 [0] [17] [i_4] [i_5] [17] [22] [17] = (arr_30 [i_9]);
                            }
                        }
                    }
                }
            }
        }
        arr_35 [i_3] [i_3] = ((((((arr_22 [i_3 + 1] [i_3] [i_3 + 3] [i_3 + 3]) * (arr_30 [i_3 + 2])))) && (((arr_21 [i_3 + 3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 3] [i_3]) == (arr_21 [i_3 + 1] [i_3 + 2] [i_3 - 1] [18] [i_3 + 1] [i_3 + 1])))));
    }
    var_19 = (!234);
    #pragma endscop
}
