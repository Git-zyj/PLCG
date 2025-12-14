/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, (arr_1 [i_3 + 2])));
                                var_11 = (max(var_11, 38624));
                            }
                        }
                    }
                }
                var_12 = (min(var_12, (98 == var_4)));
                arr_12 [i_0] [i_1] = ((((min(2865201689, 2865201687))) & ((((2865201665 ? 8272111447046300119 : 2865201689)) | var_5))));
            }
        }
    }
    var_13 |= var_2;
    var_14 = (min((((4238 & ((var_4 ? var_1 : 115))))), var_5));
    #pragma endscop
}
