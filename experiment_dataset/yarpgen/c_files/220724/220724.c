/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    var_20 = (max((1945347515 > 1), (!-1945347515)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 ^= ((((!(((arr_4 [i_0] [i_0]) || -1945347515)))) ? 65535 : (var_3 / -1945347503)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((((((arr_13 [i_2] [i_3] [i_4]) - (arr_13 [i_0] [i_1] [i_2])))) ? -1945347515 : 7));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_0] = ((1945347515 - 65535) ^ (((!-1945347508) ? 1945347512 : (-32767 - 1))));
                            }
                        }
                    }
                    var_22 = (((((var_11 ? 42421 : (!20767)))) ? ((-(~var_16))) : (((20768 ? 1945347515 : (arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
