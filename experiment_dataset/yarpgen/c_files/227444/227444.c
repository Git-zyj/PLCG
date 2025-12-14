/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 && ((max(((1 ? var_6 : 13)), (27 - 115))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] = min(236, (arr_3 [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_11 -= (arr_0 [i_0 + 1]);
                            var_12 = (((arr_0 [i_2]) ? ((min(39, -85))) : 209));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = (max(1, 2147483647));
                        }
                    }
                }
                var_13 = (((((((4294967288 ? 1 : 1))) ? 39 : 28)) - (arr_5 [i_0] [i_0] [i_1])));
                var_14 ^= (min(((max((arr_11 [i_0] [i_0] [i_0] [i_0]), 2806360602))), 1));
                var_15 = (max(var_15, (arr_12 [i_0] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
