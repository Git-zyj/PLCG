/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_16 = (((((+(((arr_8 [i_0] [i_1] [i_2] [i_1] [i_4]) ? var_7 : var_2))))) ? 45628 : ((31 ? ((1 ? -20 : 1228698662)) : (!5363012139311487377)))));
                                arr_12 [1] [1] [i_2] [i_3] [1] [i_4] [1] = var_12;
                            }
                        }
                    }
                    var_17 -= ((!((((arr_0 [i_0] [5]) ? ((2202 / (arr_5 [i_0] [i_1] [i_2]))) : (((var_3 ? 44219 : 44219))))))));
                }
            }
        }
    }
    #pragma endscop
}
