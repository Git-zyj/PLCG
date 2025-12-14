/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = ((!(((-(arr_4 [20] [i_2 - 3] [i_2 - 3]))))));
                                var_16 = (((max((arr_5 [i_1]), 0)) >> (((max((arr_2 [i_2]), (!0))) - 17762607952968052225))));
                                var_17 = ((-(max(276351680, (max(7, -32))))));
                                var_18 = ((((~(max(var_13, (arr_5 [i_1]))))) != ((min(((max(var_11, var_5))), (min(32512, 65520)))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_1] = var_13;
                }
            }
        }
    }
    var_19 -= ((((min(((max(var_14, var_2))), var_6))) ? (((max(var_11, var_8)) / 65503)) : 32512));
    var_20 = (min(var_20, (((max((((var_9 ? var_3 : 65520))), (min(-4908037242988721349, var_10))))))));
    var_21 = ((!(((2195148603 ? var_7 : (65520 % 1610612736))))));
    #pragma endscop
}
