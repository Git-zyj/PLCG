/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((var_3 ? (arr_0 [i_0]) : -14824584381941066740)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [11] [i_1] |= 14824584381941066748;
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [6] [9] = 4294967295;
                            }
                        }
                    }
                    arr_17 [i_0] [1] [i_2] = (~790764475);
                }
            }
        }
    }
    var_15 = var_12;
    #pragma endscop
}
