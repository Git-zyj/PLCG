/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((2636143942 >= var_2) + (min(var_17, var_3))))));
    var_20 |= ((var_3 ? var_8 : (((var_11 ? var_0 : 2636143933)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [4] [i_0] [i_1] = ((-((-(((arr_3 [i_0] [i_1] [i_0]) ? var_3 : 2375915613))))));
                var_21 ^= -2636143925;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [5] [i_0] [i_4] = (((arr_1 [i_0]) || (((11484815610729165312 ? 1 : 1658823324)))));
                                var_22 = 4087968931;
                                var_23 = var_13;
                                arr_14 [i_3] [i_3] [i_0] [i_3] [12] = var_1;
                            }
                        }
                    }
                }
                arr_15 [i_0] = (((((1 ? (((2636143942 ? 1 : 1))) : (min((arr_8 [i_0] [i_0] [i_0]), 0))))) ? (min(((min((arr_7 [i_1] [i_0] [i_0]), 1073741823))), (min(1418792317, var_13)))) : (-32767 - 1)));
            }
        }
    }
    #pragma endscop
}
