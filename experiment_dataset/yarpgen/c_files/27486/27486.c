/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0 + 1] = var_11;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = (((var_9 - var_0) && ((max((((arr_8 [i_0 + 4] [i_0 + 4]) ? (arr_3 [i_1] [i_1]) : var_0)), 2782390568)))));
                                arr_17 [i_0] [i_1] [i_0] [i_0] [0] [i_3 - 3] [i_4 + 1] = (min(1, ((!(arr_11 [i_0] [i_1] [i_2] [5])))));
                                var_17 ^= ((~(((((arr_2 [i_1]) + 2147483647)) << (((arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 1] [i_3 - 1] [i_4 + 3]) - 1318691079))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((!-1) >= (var_2 - var_14))) ? -11 : (max(var_12, -17241))));
    var_19 &= ((((max(var_12, (var_4 || 262143)))) || (((((9223372036854775807 ? var_11 : var_9)) - var_3)))));
    #pragma endscop
}
