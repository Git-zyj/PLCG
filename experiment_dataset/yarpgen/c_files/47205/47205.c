/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] = (36040 << (((((-14048 ? 2246752391 : 14047))) - 2246752378)));
                                var_11 = (((arr_5 [i_0] [i_1 + 1]) ? (((((var_1 ? (arr_0 [i_1]) : var_5))) ? (((arr_0 [i_0]) - (arr_12 [i_0] [i_4] [i_4] [i_0]))) : (arr_10 [i_4] [i_4] [i_0 - 2]))) : -14048));
                                var_12 = -1005178403763809010;
                            }
                        }
                    }
                }
                var_13 = (((arr_11 [i_0 - 1]) ? ((-(((arr_8 [i_0]) ? 20 : 7)))) : 20));
            }
        }
    }
    var_14 &= (((max((min(var_7, var_7)), ((0 ? var_2 : var_1)))) + var_1));
    var_15 = var_10;
    #pragma endscop
}
