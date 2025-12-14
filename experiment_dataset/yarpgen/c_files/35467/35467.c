/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((16364024477800829402 ? 16364024477800829414 : var_13));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [1] = ((~(arr_5 [i_1])));
                            var_17 = (((((min(16364024477800829402, (-127 - 1))) ? (arr_1 [i_0] [4]) : ((var_14 ? 2082719595908722237 : 103))))));
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_3] = var_14;
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, ((min((((((32767 ? -32755 : var_11))) ? var_4 : ((-78 ? (-32767 - 1) : -23314)))), ((~((min(var_5, var_13))))))))));
    #pragma endscop
}
