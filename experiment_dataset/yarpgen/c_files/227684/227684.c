/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 *= (min((!0), 0));
                    var_18 = (max(((min(-9917, (arr_2 [i_2 - 1] [i_2] [i_2])))), (arr_0 [i_0])));
                }
            }
        }
        var_19 |= (((-(arr_4 [10]))));
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_20 = (max((min(192, -8260357922907839019)), 0));
        arr_11 [i_3] [i_3 - 3] = var_2;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_21 = min(9917, (-18467 / 18446744073709551615));
                    var_22 = ((-(max(4294967295, var_2))));

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_20 [i_4] [6] [i_4] [i_5] [i_4] [i_5] |= (((max(((var_15 < (arr_10 [i_3] [i_4]))), var_3)) ? 0 : ((((((arr_4 [i_5]) + (arr_2 [i_3] [i_4] [i_5]))))))));
                        var_23 = min(-var_7, (((-127 - 1) ? 65535 : -18057)));
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
    {
        arr_23 [i_7 + 1] = 58482;
        var_24 = (max(var_24, ((max(var_13, (((arr_21 [i_7 + 1]) ? (min((arr_6 [i_7 + 1]), 7977372036337077458)) : (arr_1 [i_7 - 1] [i_7 + 2]))))))));
        var_25 = var_10;
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (((-(((!9917) ? (~0) : 41513)))))));
        var_27 = ((((((((arr_22 [i_8]) ? var_16 : var_15))) || (arr_21 [i_8 + 2]))) ? 855649835 : 18467));
        var_28 = var_15;
    }
    #pragma endscop
}
