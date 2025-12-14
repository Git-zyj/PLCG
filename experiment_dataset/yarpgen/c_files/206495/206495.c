/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_0 [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [i_2] [i_1] [i_0] = (min(var_8, (min((~var_13), (min((arr_10 [i_0] [i_1 - 1] [i_0] [i_0] [i_4 - 1]), (arr_7 [i_0] [i_1 + 2] [i_2])))))));
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_0] = var_16;
                                var_22 = (min((arr_7 [i_0 + 1] [i_0 - 1] [i_0]), 5825252514231964941));
                            }
                        }
                    }
                }
                var_23 -= (max(32767, 0));
            }
        }
    }
    var_24 = (min(var_24, var_1));
    #pragma endscop
}
