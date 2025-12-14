/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-var_11 < var_0);
    var_14 = ((((33554431 ? (max(var_8, var_4)) : (max(-9, var_8))))) ? var_1 : (max((max(var_9, var_11)), var_10)));
    var_15 = (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((max((arr_2 [i_1]), var_4)))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_17 &= (min(-668047845, (((((33554437 ? 116 : (-127 - 1)))) ? (max(var_11, var_1)) : var_1))));
                    var_18 = (max(var_18, (max((!7), (arr_3 [i_0] [i_1])))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_19 = (min(var_19, ((((((var_7 ? ((((arr_8 [i_1] [i_1] [i_1] [i_1]) == 668047836))) : (!127)))) || -8)))));
                    var_20 = (max(var_20, var_1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_21 = (((var_11 ? var_9 : var_2)));
                                var_22 = (arr_4 [i_0] [i_1] [i_5]);
                            }
                        }
                    }
                    var_23 = (((((~var_2) ? var_6 : ((-6 ? 2169384582 : 4261412864)))) & var_4));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_24 = (max(var_24, (((min(((var_11 ? var_0 : (arr_10 [i_0] [i_0] [i_1] [i_6]))), ((((arr_0 [i_0]) > var_7)))))))));
                    var_25 ^= max(((~(min(var_11, var_4)))), (max(19, (((arr_10 [i_6] [i_6] [i_1] [i_0]) * (arr_15 [i_0] [i_0] [i_1] [i_6]))))));
                }
            }
        }
    }
    #pragma endscop
}
