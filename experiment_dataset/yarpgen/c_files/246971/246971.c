/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 - 2] [i_2] [i_0] = (((((max(var_4, var_7))) ? var_0 : var_4)) - (min((0 > 0), ((var_9 ? var_0 : var_9)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 *= (!var_7);
                                arr_12 [i_0] = (max((!var_10), (111 - 18182964612205408612)));
                            }
                        }
                    }
                    var_12 = (((((var_4 ? var_4 : var_8)))) / ((var_2 ? var_4 : (var_1 && var_10))));
                    var_13 = var_7;
                    arr_13 [i_0] [i_0] [i_2] = max((((var_8 && var_10) ? var_2 : (((10541295412459112014 ? 122 : -111))))), (min(((var_8 ? var_1 : var_10)), (~var_6))));
                }
            }
        }
        var_14 = ((var_8 >= (!var_8)));
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_15 = ((!(var_7 && var_2)));
                    arr_23 [i_5] = ((((!(((var_0 << (var_9 - 80)))))) ? ((min(var_1, var_0))) : (min((var_9 <= var_2), var_4))));
                }
            }
        }
    }
    #pragma endscop
}
