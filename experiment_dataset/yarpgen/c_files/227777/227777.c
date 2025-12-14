/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? var_2 : (var_0 % var_11)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((var_4 ? (arr_4 [i_0 - 1]) : ((min(var_9, -73))))));
                    arr_10 [i_0] = (min((min((min((arr_5 [13] [i_1]), (arr_8 [i_0] [i_0] [2] [i_0]))), (arr_5 [i_0 - 2] [i_1]))), ((((~var_12) ^ (arr_1 [i_0]))))));
                    var_15 *= (min(17778, (17778 - 4272108898)));
                    arr_11 [i_0] [i_1] [i_2] = (min(-var_12, (((!var_11) ? 0 : (min(47761, 4272108916))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 -= ((((var_13 + ((var_10 ? 1 : (arr_12 [i_4]))))) - var_12));
                                var_17 = (min(((min(-110, 0))), (((var_13 ^ (arr_4 [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, var_1));
    var_19 = 1762488167;
    #pragma endscop
}
