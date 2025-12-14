/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = ((~((((max(var_4, var_1))) % (max(var_10, (arr_5 [i_0] [1])))))));
                                var_12 = (max(((((arr_2 [i_0 + 1] [i_0]) || -1203))), ((1 ? 5407487255596561918 : -1203))));
                                var_13 = (min(var_13, var_0));
                            }
                        }
                    }
                    var_14 ^= -109;
                }
            }
        }
    }
    var_15 = var_6;

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_16 = (((~((max(var_6, (arr_4 [i_5] [i_5] [i_5])))))));
        var_17 = ((((2614 ? (arr_6 [i_5] [i_5]) : (arr_6 [12] [i_5])))) ? ((((arr_12 [i_5]) >> (17462 - 17437)))) : (((arr_2 [i_5] [i_5]) ? var_1 : 33086)));
        var_18 -= ((-((~(arr_11 [12])))));
    }
    #pragma endscop
}
