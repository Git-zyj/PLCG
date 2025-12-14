/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(var_3, ((max(21469, var_5))));
    var_11 -= (min(var_5, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] = -3881700319249089963;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = (((arr_12 [i_4 + 3] [i_4 + 3] [i_4] [i_4] [i_4] [i_4 + 3]) ? (arr_2 [i_0]) : (arr_12 [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4 - 1])));
                                var_13 = var_7;
                                var_14 = (max((min(var_4, 9223372036854775799)), 15));
                                var_15 = (max((9223372036854775799 + -15), (min((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_7 [i_0] [i_0])))));
                                var_16 = min((min((arr_3 [i_0] [i_4 + 2] [i_0]), (arr_3 [i_0] [i_4 + 2] [i_0]))), (!14));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 ^= ((((2197949513728 ? var_1 : var_4))) ? (min(((var_3 ? var_8 : -15)), var_8)) : (!8983588025148451912));
    #pragma endscop
}
