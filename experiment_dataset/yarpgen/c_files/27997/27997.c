/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 *= (max((((((var_12 ? 19543 : (arr_1 [i_0] [10]))) > var_2))), ((((max(32, (arr_1 [i_0] [10])))) ? var_2 : (min(var_11, -19544))))));
        var_14 = (391578472751685384 - var_7);
        var_15 = (max(var_11, (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = (max((max(var_12, (arr_0 [i_0 + 2] [i_0]))), (min((arr_1 [i_0 - 1] [i_0]), var_8))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                arr_8 [i_2] [i_2] = 224;
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [i_4] [i_2] = var_0;
                                var_16 = (min(var_16, ((max((((arr_11 [i_2] [i_4] [i_5] [i_5]) ? var_7 : (arr_14 [i_3] [i_3] [i_3] [i_1]))), var_7)))));
                                var_17 = (arr_7 [i_2] [4] [0]);
                                var_18 = ((((!(((var_8 ? (arr_9 [i_1] [i_2] [3]) : var_4))))) ? ((((min(var_4, (arr_6 [i_2] [i_4] [i_2])))) ? (280156788 / 3944619444) : (max(4014810508, var_7)))) : ((((280156788 >= (((214 ? 223 : 212)))))))));
                                var_19 = (max(((min((arr_11 [i_1] [i_2] [i_3] [i_4]), 2351598372))), (max(var_4, (arr_0 [i_1] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
