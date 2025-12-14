/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_8 [15] = (((var_1 ^ (min(var_8, (arr_5 [i_0] [1] [i_0]))))));

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_15 = (arr_3 [8] [i_2]);
                            var_16 ^= (((max((!17407305966297055345), (!-36))) || (((arr_5 [i_1 + 4] [i_3 - 2] [17]) && (arr_5 [i_1 + 2] [i_3 - 1] [i_0])))));
                            var_17 = min((arr_2 [8] [22] [i_2]), (max(-36, (arr_1 [i_0] [16]))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_13 [2] [i_5] [0] [i_5] [i_0] = ((((((((~(arr_7 [15] [12])))) ? (((var_0 + 2147483647) >> (arr_1 [i_2] [20]))) : (((arr_0 [13]) ? (arr_1 [i_2] [13]) : (arr_3 [17] [i_2])))))) + ((((min(var_12, (arr_3 [i_0] [0])))) ? var_3 : ((((arr_1 [i_3 - 1] [6]) + 0)))))));
                            arr_14 [i_5] [8] [3] [i_2] [i_1 - 1] [i_5] = (((arr_4 [18]) & ((~(((arr_10 [11] [8] [4] [5] [i_5] [i_5]) ? var_3 : var_0))))));
                            arr_15 [i_0] [i_1 + 3] [i_5] [i_3 - 1] [12] = (((((var_8 + 2147483647) >> (((arr_10 [22] [8] [i_1 + 3] [i_1 + 4] [i_1 - 2] [i_1 + 2]) - 94)))) << (((var_1 + 31432) - 17))));
                            arr_16 [17] [i_5] = var_5;
                            var_18 = (min(var_18, ((((((arr_9 [0] [6]) | var_1)))))));
                        }
                        arr_17 [3] [22] [i_2] = var_14;
                    }
                }
            }
        }
        var_19 = ((min((arr_9 [8] [4]), (arr_9 [6] [i_0]))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_20 = (((-8 + 2147483647) >> (((min((18446744073709551615 & 223), ((min(var_4, (arr_19 [8] [i_6])))))) - 58))));
        var_21 *= (arr_19 [i_6] [2]);
    }
    var_22 = (min(((-((var_4 ? var_1 : var_3)))), ((max((var_14 && var_10), (var_10 ^ -3851))))));
    #pragma endscop
}
