/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_0 | var_2) || (var_10 | var_8))) ? var_7 : (((var_15 ? var_0 : ((var_5 ? var_9 : var_5))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((var_15 ? (((arr_0 [i_0] [i_0]) & (arr_1 [i_0]))) : ((var_9 << (var_8 - 181)))));
        var_18 = ((!((min(var_11, (arr_1 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                var_19 = ((!((max((min(var_10, var_8)), var_8)))));
                arr_7 [i_1] = (((max(var_11, var_4)) != (!var_6)));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_20 = ((var_8 ? ((var_7 ? (var_8 && var_12) : (min(var_15, var_4)))) : (((max((!var_8), var_13))))));
                                var_21 -= (~var_5);
                            }
                        }
                    }
                }
                arr_17 [3] = min((arr_9 [i_1] [i_2] [i_1] [i_2]), var_2);
            }
        }
    }
    #pragma endscop
}
