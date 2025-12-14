/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_10 = (max(var_10, ((((((0 ? (((max(0, (-32767 - 1))))) : (var_8 | 1)))) ? ((~((-4096 ? 2 : var_9)))) : ((((var_2 ? 1082331758592 : 0)) - (1 && 0))))))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_0] = (min(((max(1, 1))), (min((-9223372036854775807 - 1), 1))));
                        }
                    }
                }
                var_11 = (min(var_11, ((min((max((((0 ? (-32767 - 1) : (-2147483647 - 1)))), (((-2147483647 - 1) ? 19 : var_0)))), (((4096 ? (((arr_1 [i_0]) ? var_9 : 4090)) : ((var_7 - (arr_5 [4] [i_1] [4])))))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_12 = max((((arr_8 [6] [12] [12] [i_0]) & (arr_1 [i_0]))), ((~((min(-32753, var_1))))));
                            var_13 = (max((((arr_13 [i_0] [i_1] [i_5]) ? (arr_13 [i_1] [i_1] [i_1]) : -32762)), (arr_0 [i_0])));
                            var_14 = 14;
                            arr_15 [i_0] [i_1] [i_0] [i_5] = ((-((((max((arr_8 [i_5] [i_0] [i_0] [i_0]), 511))) ? (((min(var_7, var_6)))) : (arr_5 [i_0] [i_1] [i_5])))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(((1 - ((var_3 ? -500 : var_9)))), 1));
    var_16 |= var_0;
    #pragma endscop
}
