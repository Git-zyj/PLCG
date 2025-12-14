/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((~((((var_11 ? var_14 : var_0)) - ((var_3 ? var_14 : var_4)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (1231443654 | 8315293607610703228)));
                                arr_14 [i_0] [i_4] = ((((((var_11 < var_6) < (~var_15)))) & ((((min(var_9, var_17))) ? (!var_11) : (var_13 == var_17)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
