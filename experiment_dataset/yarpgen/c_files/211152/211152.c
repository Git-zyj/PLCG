/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = ((!(((-814403193741098747 ? var_2 : (arr_1 [i_1 - 1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_17 = -2606066082143096557;
                    arr_6 [i_0] [i_0] = (814403193741098744 * var_9);
                    var_18 *= var_8;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_19 = (((arr_11 [i_1 + 1] [i_1 + 1] [i_4] [i_4 - 2]) >= ((+(max((arr_4 [i_0] [i_1] [i_1]), var_8))))));
                        var_20 = ((((max((arr_9 [i_3] [i_3] [i_3] [i_3]), (arr_12 [i_0] [i_4 - 1] [i_4] [i_4 - 1] [i_4])))) ? ((((arr_12 [i_1] [i_1] [i_3] [i_3] [i_4]) ? (arr_9 [12] [i_0] [i_1] [11]) : (arr_12 [i_1 + 1] [0] [i_3] [i_4] [i_4])))) : (max((arr_11 [i_4] [i_4] [0] [i_4 - 2]), 0))));
                        arr_13 [i_0] [i_3] [i_4] = (((arr_3 [i_0] [i_0]) && ((min((arr_12 [i_1 - 2] [i_4 + 1] [9] [12] [i_4]), (arr_12 [i_1 - 1] [i_3] [i_1 - 1] [i_4] [i_4]))))));
                        var_21 = (arr_2 [i_1 - 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 &= var_12;
                                var_23 = ((((min((arr_12 [i_0] [i_1 + 1] [i_3] [i_5] [i_5]), (~var_14)))) ? (arr_8 [i_1 - 2] [i_1 - 1] [i_1 - 1]) : ((814403193741098757 ? 3 : -5))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_1] [i_3] = (min(840781699225259968, (12 & 72022409665839104)));
                    arr_21 [i_0] [i_0] [i_3] = ((!(((3 & ((var_8 ? 25168 : var_7)))))));
                }
            }
        }
    }
    var_24 = ((!(((max(-1, 1))))));
    var_25 -= (min(var_11, (max((!var_10), var_14))));
    #pragma endscop
}
