/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_18 ^= var_10;
                        arr_11 [i_2] [i_0] [i_2] [i_2] = var_3;
                        arr_12 [i_0] [i_1] [i_0] [i_0] = (arr_9 [i_3] [i_1] [i_3] [i_3]);
                    }
                }
            }
        }
        var_19 -= ((9223372035781033984 ? ((var_1 | (arr_2 [i_0 + 3] [i_0 + 3] [i_0 + 2]))) : (1 || -72)));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_20 = var_13;
        var_21 -= (max((((!(arr_10 [i_4] [i_4] [i_4] [i_4])))), (((arr_10 [i_4] [i_4] [i_4] [i_4]) ? var_8 : (arr_10 [i_4] [i_4] [i_4] [i_4])))));
    }
    for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = ((((((((arr_0 [i_5]) ? var_11 : var_7))) ? (arr_5 [12] [i_5] [i_5 + 2] [i_5 + 2]) : 9223372035781033996)) ^ var_2));
        var_22 += ((-(arr_14 [i_5])));
        arr_20 [i_5] [i_5 + 3] = (max((arr_3 [i_5]), (4294967295 && 1048576)));
        var_23 += (((((var_15 ? (arr_0 [i_5]) : (arr_15 [i_5])))) || ((0 <= (((((arr_2 [i_5 + 2] [i_5 + 2] [i_5 + 2]) <= 1))))))));
    }
    for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
    {
        var_24 *= var_3;
        var_25 -= (min((((arr_22 [i_6 - 1] [i_6 + 3]) ? (arr_22 [i_6 + 2] [i_6 - 1]) : (arr_22 [i_6 + 3] [i_6 + 2]))), (arr_22 [i_6 + 2] [i_6 + 3])));
    }
    var_26 = ((!((!(((23705 ? 9223372037928517631 : 1)))))));
    var_27 = (max(var_27, (((9220251404443804067 / (min(1, 195)))))));
    #pragma endscop
}
