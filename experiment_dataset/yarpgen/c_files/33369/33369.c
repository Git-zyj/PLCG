/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_5);
    var_13 = var_7;
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (~var_11)));
                    var_16 *= (((((var_9 >= ((2708068247293726966 ? (arr_1 [7]) : -787094079542214408))))) <= (((((-(arr_8 [i_2] [i_1 + 2] [i_0 + 1]))) > -787094079542214387)))));
                    var_17 = ((+((var_11 & ((((arr_8 [i_0] [i_0 + 2] [i_0 + 2]) ? var_3 : (arr_6 [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = ((-var_5 ? var_1 : (((65516 >= 4095) + 1))));
                                var_19 = 787094079542214386;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
