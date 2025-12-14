/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((arr_0 [i_0]) - (arr_0 [i_0]));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] = (-(arr_7 [9] [i_1]));
                                var_20 -= ((min((arr_6 [i_3] [i_2 - 3] [11]), (((arr_1 [i_2]) ? var_7 : var_7)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_21 = max(((((max(0, 11525133825788866465))) ? var_9 : (arr_12 [10] [i_1 + 1] [i_5] [i_5] [i_5] [i_6] [i_6]))), (((((((arr_9 [i_6] [i_0] [i_5] [i_0] [i_0]) + (arr_4 [i_0] [i_0] [i_5])))) && ((!(arr_11 [i_0] [i_1] [i_1 - 1] [10] [i_6])))))));
                            var_22 ^= min((max((arr_16 [i_6] [4] [4] [i_0 - 1]), (arr_16 [i_6] [0] [0] [i_0 + 1]))), (4890075636754317950 - 17559551236556006920));
                            var_23 = var_5;
                        }
                    }
                }
            }
        }
    }
    var_24 -= var_6;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            {
                arr_24 [10] &= ((((12097775157261242725 ^ (arr_10 [i_8 - 1] [i_8] [i_7]))) + ((((!(!8557034028195747873)))))));
                var_25 -= (0 & 9);
            }
        }
    }
    #pragma endscop
}
