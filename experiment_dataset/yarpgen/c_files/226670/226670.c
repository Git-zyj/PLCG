/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        var_14 += (arr_0 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_15 = (max(var_15, ((4294967295 ? 127 : -3063269831680343923))));
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_16 = ((((((arr_3 [i_1 + 1]) <= (!1)))) << ((((arr_12 [i_4] [i_4]) == var_12)))));
                                var_17 = ((!((((arr_10 [i_1] [i_2]) ? (max(var_9, (arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]))) : (min((arr_12 [i_1] [18]), 5667481801213595408)))))));
                                var_18 = -var_5;
                                var_19 ^= (((arr_7 [i_1 + 1] [8]) ? ((((arr_6 [i_1 + 1] [i_4] [i_3 - 2]) != var_7))) : (arr_15 [i_1 + 1] [i_1 + 1] [6] [i_4])));
                            }
                        }
                    }
                }
                var_20 = ((((((arr_8 [i_1] [i_1] [i_2] [i_2]) > var_2))) >= (min(var_12, ((((arr_16 [i_2] [i_2] [i_1 + 1] [i_2] [i_2] [i_1]) > (arr_12 [i_1 - 1] [i_2]))))))));
            }
        }
    }
    var_21 = 250701502;
    #pragma endscop
}
