/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (-121 * 64);
                var_12 = (104 ^ 70);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] = -121;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] = -98;
                                var_13 = (64 && 29);
                                var_14 = (((((-127 - 1) + 2147483647)) << (((-8 + 22) - 14))));
                                var_15 |= (((-82 && 98) <= (70 < -83)));
                            }
                        }
                    }
                }
                arr_20 [i_2] = (0 ^ 113);
                var_16 = 127;
                var_17 = (max(var_17, 0));
            }
        }
    }
    var_18 *= var_3;
    #pragma endscop
}
