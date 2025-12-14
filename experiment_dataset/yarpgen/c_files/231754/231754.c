/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (((var_7 ? -524371739 : (-1 | 1108875339020118594))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 = (((((-1312577344 ^ (arr_6 [i_0] [i_1] [i_2 + 1] [i_3])))) ? var_2 : 1));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_13 += ((((-1 / (((arr_10 [i_3] [i_4]) ? 2274259411606409782 : (arr_2 [i_0] [i_0]))))) < ((max((((arr_9 [i_0] [i_1] [i_1] [10]) << (var_3 - 23009))), 0)))));
                            arr_13 [i_2] [i_4] = ((min(var_9, (arr_3 [i_2] [i_2] [i_2 + 1]))));
                            var_14 &= var_6;
                            arr_14 [i_2] [i_4] [i_1] |= ((var_1 + (((((1312577328 ? (arr_9 [i_3] [i_1] [i_2] [i_3]) : var_1))) + ((var_7 ? var_4 : (arr_1 [i_0] [i_4])))))));
                        }
                        var_15 = (max((arr_2 [i_0] [i_0]), (arr_2 [i_3] [i_2 + 1])));
                        arr_15 [i_2] [i_2] [i_2] [2] [i_2] [i_1] = var_1;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_16 -= (((((arr_17 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 2]) ? (arr_12 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_6 [i_2 - 2] [i_2] [i_2 + 1] [11]))) >= ((min((arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]), var_2)))));
                        var_17 -= (arr_0 [i_0] [i_2]);
                        arr_18 [i_5] [i_2] [i_1] [i_2] [17] = (524371738 | 268431360);
                        arr_19 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5] = -18446744073709551614;
                    }
                    var_18 = (min(var_18, ((min((((var_7 / 1312577345) ? var_8 : (arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] [i_2 + 1]))), ((min(var_1, 226))))))));
                }
            }
        }
    }
    var_19 += 114;
    var_20 = (max(var_20, var_5));
    var_21 = var_6;
    #pragma endscop
}
