/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1 - 1] [i_0] [8] [i_3] [11] [i_4] = max(65531, (((max(255, -2011522390068690288)))));
                                var_14 = ((-2011522390068690288 ? 142 : 195));
                                arr_13 [i_0] [i_2] [i_3] [i_4] = (((min(24006, var_0)) ^ 9));
                                var_15 *= 0;
                            }
                        }
                    }
                    arr_14 [6] [1] = (arr_5 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
