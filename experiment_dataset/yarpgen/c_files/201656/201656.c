/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_12, var_13));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = 188;
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_6 [i_0 + 1] [i_0 + 1]);
                                var_18 ^= (((max(1956513407848442779, (arr_11 [i_0 - 1])))) ? ((((arr_11 [i_0 - 1]) <= (arr_11 [i_0 + 1])))) : (arr_11 [i_0 - 1]));
                                var_19 = (((((max((arr_2 [i_0 - 1]), (arr_1 [4]))) >= 3382139797262767398)) ? (max(((max(25, 0))), (max((arr_0 [15]), 4531409851520293261)))) : var_3));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] &= 511;
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
