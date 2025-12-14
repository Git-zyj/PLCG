/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = -30342;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (((((22503 - (min(36027697507336192, 1))))) ? ((63 ? 2644513143 : 253)) : ((((!(((2644513143 ? 222 : (arr_9 [i_0]))))))))));
                                var_21 = var_14;
                                var_22 += ((2644513159 ? ((((1650454153 == (arr_5 [i_1] [i_1] [2]))) ? (max(var_15, var_10)) : ((min(var_3, 255))))) : ((max((arr_3 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 - 1] [i_0 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
