/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_2] = ((min(var_3, ((var_6 ? var_9 : var_6)))));
                    var_13 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 -= ((1 || ((((min(26513, 0)))))));
                                var_15 = 28515;
                                arr_16 [i_2] [i_2] [i_4] = ((((((var_5 ? var_5 : 1))) ? ((var_6 ? 2462091260 : 16553)) : ((-10917 ? var_3 : (arr_0 [i_0 - 2] [i_1]))))));
                            }
                        }
                    }
                }
                var_16 = (((min(1, var_10))));
                var_17 = (max(var_17, (arr_0 [i_0 + 1] [i_1])));
                arr_17 [8] [i_0] = (!24576);
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_18 = var_7;
        var_19 = (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_20 = (max((((~(~var_2)))), (min((max((arr_7 [i_5] [i_5] [i_5]), (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))), (((32756 ? var_3 : 86021448)))))));
    }
    var_21 = var_3;
    #pragma endscop
}
