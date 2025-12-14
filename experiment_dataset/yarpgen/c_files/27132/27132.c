/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (((arr_3 [i_0] [i_0]) | var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 |= (arr_6 [i_0] [i_0] [i_0] [i_1]);
                                var_20 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 ^= ((var_14 << (var_7 - 4515591006722473151)));
    #pragma endscop
}
