/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max((min(((var_14 ? var_8 : 0)), var_13)), (((arr_4 [i_3] [i_3 - 1]) + (arr_4 [i_3] [i_3 + 1])))));
                                var_21 = (min(var_21, (-2588969301228978665 % 14003721543453648583)));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_0] = (!var_3);
                var_22 = (min(var_22, ((((((((arr_5 [i_0] [i_1]) >= (arr_11 [i_0] [i_0] [i_0] [22]))) ? (((max(var_7, var_0)))) : var_18)) != (max((((1273713911 ? 155 : 71))), (min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
            }
        }
    }
    var_23 -= (var_18 > var_9);
    #pragma endscop
}
