/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 |= (max(((max(var_11, var_7))), (!var_7)));
                            var_18 = max((min((arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]), (arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2]))), (max(var_4, (arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))));
                            var_19 = (var_15 == var_7);
                            var_20 = 1;
                        }
                    }
                }
                var_21 = ((~(~var_8)));
            }
        }
    }
    var_22 |= ((var_13 << (var_9 - 72)));
    var_23 = (max(var_23, (((((((((var_15 ? 1154486725 : var_13))) ? ((var_2 ? var_4 : var_12)) : ((-34291416 ? 7876 : 7884))))) ? var_13 : ((-var_3 ? var_13 : var_10)))))));
    var_24 = -7854;
    var_25 = var_1;
    #pragma endscop
}
