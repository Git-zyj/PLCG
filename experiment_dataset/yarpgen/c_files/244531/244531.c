/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 >> ((((4 ? (~89051182) : var_0)) - 4205916105))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_2 [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (arr_0 [i_0]);
                                arr_13 [i_0] [i_0] [14] [i_3] [i_4] = ((+((+(((arr_7 [i_0] [i_1] [2] [2] [i_4]) ? 3556656785 : 1019161273250090101))))));
                                var_21 *= (((((arr_2 [i_0] [i_3]) ? (arr_12 [3] [i_1] [i_2] [i_3 + 2] [i_3 + 2]) : var_7))));
                            }
                        }
                    }
                }
                arr_14 [1] [1] |= (max((~var_8), (max((arr_6 [12] [i_1 + 2] [i_1 - 2]), ((((arr_3 [i_0] [i_0] [0]) < (arr_12 [i_1] [i_1] [i_1] [i_0] [i_1]))))))));
                var_22 = (((((1184736096 % 2084) && (4973468687819932590 <= 16777216))) ? (((var_9 ? 0 : (((!(arr_8 [i_0] [i_0] [i_1 - 1] [i_1]))))))) : ((((min(var_9, 738310510))) ? (max((arr_8 [i_0] [i_0] [i_1 + 2] [i_1 - 2]), var_6)) : 18446744073709551593))));
            }
        }
    }
    #pragma endscop
}
