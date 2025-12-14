/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 ? var_9 : ((((min(3464125115409773010, 14982618958299778606)) <= -var_6))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((arr_1 [i_0 - 1] [i_0]) ? ((((arr_0 [i_0 - 2] [i_0 + 1]) || 964788692916574600))) : var_2)) * (((127 && (arr_0 [i_0 + 1] [i_0 - 2]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (((arr_0 [i_0] [i_2]) << (((((arr_4 [i_0 - 1]) ? 964788692916574574 : (arr_7 [10] [i_1] [i_2] [12]))) - 964788692916574529))));
                    arr_8 [i_0] = (min(((~(max(14982618958299778587, (arr_7 [i_0] [2] [i_0 + 2] [9]))))), ((min(var_1, (arr_4 [i_0]))))));
                    var_16 = (((arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) << ((((3464125115409773010 ? var_1 : var_4)) - 806658579))));
                    var_17 = (min(var_17, (arr_4 [i_0])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_18 = ((((~(arr_11 [i_3] [i_3])))) ^ (arr_9 [i_3] [i_3]));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                {
                    arr_17 [i_3] = (((arr_16 [i_5 - 2] [i_5 - 2] [i_5]) ? (arr_16 [i_5 + 1] [i_5] [i_5]) : (arr_16 [i_5 - 2] [i_5 - 3] [i_5])));
                    var_19 = ((var_3 | (arr_14 [i_5 - 2] [i_5 - 3])));
                    arr_18 [i_5] [i_5] |= (((arr_15 [i_5 - 1] [i_5 + 2] [i_5] [i_5 - 3]) && 195));
                }
            }
        }
    }
    var_20 = (((((16332290456445340731 ? (-86 ^ -6066) : (max(var_13, var_8))))) ? ((((-6078 ? var_13 : -1392483789)) ^ ((var_5 ? var_7 : -1310771935)))) : ((((1392483785 | var_0) ? 3402645459 : (max(-5904305664498741325, var_3)))))));
    #pragma endscop
}
