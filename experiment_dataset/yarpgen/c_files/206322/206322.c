/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [12] [i_1] = (((((var_0 ? (((min(var_7, var_0)))) : (var_11 % var_3)))) ? (((~3616177568) ? ((max(112, var_9))) : (~65535))) : 144));
                    arr_10 [i_0] [i_0] [3] = (((var_3 ? var_15 : (max(7024512078039701933, 0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = (min(((max(29592, (min(-13, 65535))))), var_8));
                                arr_17 [i_1] [i_0] [23] = (max((~var_5), (min((min((arr_14 [i_1] [i_1] [i_1] [i_1]), (arr_13 [i_0 - 3] [i_1] [i_0] [i_1] [i_4]))), (~var_13)))));
                            }
                        }
                    }
                    arr_18 [i_0] [5] [i_0] = var_13;
                }
            }
        }
    }
    var_16 = var_11;
    #pragma endscop
}
