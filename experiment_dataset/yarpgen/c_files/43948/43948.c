/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((-362725605 ? ((((arr_1 [i_0] [i_0]) && var_7))) : (!1)));
        var_17 |= ((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : 9)));
    }
    var_18 = var_0;

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = ((((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : var_2)));
        arr_6 [i_1] [i_1] = min((min(((~(arr_0 [i_1] [i_1]))), (((arr_2 [i_1]) ? var_10 : 16)))), (min((arr_3 [i_1] [i_1]), (min(-1708839302, 2147483647)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (var_9 | 95);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_19 -= -1;
                                var_20 = (min(var_20, (arr_17 [i_4] [i_4] [i_3])));
                            }
                        }
                    }
                    arr_18 [i_2] = ((-(((1 && (arr_2 [i_1]))))));
                    var_21 = 255;
                }
            }
        }
    }
    #pragma endscop
}
