/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 17675;
    var_12 ^= ((((max(((32 << (108 - 107))), 43))) ? ((max(-31706, 16689))) : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 *= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_14 += ((-var_3 ? 1 : (arr_8 [i_4] [i_1] [i_2] [i_3 + 2] [i_3 + 1])));
                                var_15 -= (max(((min(42, (arr_10 [i_3 + 2] [i_3] [i_3 + 1] [i_3] [i_3 - 1])))), (max(-28708, 239))));
                            }
                        }
                    }
                    var_16 += var_7;
                }
            }
        }
    }
    #pragma endscop
}
