/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 ^= (arr_6 [i_2 - 1] [i_2] [6]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 -= 63431;
                                var_13 = (max(var_13, ((var_7 + (arr_9 [i_2 - 1] [i_4 + 1])))));
                                arr_13 [i_3] [i_1] = 2104;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, (((((var_1 && (((var_7 >> (16376 - 16374)))))) ? var_7 : (((var_0 <= var_4) ? 0 : var_3)))))));
    var_15 = ((var_10 ? ((var_8 ? var_5 : (var_2 * var_9))) : ((var_8 ? ((var_2 ? 63451 : var_9)) : -16361))));
    #pragma endscop
}
