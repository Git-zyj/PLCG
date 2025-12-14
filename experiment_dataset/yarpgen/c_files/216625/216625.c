/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] = arr_2 [i_1] [i_1];
                            arr_12 [i_0] = (~((9843 ? 7067229947098607283 : 4026531840)));
                            var_12 = (arr_0 [i_1]);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_13 = (max(0, (min(268435451, ((((arr_13 [i_0] [i_4] [i_4] [i_0]) ? -6645 : 15)))))));
                    var_14 = (max(-4260, ((15702282418354640766 ? (((arr_6 [i_0]) ? var_7 : 1)) : (~152)))));
                    var_15 = (min(var_15, (arr_9 [i_4])));
                }
            }
        }
    }
    var_16 -= max(((var_8 ? ((var_10 ? var_8 : var_1)) : -var_5)), (!var_0));
    #pragma endscop
}
