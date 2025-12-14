/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (min((max((!var_5), -var_6)), var_9));
    var_21 = (min(((-((max(var_18, var_2))))), ((~(~var_13)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~6933919430704214493);
        arr_3 [i_0] = -var_17;
        var_22 = (max(var_22, -24320));
        arr_4 [i_0] [i_0] &= (~var_9);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((~(arr_7 [i_0] [i_0] [i_0 - 4] [i_0])));
                                arr_15 [i_0] [i_1] [i_1] [i_1] = ((-(arr_12 [i_0] [i_1] [i_0 + 1])));
                            }
                        }
                    }
                    var_23 = ((~(arr_0 [i_0 - 4] [i_2])));
                    var_24 = (!var_10);
                }
            }
        }
    }
    var_25 += var_6;
    #pragma endscop
}
