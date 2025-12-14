/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 - 2] [i_0] [i_3 + 1] [i_4] = (((~var_3) ? -1 : (arr_7 [i_0])));
                                arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = (arr_7 [i_0 + 1]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] = (((min((arr_9 [i_0] [i_1] [i_1]), -9896)) * ((var_8 * (min(32768, (arr_9 [i_0] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_10 -= var_0;
    var_11 = (-((~((min(var_2, 60386))))));
    #pragma endscop
}
