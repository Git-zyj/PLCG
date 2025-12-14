/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_4 [12] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (max((min(7411679684429528508, (max(6040849422349488097, 1)))), (arr_1 [i_0] [i_0])));
                                arr_12 [i_0 + 1] [i_0 + 1] [i_0] = ((-(arr_9 [8] [i_1] [8] [8] [i_0 + 1])));
                            }
                        }
                    }
                    var_20 *= (arr_5 [i_0] [i_0] [i_2] [15]);
                    arr_13 [i_0] [i_0] [i_0] = (min(804868483, ((((arr_8 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_1] [i_1 + 1] [i_1]) ? (arr_8 [i_0 + 1] [5] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_8 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_1] [i_1 + 1] [i_1]))))));
                }
            }
        }
    }
    var_21 = (max(var_21, (((var_9 ? (((min(var_4, var_14)))) : var_2)))));
    #pragma endscop
}
