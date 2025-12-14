/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 *= ((((~(arr_8 [19] [19] [7] [19])))));
                    var_19 = ((((((arr_6 [i_1] [i_1 + 2] [i_1]) ? (arr_3 [i_1 + 1] [i_1 - 1]) : (arr_6 [i_1] [i_1 + 1] [i_1])))) ? ((((arr_6 [i_1] [i_1 + 1] [12]) == (arr_6 [i_1] [i_1 - 1] [i_1])))) : (arr_6 [i_1] [i_1 + 2] [10])));
                    arr_9 [i_1] [19] = ((((-((20 ? 16383 : 1)))) / (max((arr_6 [i_1] [i_1] [i_1]), (arr_5 [i_2])))));
                    var_20 = (max(var_20, (((((1 ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1]))) * (!128))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (((arr_10 [i_3 - 1] [i_3 - 2]) ? var_2 : ((min((arr_11 [i_3] [12]), 1073676288)))));
        var_21 += (+-1073676298);
        arr_14 [i_3] = ((((((((1073676288 ? (arr_10 [i_3 - 3] [i_3 - 2]) : -1073676267))) ? (arr_12 [6] [i_3]) : (((arr_10 [20] [i_3]) ^ 1023))))) ? (arr_12 [i_3 - 2] [i_3]) : (arr_10 [i_3] [11])));
        arr_15 [0] [i_3 - 1] &= (((((+(((arr_10 [9] [9]) ? -1073676306 : 227))))) ? 237 : 37));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_22 = (((-127 - 1) ? (arr_10 [i_4] [i_5 + 2]) : (arr_10 [i_4 + 1] [i_5 + 1])));
                        var_23 ^= (((arr_23 [i_6] [2]) ? 18446744073709551614 : (arr_12 [i_5 + 2] [i_5 + 1])));
                        var_24 *= (((arr_8 [i_4] [i_5 + 2] [i_4] [4]) < (arr_8 [i_4 - 1] [i_5] [i_4 - 1] [i_4 - 1])));
                        var_25 = (arr_12 [7] [i_5]);
                    }
                }
            }
        }
        var_26 = (min(var_26, (((((arr_17 [i_4]) ? var_3 : (arr_16 [12] [i_4])))))));
        var_27 ^= ((arr_4 [i_4 + 1] [i_4 + 1]) + 28);
    }
    var_28 += 281474976709632;
    #pragma endscop
}
