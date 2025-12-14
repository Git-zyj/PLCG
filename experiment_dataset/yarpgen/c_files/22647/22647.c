/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_10;
    var_19 ^= var_13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_0 [i_2 + 2])));
                                var_21 *= (arr_5 [i_4] [i_2 + 1] [i_1 + 2] [i_4]);
                                var_22 &= 930474113;
                                arr_13 [i_0] [i_0] [i_0] [i_0] = 215;
                            }
                        }
                    }
                    var_23 = (arr_2 [i_0 - 1]);
                }
            }
        }
    }
    var_24 = var_8;
    #pragma endscop
}
