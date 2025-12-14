/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 ^= 13041854393531310351;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 |= (arr_0 [i_3]);
                                var_13 = (-1224047813223557487 - 1581983247);
                                arr_14 [i_0] [i_0] = (min(240, var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_5));
    var_15 *= (227 <= 61);
    #pragma endscop
}
