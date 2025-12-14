/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [3] [6] [i_2] = 0;
                    arr_8 [11] = (((1 | 1) << ((((max(-14493, 14492))) - 14466))));
                }
            }
        }
        var_16 &= var_2;
    }
    var_17 = ((~((max((7649533973945786485 <= 14481), -14481)))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    var_18 = (max((((arr_13 [i_3 + 1] [9] [6]) ? var_12 : var_10)), var_7));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_3] [1] [i_6] [3] = (max(14492, 1));
                                var_19 = (min(var_19, (((~((((max(var_12, 22356))) ? (((~(arr_1 [4])))) : (max(var_7, var_5)))))))));
                            }
                        }
                    }
                    var_20 = (((max((arr_14 [i_4]), var_6)) - ((max((arr_12 [i_3] [i_5 - 1]), (14492 - var_8))))));
                    var_21 -= ((var_2 ? ((max(10563, 14489))) : (var_10 && var_4)));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_22 = 1;
                                var_23 -= (((~1) & ((((arr_25 [i_8] [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]) != (arr_25 [i_8] [1] [i_9 + 1] [i_9] [10] [i_9]))))));
                                arr_26 [i_3] [3] [i_5] [i_3] [i_9] = (max((((arr_1 [i_9 + 1]) ? 0 : (arr_1 [i_4]))), (((max((arr_25 [i_9 - 1] [i_4] [1] [i_8] [i_3] [i_3]), (arr_24 [i_3] [i_4] [i_4] [i_5] [1] [i_9 - 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
