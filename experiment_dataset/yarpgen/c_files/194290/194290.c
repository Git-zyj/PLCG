/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = 87;
                    var_14 = (i_0 % 2 == 0) ? (((~((((((((arr_8 [i_0] [i_0]) + 2147483647)) >> (((arr_7 [i_0]) - 28022))))) ? (((-88 ? 94 : 1))) : 7))))) : (((~((((((((arr_8 [i_0] [i_0]) + 2147483647)) >> (((((arr_7 [i_0]) - 28022)) - 19882))))) ? (((-88 ? 94 : 1))) : 7)))));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = (min((!-var_9), ((~(arr_5 [i_0] [i_3 + 2] [i_3 + 1])))));
                        var_15 ^= ((((((arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1]) ? 714718574 : var_3))) ? (((!(arr_11 [i_3 + 3] [i_3 + 3] [8] [i_3 - 1] [i_3 + 2] [i_3])))) : var_3));
                        arr_13 [i_0] [i_1] [i_0] = (max((((arr_0 [i_0]) ? (arr_7 [i_0]) : ((var_11 ? (arr_3 [i_0] [i_0]) : 3580248730)))), 3580248740));
                    }
                    arr_14 [i_0] [i_0] [i_0] = (min((((min(222, (arr_11 [i_0] [i_0] [i_0] [i_0] [5] [i_0]))) + -78)), (((var_7 - (((arr_7 [i_0]) ? var_11 : var_0)))))));
                }
            }
        }
    }
    var_16 = (((((-9223372036854775807 ? ((20 ? 714718574 : -980285051)) : var_1))) && (126 / 94)));
    #pragma endscop
}
